using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameObjectLoader
{
    private readonly string tilePath = "Prefabs/Tiles/";
    private readonly string characterPath = "Prefabs/Character/";
    private readonly string actualCharacterShopPath = "Prefabs/Character/ActualShopCharacter/";
    private readonly string buttonPath = "Prefabs/UI/Buttons/";
    private readonly string windowsPath = "Prefabs/UI/Windows/";
    private readonly string tutorialsPath = "Prefabs/UI/Tutorial/";
    private readonly string backgroundObjectPath = "Prefabs/Background/";


    public GameObject GetPressedTile(int switchTileNumber, Chapter chapter) {
        string tileName = "SwitchTilePressed" + GetColorByNumber(switchTileNumber);
        GameObject tileObj = GameObject.Instantiate((GameObject)Resources.Load(tilePath + chapter.Name + "/" + tileName));
        return tileObj;
    }
    
    public GameObject GetTile(Tile tile, Chapter chapter)
    {
        string tileName = GetTileName(tile);
        GameObject tileObj = GameObject.Instantiate((GameObject)Resources.Load(tilePath + chapter.Name + "/" + tileName));
        tileObj.AddComponent<AudioSource>();
        if (tileName.StartsWith("SwitchTile"))
        {
            tileObj.GetComponent<AudioSource>().clip = (AudioClip)Resources.Load("Sound/klick");
            tileObj.GetComponent<AudioSource>().volume = 0.3f;
            tileObj.GetComponent<CollideSwitchTile>().switchTileNumber = ((SwitchTile) tile).occupiedTileNumber;
        }
        return tileObj;
    }

    private string GetTileName(Tile tile)
    {
        string tileName = tile.ToString();

        if (tileName.StartsWith("OccupiedTile") && tile.IsAvailable)
        {
            tileName = "1Tile";
        }
        else if (tileName.StartsWith("OccupiedTile"))
        {
            tileName += GetColorByNumber(((OccupiedTile)tile).occupiedTileNumber);
        }
        else if (tileName.StartsWith("SwitchTile"))
        {
            tileName += GetColorByNumber(((SwitchTile)tile).occupiedTileNumber);
        }

        return tileName;
    }

    private string GetColorByNumber(int number)
    {
        switch (number)
        {
            case 0:
                return "Red";
            case 1:
                return "Blue";
            case 2:
                return "Green";
            default:
                return "Red";
        }
    }

    public GameObject GetCharacter(Character character)
    {
        GameObject characterModel = GameObject.Instantiate((GameObject)Resources.Load(
            characterPath + character.Name));
        characterModel.AddComponent<AudioSource>();
        characterModel.GetComponent<AudioSource>().volume = 0.3f;
        characterModel.GetComponent<AudioSource>().clip = (AudioClip)Resources.Load("Sound/jump1");
        return characterModel;
    }

    public GameObject GetActualCharacterShop(Character character)
    {
        GameObject characterModel = GameObject.Instantiate((GameObject)Resources.Load(
            actualCharacterShopPath + character.Name));
        return characterModel;
    }

    public GameObject GetGameButton(bool isAvailable, Chapter chapter)
    {
        GameObject button = isAvailable ? (GameObject)Resources.Load(buttonPath + "Game" + Player.GetInstance().AllChapter.IndexOf(chapter)) :
            (GameObject)Resources.Load(buttonPath + "GameLocked");

        return GameObject.Instantiate(button);
    }

    public GameObject GetWindow(string name)
    {
        GameObject standardGameObject = (GameObject)Resources.Load(windowsPath + name);

        return GameObject.Instantiate(standardGameObject);
    }

    public GameObject GetTutorial(string name)
    {
        GameObject tutorial = (GameObject)Resources.Load(tutorialsPath + name);

        return GameObject.Instantiate(tutorial);
    }

    public Font GetPixelFont()
    {
        return (Font)Resources.Load("PIXEL-GUI/Minecraft");
    }
}