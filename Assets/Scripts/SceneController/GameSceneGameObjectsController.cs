using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameSceneGameObjectsController
{
    private Game game;
    private List<List<GameObject>> tileGameObjects = new List<List<GameObject>>();
    private float tileSpacing;
    private Vector3 tileScale;
    private Vector3 characterScale;

    private readonly GameObjectLoader gameObjectLoader = new GameObjectLoader();
    private readonly OpenWindowEvents openWindowEvents = new OpenWindowEvents();

    public void GenerateSizes(Game game, Vector3 previusCharacterScale)
    {
        this.game = game;
        int row = game.Matchfield.Count;
        int column = game.Matchfield[0].Count;
        float tileSize = 1f + ((5 - row) * 0.2f);
        float figurSize = 1.8f + ((5 - row) * 0.4f);
        characterScale = new Vector3(previusCharacterScale.x * figurSize,
            previusCharacterScale.y * figurSize, previusCharacterScale.z * figurSize);
        tileSpacing = GetTileSpacing(row);
        tileScale = new Vector3(tileSize, tileSize, tileSize);
    }

    public float GetTileSpacing(int row)
    {
        switch (5 - row)
        {
            case 0:
                return 30;
            case 1:
                return 40;
            case -1:
                return 24;
            default:
                return 0;
        }
    }

    public void DeleteExistingTutorials()
    {
        foreach (Transform t in GameObject.Find("GameUI").GetComponentInChildren<Transform>())
        {
            if (t.gameObject.name.StartsWith("Tutorial"))
            {
                GameObject.Destroy(t.gameObject);
            }
        }
    }

    public void SetTutorial(int gameIndex)
    {
        DeleteExistingTutorials();

        if (gameIndex == TBConstants.START_TUTORIAL_GAME_INDEX)
        {
            SetTutorial("TutorialStartInfo");
            InactiveGameObject.FindInactiveObject(GameObject.Find("GameUI"), "SwipeAnimation").SetActive(true);
        }
        else if (gameIndex == TBConstants.TWO_TILE_TUTORIAL_GAME_INDEX)
        {
            SetTutorial("Tutorial2TileInfo");
        }
        else if (gameIndex == TBConstants.JUMP_TILE_TUTORIAL_GAME_INDEX)
        {
            SetTutorial("TutorialJumpTileInfo");
        }
        else if (gameIndex == TBConstants.OCCUPIED_SWITCH_TILE_TUTORIAL_GAME_INDEX)
        {
            SetTutorial("TutorialOccupiedTileInfo");
        }
        else if (gameIndex == TBConstants.HINTS_TUTORIAL_GAME_INDEX)
        {
            StartHintTutorial();
        }
    }

    private void StartHintTutorial()
    {
        if (!Player.GetInstance().HasUserGetFreeHints)
        {
            openWindowEvents.OpenGetHintsDialog(GameObject.Find("GameUI"));
        }
        else if (!Player.GetInstance().HasUserPlayedHintTutorial && Player.GetInstance().ActualGame.Hints == 0)
        {
            GameObject.Find("Matchfield").GetComponent<GameSceneController>().SetTutorialFirstHint();
        }
    }

    private void SetTutorial(string name)
    {
        GameObject container = GameObject.Find("GameUI");
        GameObject tutorial = gameObjectLoader.GetTutorial(name);
        tutorial.transform.parent = container.transform;
        tutorial.transform.localScale = new Vector3(1, 1, 1);
        tutorial.GetComponent<RectTransform>().offsetMin = new Vector2(0, 0);
        tutorial.GetComponent<RectTransform>().offsetMax = new Vector2(0, 400);
    }

    public Vector3 GetCharacterScale()
    {
        return characterScale;
    }

    public Vector3 GetTilePosition(Tile tile)
    {
        int rows = game.Matchfield.Count;
        int columns = game.Matchfield[0].Count;
        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                if (game.Matchfield[x][y] != null && game.Matchfield[x][y].Equals(tile))
                {
                    return new Vector3((TBConstants.TILE_X_START_POSITION - (tileSpacing * x)), 5f,
                        (-TBConstants.TILE_X_START_POSITION + (tileSpacing * y)));
                }
            }
        }
        return new Vector3(0, 0, 0);
    }

    public GameObject GetTileGameObject(Tile tile)
    {
        int rows = game.Matchfield.Count;
        int columns = game.Matchfield[0].Count;
        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                if (game.Matchfield[x][y] != null && game.Matchfield[x][y].Equals(tile))
                {
                    return tileGameObjects[x][y];
                }
            }
        }
        return null;
    }

    public List<List<GameObject>> GenerateSpielfeld(GameObject matchfieldGameObject)
    {
        foreach (Transform t in matchfieldGameObject.GetComponentInChildren<Transform>())
        {
            if (!t.gameObject.name.Equals("Player") && !t.gameObject.name.Equals("Matchfield"))
            {
                GameObject.Destroy(t.gameObject);
            }
        }

        tileGameObjects = new List<List<GameObject>>();
        List<List<Tile>> matchfield = game.Matchfield;
        Tile tile;
        for (int i = 0; i < matchfield.Count; i++)
        {
            tileGameObjects.Add(new List<GameObject>());
            for (int j = 0; j < matchfield[i].Count; j++)
            {
                tile = matchfield[i][j];
                if (tile == null)
                {
                    tileGameObjects[i].Add(null);
                    continue;
                }

                tileGameObjects[i].Add(CreateTile(tile, tileScale, new Vector3(
                    (TBConstants.TILE_X_START_POSITION - (i * tileSpacing)), 0f,
                        (-TBConstants.TILE_X_START_POSITION + (j * tileSpacing))), matchfieldGameObject));
            }
        }

        return tileGameObjects;
    }

    private GameObject CreateTile(Tile tile, Vector3 scale, Vector3 position, GameObject matchfieldGameObject)
    {
        GameObject tileGameObject = gameObjectLoader.GetTile(tile, game.Chapter);
        tileGameObject.name = "Tile";
        tileGameObject.GetComponent<Transform>().parent = matchfieldGameObject.GetComponent<Transform>();
        tileGameObject.GetComponent<Transform>().localScale = scale;
        tileGameObject.GetComponent<TileBlinker>().size = scale;
        tileGameObject.GetComponent<Transform>().localPosition = position;

        return tileGameObject;
    }

    public void SetWinVisible()
    {
        openWindowEvents.OpenWinWindow(GameObject.Find("Matchfield"), !game.IsPlayed);
    }

    public void SetLoseVisible()
    {
        openWindowEvents.OpenLoseWindow(GameObject.Find("Matchfield"));
    }

    public void OpenTutorialHintDescription()
    {
        openWindowEvents.OpenHintDescriptionDialog(GameObject.Find("GameUI"));
    }

    public void OpenHintShop()
    {
        openWindowEvents.OpenHintShop(GameObject.Find("GameUI"));
    }
}
