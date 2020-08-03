using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Game
{
    public bool isPlayed = false;
    private List<List<Tile>> matchfield = new List<List<Tile>>();
    private List<KeyValuePair<int, int>> jumpResult = new List<KeyValuePair<int, int>>();
    private List<Tile> naighbors = new List<Tile>();
    private string matchfieldArrangement;
    private Tile actualTile;
    private Chapter chapter;
    private int tries = 0;
    private bool isFirstJump = true;
    private bool onCorrectWay = true;
    private int hints = 0;
    private int jumps = 0;

    public Game(string matchfieldArrangement, Chapter chapter)
    {
        this.matchfieldArrangement = matchfieldArrangement;
        this.chapter = chapter;

        // RANDOM MATCHFIELD
        // this.matchfieldArrangement = MatchfieldGenerator.GenerateMatchfieldString(5, 5, 65, this);
        SetBegin();
    }

    public void SetBegin()
    {
        isFirstJump = true;
        onCorrectWay = true;
        jumps = 0;
        matchfield.Clear();
        using (StringReader sr = new StringReader(matchfieldArrangement))
        {
            int row = int.Parse(sr.ReadLine().Split(' ')[1]);
            int column = int.Parse(sr.ReadLine().Split(' ')[1]);
            int anzahlOccupied = int.Parse(sr.ReadLine().Split(' ')[1]);
            List<OccupiedTile> occupiedList = GetOccupiedTiles(anzahlOccupied);
            String[] startPositionStrings = sr.ReadLine().Split(' ');
            KeyValuePair<int, int> startPosition
                = new KeyValuePair<int, int>(int.Parse(startPositionStrings[1]), int.Parse(startPositionStrings[2]));

            for (int i = 0; i < row; i++)
            {
                List<Tile> columnList = new List<Tile>();
                for (int j = 0; j < column; j++)
                {
                    columnList.Add(GenerateTile(sr.ReadLine().Split('(', ')'), occupiedList));
                }
                matchfield.Add(columnList);
            }

            actualTile = this.matchfield[startPosition.Value][startPosition.Key];
            GenerateNaighbors(1);

            GenerateResult(sr, row, column);
        }


    }

    private void GenerateResult(StringReader sr, int row, int column)
    {
        jumpResult = new List<KeyValuePair<int, int>>();
        String jumpIndizes = sr.ReadLine();
        int i = 1;
        while (jumpIndizes != null)
        {
            if (!jumpIndizes.Equals(""))
            {
                String[] indexStrings = jumpIndizes.Split(' ');
                jumpResult.Add(new KeyValuePair<int, int>(int.Parse(indexStrings[1]), int.Parse(indexStrings[0])));
            }
            jumpIndizes = sr.ReadLine();
            i++;
        }
    }

    private List<OccupiedTile> GetOccupiedTiles(int occupiedTilesCount)
    {
        List<OccupiedTile> occupiedTiles = new List<OccupiedTile>();
        for (int i = 0; i < occupiedTilesCount; i++)
        {
            occupiedTiles.Add(new OccupiedTile(this, i));
        }

        return occupiedTiles;
    }

    private Tile GenerateTile(String[] tileName, List<OccupiedTile> occupiedList)
    {
        switch (tileName[0])
        {
            case "NTile":
                return new NTile(int.Parse(tileName[1]), this);
            case "JumpTile":
                return new JumpTile(int.Parse(tileName[1]), this);
            case "OccupiedTile":
                return occupiedList[int.Parse(tileName[1])];
            case "SwitchTile":
                return new SwitchTile(occupiedList[int.Parse(tileName[1])], this, int.Parse(tileName[1]));
            default:
                return null;
        }
    }

    public void SaveGame()
    {
        string path = "Assets/Resources/GeneratedGames/" + Time.deltaTime.ToString() + ".txt";

        //Write some text to the test.txt file
        StreamWriter writer = new StreamWriter(path, true);
        writer.Write(matchfieldArrangement);
        writer.Close();
    }

    public void GamePlayed()
    {
        if (this.isPlayed)
        {
            return;
        }

        this.isPlayed = true;
        this.chapter.Player.Coins += tries == 1 ? (TBConstants.GAME_FIRST_TRY_REWARD + TBConstants.GAME_REWARD) :
            TBConstants.GAME_REWARD;
        this.Chapter.ReloadAvailableGames();
    }

    public void DoubleReward()
    {
        if (!this.isPlayed)
        {
            return;
        }

        this.chapter.Player.Coins += tries == 1 ? (TBConstants.GAME_FIRST_TRY_REWARD + TBConstants.GAME_REWARD) :
            TBConstants.GAME_REWARD;
        SaveLoadGame.SaveGame();
    }

    public void GenerateNaighbors(int tilesNextToActual)
    {
        naighbors.Clear();

        for (int i = 0; i < matchfield.Count; i++)
        {
            if (!matchfield[i].Contains(actualTile))
            {
                continue;
            }

            SetNaighborsFromTileAtPosition(i, matchfield[i].IndexOf(actualTile), tilesNextToActual);
            return;
        }
    }

    private void SetNaighborsFromTileAtPosition(int row, int column, int tilesNextToActual)
    {
        //UP
        if (column < tilesNextToActual)
        {
            naighbors.Insert(0, null);
        }
        else
        {
            naighbors.Insert(0, matchfield[row][column - tilesNextToActual]);
        }

        // RIGHT
        if (row > matchfield.Count - 1 - tilesNextToActual)
        {
            naighbors.Insert(1, null);
        }
        else
        {
            naighbors.Insert(1, matchfield[row + tilesNextToActual][column]);
        }

        // DOWN
        if (column > matchfield[row].Count - 1 - tilesNextToActual)
        {
            naighbors.Insert(2, null);
        }
        else
        {
            naighbors.Insert(2, matchfield[row][column + tilesNextToActual]);
        }

        // LEFT
        if (row < tilesNextToActual)
        {
            naighbors.Insert(3, null);
        }
        else
        {
            naighbors.Insert(3, matchfield[row - tilesNextToActual][column]);
        }
    }

    public void DeleteTile(Tile tile)
    {
        foreach (List<Tile> tileList in matchfield)
        {
            if (tileList.Contains(tile))
            {
                int index = tileList.IndexOf(tile);
                tileList.Remove(tile);
                tileList.Insert(index, null);
                return;
            }
        }
    }

    public void JumpToTile(Tile tile)
    {
        if (tile == null || !tile.IsAvailable)
        {
            return;
        }

        jumps += 1;
        handleTries();
        handleResultHints(tile);
        actualTile.OfAction();
        actualTile = tile;
        GenerateNaighbors(1);
        actualTile.OnAction();
    }

    private void handleTries()
    {
        if (isFirstJump)
        {
            tries++;
            isFirstJump = false;
        }
    }

    private void handleResultHints(Tile tile)
    {
        if (!onCorrectWay || JumpResult.Count == 0)
        {
            return;
        }

        JumpResult.RemoveAt(0);
        KeyValuePair<int, int> tilePosition = GetTilePosition(tile);
        if (tilePosition.Key != jumpResult[0].Key || tilePosition.Value != jumpResult[0].Value)
        {
            onCorrectWay = false;
        }
    }

    private KeyValuePair<int, int> GetTilePosition(Tile tile)
    {
        KeyValuePair<int, int> tilePosition = new KeyValuePair<int, int>();
        for (int i = 0; i < matchfield.Count; i++)
        {
            for (int j = 0; j < matchfield[i].Count; j++)
            {
                if (matchfield[i][j] != null && matchfield[i][j].Equals(tile))
                {
                    tilePosition = new KeyValuePair<int, int>(i, j);
                    break;
                }
            }
        }

        return tilePosition;
    }

    public bool IsWon()
    {
        foreach (List<Tile> row in matchfield)
        {
            foreach (Tile tile in row)
            {
                if (tile == null || !tile.IsAvailable || tile.Equals(actualTile))
                {
                    continue;
                }

                return false;
            }
        }
        return true;
    }

    public bool IsLose()
    {
        if (actualTile == null || ((naighbors[0] == null || !naighbors[0].IsAvailable) &&
                (naighbors[1] == null || !naighbors[1].IsAvailable) && (naighbors[2] == null || !naighbors[2].IsAvailable)
                    && (naighbors[3] == null || !naighbors[3].IsAvailable)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public bool BuyHint()
    {
        if (chapter.Player.Hints < 1)
        {
            return false;
        }

        chapter.Player.RemoveHint();
        this.hints++;
        return true;
    }

    //Getter and Setter
    public List<Tile> Naighbors { get { return naighbors; } }
    public Chapter Chapter { get { return chapter; } }
    public List<List<Tile>> Matchfield { get { return matchfield; } }
    public Tile ActualTile { get { return actualTile; } }
    public bool IsPlayed { get { return isPlayed; } }
    public List<KeyValuePair<int, int>> JumpResult { get { return jumpResult; } }
    public int Tries { get { return tries; } set { tries = value; } }
    public bool OnCorrectWay { get { return onCorrectWay; } }
    public int Hints { get { return hints; } set { hints = value; } }
    public int Jumps { get { return jumps; } }
}