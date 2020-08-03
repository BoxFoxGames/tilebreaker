using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MatchfieldGenerator {

    private static List<OccupiedTile> occupiedList = new List<OccupiedTile>();
    private static int occupiedPlaced = 0;
    private static KeyValuePair<int, int> startPosition;
    private static List<KeyValuePair<int, int>> correctPath;

    public static String GenerateMatchfieldString(int row, int column, int zuege, Game game) {
        return GenerateMatchfieldText(GenerateMatchfield(row, column, zuege, game));
    }

    /// <summary>  
    ///  Gibt ein Spielfeld von Tiles zurück, mit der anzahl der übergebenen rows und columns, für die 
    ///  Anzahl der übergebenen züge. Das ganze wird in dem übergebenen Spiel gespeichert.
    /// </summary>  
    public static List<List<Tile>> GenerateMatchfield(int row, int column, int zuege, Game game)
    {
        correctPath = new List<KeyValuePair<int, int>>();
        occupiedList.Clear();
        occupiedPlaced = 0;
        List<List<string>> field = new List<List<string>>();
        List<String> possibilities;
        List<int> way = new List<int>();
        System.Random random = TBConstants.RANDOM;
        int actualRow = random.Next(row - 1);
        int actualColumn = random.Next(column - 1);
        int direction = 0;
        String newTile = null;

        startPosition = new KeyValuePair<int, int>(actualRow, actualColumn);
        correctPath.Add(startPosition);

        //fill field with null and startTile
        for (int i = 0; i < row; i++)
        {
            List<String> newRow = new List<string>();
            for (int j = 0; j < column; j++)
            {
                if (i == actualRow && j == actualColumn)
                {
                    newRow.Add("Tile1");
                }
                else
                {
                    newRow.Add(null);
                }
            }
            field.Add(newRow);
        }

        // replace field with Tiles
        for (int i = 0; i < zuege; i++)
        {
            possibilities = GetPossibilities(random, row - 1, column - 1, actualRow, actualColumn, field,
                zuege - i > occupiedList.Count - occupiedPlaced, zuege - i);
            if (possibilities[0] == null && possibilities[1] == null
                && possibilities[2] == null && possibilities[3] == null)
            {
                // TODO züg größe anpassen.
                if(i < 15)
                {
                    // zu wenig züge zum Sieg, neues Spielfeld generieren
                    return GenerateMatchfield(row, column, zuege, game);
                } else
                {
                // keine anderen Felder mehr möglich, falls notwendig die SwitchTiles durch 1Tiles ersetzen.
                return FormateToMatchfield(field, game);
                }
            }
            else
            {
                // neues Tile herausfinden
                newTile = null;
                while (newTile == null)
                {
                    direction = random.Next(0, 4);
                    newTile = possibilities[direction];
                }

                // Variablen aktuallisieren
                int felder = 1;
                if (field[actualRow][actualColumn].Equals("TileJump"))
                {
                    felder = 2;
                }

                if (direction == 0)
                {
                    actualColumn -= felder;
                }
                else if (direction == 1)
                {
                    actualRow += felder;
                }
                else if (direction == 2)
                {
                    actualColumn += felder;
                }
                else if (direction == 3)
                {
                    actualRow -= felder;
                }

                if (possibilities[direction].StartsWith("TileOccupied"))
                {
                    occupiedPlaced++;
                }
                else if (possibilities[direction].StartsWith("TileSwitch"))
                {
                    occupiedList.Add(new OccupiedTile(game, occupiedList.Count));
                }

                way.Add(direction);

                // neues Tile setzen
                field[actualRow][actualColumn] = newTile;
                correctPath.Add(new KeyValuePair<int, int>(actualRow, actualColumn));
            }
        }

        return FormateToMatchfield(field, game);
    }

    /// <summary>  
    ///  Gibt eine Liste zurück, in welcher gespeichert ist, in welcher der 4 möglichen Richtungen, welches Tile erstellt wird.
    /// Beim index 0, ist es das Tile oberhalb der aktuellen Position.Beim index 1, das rechte Tile, 2 das untere und beim 
    /// index 3 das linke Tile.
    /// </summary>  
    private static List<String> GetPossibilities(System.Random random, int maxRow, int maxColumn, int actualRow, int actualColumn, List<List<String>> field, bool couldOccupied, int restZuege)
    {
        List<String> possibilities = new List<String>();
        int felder = 1;
        if (field[actualRow][actualColumn] != null && field[actualRow][actualColumn].Equals("TileJump"))
        {
            felder = 2;
        }

        // index 0 -> oben
        if (actualColumn < felder || (actualColumn == 1 && actualRow == 0))
        {
            possibilities.Add(null);
        }
        else if (field[actualRow][actualColumn - felder] == null)
        {
            // jump möglich?
            if ((actualColumn >= felder + 2 && field[actualRow][actualColumn - 2 - felder] == null) ||
                (actualColumn <= maxColumn + felder - 2 && field[actualRow][actualColumn - felder + 2] == null) ||
                (actualRow < maxRow - 1 && field[actualRow + 2][actualColumn - felder] == null) ||
                (actualRow > 1 && field[actualRow - 2][actualColumn - felder] == null))
            {
                possibilities.Add(SetTile(random, true, restZuege));
            }
            else
            {
                possibilities.Add(SetTile(random, false, restZuege));
            }
        }
        else if (field[actualRow][actualColumn - felder].Equals("Tile1"))
        {
            if (random.Next(2) > 0)
            {
                possibilities.Add("Tile2");
            }
            else
            {
                possibilities.Add(null);
            }
        }
        else
        {
            possibilities.Add(null);
        }

        // index 1 -> rechts
        if (actualRow > maxRow - felder)
        {
            possibilities.Add(null);
        }
        else if (field[actualRow + felder][actualColumn] == null)
        {
            // jump möglich?
            if ((actualColumn > 1 && field[actualRow + felder][actualColumn - 2] == null) ||
                (actualColumn < maxColumn - 1 && field[actualRow + felder][actualColumn + 2] == null) ||
                (actualRow <= maxRow - felder - 2 && field[actualRow + 2 + felder][actualColumn] == null) ||
                (actualRow >= 2 - felder && field[actualRow + felder - 2][actualColumn] == null))
            {
                possibilities.Add(SetTile(random, true, restZuege));
            }
            else
            {
                possibilities.Add(SetTile(random, false, restZuege));
            }
        }
        else if (field[actualRow + felder][actualColumn].Equals("Tile1"))
        {
            if (random.Next(2) > 0)
            {
                possibilities.Add("Tile2");
            }
            else
            {
                possibilities.Add(null);
            }
        }
        else
        {
            possibilities.Add(null);
        }

        // index 2 -> unten
        if (actualColumn > maxColumn - felder)
        {
            possibilities.Add(null);
        }
        else if (field[actualRow][actualColumn + felder] == null)
        {
            // jump möglich?
            if ((actualColumn >= felder - 2 && field[actualRow][actualColumn + felder] == null) ||
                (actualColumn <= maxColumn - felder - 2 && field[actualRow][actualColumn + felder + 2] == null) ||
                (actualRow < maxRow - 1 && field[actualRow + 2][actualColumn + felder] == null) ||
                (actualRow > 1 && field[actualRow - 2][actualColumn + felder] == null))
            {
                possibilities.Add(SetTile(random, true, restZuege));
            }
            else
            {
                possibilities.Add(SetTile(random, false, restZuege));
            }
        }
        else if (field[actualRow][actualColumn + felder].Equals("Tile1"))
        {
            if (random.Next(2) > 0)
            {
                possibilities.Add("Tile2");
            }
            else
            {
                possibilities.Add(null);
            }
        }
        else
        {
            possibilities.Add(null);
        }

        // index 3 -> links
        if (actualRow < felder || (actualColumn == 0 && actualRow == 1))
        {
            possibilities.Add(null);
        }
        else if (field[actualRow - felder][actualColumn] == null)
        {
            // jump möglich?
            if ((actualColumn > 1 && field[actualRow - felder][actualColumn - 2] == null) ||
                (actualColumn < maxColumn - 1 && field[actualRow - felder][actualColumn + 2] == null) ||
                (actualRow <= maxRow + felder - 2 && field[actualRow - felder + 2][actualColumn] == null) ||
                (actualRow >= felder + 2 && field[actualRow - felder - 2][actualColumn] == null))
            {
                possibilities.Add(SetTile(random, true, restZuege));
            }
            else
            {
                possibilities.Add(SetTile(random, false, restZuege));
            }
        }
        else if (field[actualRow - felder][actualColumn].Equals("Tile1"))
        {
            if (random.Next(2) > 0)
            {
                possibilities.Add("Tile2");
            }
            else
            {
                possibilities.Add(null);
            }
        }
        else
        {
            possibilities.Add(null);
        }

        return possibilities;
    }

    /// <summary>  
    ///  gibt ein zufälliges Tile als String zurück, für ein bisher leeres Feld 
    /// </summary>  
    private static String SetTile(System.Random random, bool couldJump, int restZuege)
    {
        int chance = random.Next(10);
        int openOccupied = occupiedList.Count - occupiedPlaced;

        if (restZuege + 1 - openOccupied < 1)
        {
            openOccupied = 0;
        }

        if (occupiedList.Count > occupiedPlaced && random.Next(0, restZuege + 1 - openOccupied) == 0)
        {
            return "TileOccupied " + occupiedPlaced;
        }
        else if (chance == 4 || chance == 5 && couldJump)
        {
            return "TileJump";
        }
        else if (chance == 3 || chance == 6 || chance == 7 || chance == 8 || chance == 9)
        {
            return "TileSwitch " + (occupiedList.Count);
        }
        else
        {
            return "Tile1";
        }
    }

    /// <summary>  
    ///  Formt aus dem String Spielfeld ein Spielfeld mit den entsprechenden Tiles.
    /// </summary>  
    private static List<List<Tile>> FormateToMatchfield(List<List<String>> field, Game game)
    {
        List<List<Tile>> matchfield = new List<List<Tile>>();

        if (occupiedList.Count > occupiedPlaced)
        {
            for (int x = 0; x < field.Count; x++)
            {
                for (int y = 0; y < field[x].Count; y++)
                {
                    if (field[x][y] != null && field[x][y].StartsWith("TileSwitch")
                        && int.Parse(field[x][y].Split(' ')[1]) >= occupiedPlaced)
                    {
                        field[x][y] = "Tile1";
                    }
                }
            }
        }

        foreach (List<String> row in field)
        {
            List<Tile> newRow = new List<Tile>();
            foreach (String column in row)
            {
                switch (column)
                {
                    case null:
                        newRow.Add(null);
                        break;
                    case "Tile1":
                        newRow.Add(new NTile(1, game));
                        break;
                    case "Tile2":
                        newRow.Add(new NTile(2, game));
                        break;
                    case "TileJump":
                        newRow.Add(new JumpTile(2, game));
                        break;
                    default:
                        if (column.StartsWith("TileOccupied"))
                        {
                            newRow.Add(occupiedList[int.Parse(column.Split(' ')[1])]);
                        }
                        else if (column.StartsWith("TileSwitch"))
                        {
                            newRow.Add(new SwitchTile(occupiedList[int.Parse(column.Split(' ')[1])], game, int.Parse(column.Split(' ')[1])));
                        }
                        break;
                }
            }
            matchfield.Add(newRow);
        }

        return matchfield;
    }

    private static String GenerateMatchfieldText(List<List<Tile>> toGeneratedMatchfield)
    {
        List<OccupiedTile> occupiedList = GetOccupiedTilesFromMatchfield(toGeneratedMatchfield);

        String textField = "Row: " + toGeneratedMatchfield.Count + "\nColumn: "
        + toGeneratedMatchfield[0].Count + "\nOccupied: " + occupiedList.Count + " \n"
        + "Start: " + startPosition.Value + " " + startPosition.Key + " \n";

        foreach (List<Tile> row in toGeneratedMatchfield)
        {
            foreach (Tile tile in row)
            {
                textField += GetTextForTile(tile, occupiedList);
            }
        }

        textField += "\n" + GetCorrectPathString();

        return textField;
    }

    private static string GetCorrectPathString()
    {
        string correctPathString = "";

        foreach(KeyValuePair<int, int> position in correctPath) {
            correctPathString += position.Value + " " + position.Key + "\n";
        }

        return correctPathString;
    }

    private static List<OccupiedTile> GetOccupiedTilesFromMatchfield(List<List<Tile>> toGeneratedMatchfield)
    {
        List<OccupiedTile> occupiedTiles = new List<OccupiedTile>();

        foreach (List<Tile> r in toGeneratedMatchfield)
        {
            foreach (Tile t in r)
            {
                if (t == null || !t.ToString().StartsWith("OccupiedTile"))
                {
                    continue;
                }

                occupiedTiles.Add((OccupiedTile)t);
            }
        }

        return occupiedTiles;
    }

    private static String GetTextForTile(Tile tile, List<OccupiedTile> occupiedList)
    {
        if (tile == null)
        {
            return "null \n";
        }

        switch (tile.ToString())
        {
            case "1Tile":
                return "NTile(1) \n";
            case "2Tile":
                return "NTile(2) \n";
            case "JumpTile":
                return "JumpTile(2) \n";
            case "OccupiedTile":
                return "OccupiedTile(" + occupiedList.IndexOf((OccupiedTile)tile) + ") \n";
            case "SwitchTile":
                SwitchTile switchTile = (SwitchTile)tile;
                return "SwitchTile(" + occupiedList.IndexOf(switchTile.FreeTile) + ") \n";

            default:
                return "null \n";
        }
    }
}
