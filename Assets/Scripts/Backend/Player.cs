using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Player
{
    private int coins = 0;
    private Character actualCharacter { set; get; }
    private List<Character> allCharacter = new List<Character>();
    private List<Chapter> availableChapter = new List<Chapter>();
    private List<Chapter> allChapter = new List<Chapter>();
    private bool isFirstTime = true;
    private bool shouldShowAds = true;
    private bool soundOn = true;
    private bool showShadows = true;
    private bool hasUserGetFreeHints = false;
    private bool hasUserPlayedHintTutorial = false;
    private int winsWithoutAd = 0;
    private int hints = 0;
    private Game actualGame;
    private Languages language = Languages.ENGLISH;
    private static Player Instance;

    public static Player GetInstance()
    {
        if (Instance == null)
        {
            Instance = new Player();
            SaveLoadGame.LoadGame();
        }
        return Instance;
    }

    // TODO REMOVE
    public void Reset()
    {
        Instance = new Player();
    }

    public Player()
    {
        AddCharacter();
        AddChapters();
    }

    private void AddCharacter()
    {
        TextAsset characterTextAsset = (TextAsset)Resources.Load("Prefabs/Character/info");

        using (StringReader sr = new StringReader(characterTextAsset.text))
        {
            String line = sr.ReadLine();
            String[] characterInfos;
            String characterName;

            while (line != null)
            {
                characterInfos = line.Split(' ');
                characterName = characterInfos[0];
                allCharacter.Add(new Character(characterName, int.Parse(characterInfos[1]), this));
                line = sr.ReadLine();
            }
        }

        SetStandardCharacter();
    }

    private void SetStandardCharacter()
    {
        allCharacter[2].Buy();
        actualCharacter = allCharacter[2];
        allCharacter[2].ChooseCharacter();
    }

    private void AddChapters()
    {
        TextAsset chapterInfo = (TextAsset)Resources.Load("Chapter/ChapterInfo");

        using (StringReader sr = new StringReader(chapterInfo.text))
        {
            String chapterName = sr.ReadLine();

            while (chapterName != null)
            {
                allChapter.Add(new Chapter(chapterName, this));
                chapterName = sr.ReadLine();
            }
        }

        ReloadAvailableChapter();
    }

    private Chapter GetNextChapter(Chapter chapter)
    {
        return allChapter[allChapter.IndexOf(chapter) + 1];
    }

    public void ReloadAvailableChapter()
    {
        availableChapter.Clear();
        foreach (Chapter chapter in AllChapter)
        {
            if (chapter.isAvailable())
            {
                availableChapter.Add(chapter);
            }
        }
    }

    public Chapter GetChapterAfter(Chapter chapter)
    {
        int index = allChapter.IndexOf(chapter) + 1;
        if (index < allChapter.Count)
        {
            return allChapter[index];
        }
        else
        {
            return null;
        }
    }

    public Chapter GetChapterBefore(Chapter chapter)
    {
        int index = allChapter.IndexOf(chapter) - 1;
        if (index > 0)
        {
            return allChapter[index];
        }
        else
        {
            return null;
        }
    }

    public List<Character> GetAvailableCharacter()
    {
        List<Character> availableCharacter = new List<Character>();

        foreach (Character character in allCharacter)
        {
            if (!character.IsAvailable)
            {
                continue;
            }
            availableCharacter.Add(character);
        }

        return availableCharacter;
    }

    public bool ChooseCharacter(Character character)
    {
        if (!character.IsAvailable)
        {
            return false;
        }

        actualCharacter.UnchooseCharacter();
        actualCharacter = character;
        character.ChooseCharacter();
        return true;
    }

    public bool BuyHints(int hintCount)
    {
        switch (hintCount)
        {
            case 1:
                return BuyHintsForPrice(1, TBConstants.ONE_HINT_PRICE);
            case 2:
                return BuyHintsForPrice(2, TBConstants.TWO_HINTS_PRICE);
            case 5:
                return BuyHintsForPrice(5, TBConstants.FIVE_HINTS_PRICE);
            case 10:
                return BuyHintsForPrice(10, TBConstants.TEN_HINTS_PRICE);
            default:
                return false;
        }
    }

    private bool BuyHintsForPrice(int hintCount, int price)
    {
        if (coins >= price)
        {
            hints += hintCount;
            coins -= price;
            SaveLoadGame.SaveGame();
            return true;
        }
        else
        {
            return false;
        }
    }

    public void RemoveHint()
    {
        hints--;
    }

    // Getter and Setter
    public int Coins { get { return coins; } set { coins = value; } }
    public Game ActualGame { get { return actualGame; } set { actualGame = value; } }
    public int WinsWithoutAd { get { return winsWithoutAd; } set { winsWithoutAd = value; } }
    public int Hints { get { return hints; } set { hints = value; } }
    public Character ActualCharacter { get { return actualCharacter; } set { actualCharacter = value; } }
    public List<Character> AllCharacter { get { return allCharacter; } }
    public List<Chapter> AllChapter { get { return allChapter; } }
    public List<Chapter> AvailableChapter { get { return availableChapter; } }
    public bool IsFirstTime { get { return isFirstTime; } set { isFirstTime = value; } }
    public bool SoundOn { get { return soundOn; } set { soundOn = value; } }
    public bool ShowShadows { get { return showShadows; } set { showShadows = value; } }
    public bool ShouldShowAds { get { return shouldShowAds; } set { shouldShowAds = value; } }
    public bool HasUserGetFreeHints { get { return hasUserGetFreeHints; } set { hasUserGetFreeHints = value; } }
    public bool HasUserPlayedHintTutorial { get { return hasUserPlayedHintTutorial; } set { hasUserPlayedHintTutorial = value; } }
    public Languages Language { get { return language; } set { language = value; } }
}

