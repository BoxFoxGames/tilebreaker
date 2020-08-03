using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Globalization;
using UnityEngine;
using System;

public class PlayerStats {
    [HideInInspector] public List<string> availableCharacter = new List<string>();
    [HideInInspector] public string actualCharacter = "";
    [HideInInspector] public List<int> playedGamesPerChapter = new List<int>();
    [HideInInspector] public List<int> lastGameOfChapterTries = new List<int>();
    [HideInInspector] public List<GameInfos> gameInfos = new List<GameInfos>();
    [HideInInspector] public int playedGames = 0;
    [HideInInspector] public int coins = 0;
    [HideInInspector] public int hints = 0;
    [HideInInspector] public bool showAds = true;
    [HideInInspector] public bool soundOn = true;
    [HideInInspector] public int winsWithoutAd = 0;
    [HideInInspector] public string lastSave = new System.DateTime(1995,12,20,00,00,00).ToString();
    [HideInInspector] public Languages language = Languages.ENGLISH;
    [HideInInspector] public bool tutorialWatchedStart = false;
    [HideInInspector] public bool tutorialWatchedTwoTile = false;
    [HideInInspector] public bool tutorialWatchedJumpTile = false;
    [HideInInspector] public bool tutorialWatchedOccupiedSwitch = false;
    [HideInInspector] public bool showShadows = true;
    [HideInInspector] public bool hasUserPlayedHintTutorial = false;
    [HideInInspector] public bool hasUserGetFreeHints = false;
    [HideInInspector] public bool isFirstTime = true;
    [HideInInspector] public int lastPlayedChapterIndex = 0;
}

[Serializable]
public class GameInfos : System.Object {

    [HideInInspector] public int chapterIndex = 0;
    [HideInInspector] public int gameIndex = 0;
    [HideInInspector] public bool isPlayed = false;
    [HideInInspector] public int tries = 0;
    [HideInInspector] public int hints = 0;
    
    public GameInfos(bool isPlayed, int tries, int hints, int chapterIndex, int gameIndex) {
        this.isPlayed = isPlayed;
        this.tries = tries;
        this.hints = hints;
        this.chapterIndex = chapterIndex;
        this.gameIndex = gameIndex;
    }
}
