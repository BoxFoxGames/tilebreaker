using System.IO;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using CodeStage.AntiCheat.ObscuredTypes;

public class SaveLoadGame : MonoBehaviour
{
    public static void LoadGame()
    {
        Debug.Log("LOAD");
        if (ObscuredPrefs.GetString("PlayerStats").Equals(""))
        {
            Debug.Log("FT");
            // Startsprache setzen
            if (Application.systemLanguage == SystemLanguage.German)
            {
                LocalizeManager.GetInstance().SetLanguage(Languages.GERMAN);
            }
            else if (Application.systemLanguage == SystemLanguage.English)
            {
                LocalizeManager.GetInstance().SetLanguage(Languages.ENGLISH);
            }
            else
            {
                LocalizeManager.GetInstance().SetLanguage(Languages.ENGLISH);
            }

            return;
        }

        PlayerStats ps = JsonUtility.FromJson<PlayerStats>(ObscuredPrefs.GetString("PlayerStats"));

        // Coins
        Player.GetInstance().Coins = ps.coins;

        // Hints
        Player.GetInstance().Hints = ps.hints;

        // Games
        if (ps.playedGames == 0)
        {
            foreach (GameInfos gameInfos in ps.gameInfos)
            {
                if (Player.GetInstance().AllChapter.Count <= gameInfos.chapterIndex || Player.GetInstance().AllChapter[gameInfos.chapterIndex].AllGames.Count <= gameInfos.gameIndex)
                {
                    continue;
                }

                Game g = Player.GetInstance().AllChapter[gameInfos.chapterIndex].AllGames[gameInfos.gameIndex];
                g.Hints = gameInfos.hints;
                g.Tries = gameInfos.tries;
                g.isPlayed = gameInfos.isPlayed;
            }
        }
        else
        {
            for (int i = 0; i < ps.playedGames; i++)
            {
                int cIndex = 0;
                int gIndex = i;
                foreach (Chapter c in Player.GetInstance().AllChapter)
                {
                    if (c.AllGames.Count <= gIndex)
                    {
                        gIndex -= c.AllGames.Count;
                        cIndex++;
                    }
                    else
                    {
                        break;
                    }
                }
                Player.GetInstance().AllChapter[cIndex].AllGames[gIndex].isPlayed = true;
            }
        }

        foreach (Chapter c in Player.GetInstance().AllChapter)
        {
            c.ReloadAvailableGames();
        }

        // Character
        foreach (string c in ps.availableCharacter)
        {
            foreach (Character character in Player.GetInstance().AllCharacter)
            {
                    character.isAvailable = character.name.Equals(c);
            }
        }

        // Actual Character
        foreach (Character character in Player.GetInstance().AllCharacter)
        {
            if (character.name.Equals(ps.actualCharacter))
            {
                Player.GetInstance().ChooseCharacter(character);
            }
        }

        // Show Ads
        Player.GetInstance().ShouldShowAds = ps.showAds;

        // Show Shadows
        Player.GetInstance().ShowShadows = ps.showShadows;

        // Hint Tutorial
        Player.GetInstance().HasUserGetFreeHints = ps.hasUserGetFreeHints;
        Player.GetInstance().HasUserPlayedHintTutorial = ps.hasUserPlayedHintTutorial;

        // Sound
        Player.GetInstance().SoundOn = ps.soundOn;
        AudioListener.volume = ps.soundOn ? 1.0f : 0f;

        // Wins Without Ad
        Player.GetInstance().WinsWithoutAd = ps.winsWithoutAd;

        // Language
        LocalizeManager.GetInstance().SetLanguage(ps.language);

        // Last played chapter
        LevelChooseInfos.chapterIndex = ps.lastPlayedChapterIndex;

        // IsFirstTime
        Debug.Log("Load ft " + ps.isFirstTime);
        Player.GetInstance().IsFirstTime = ps.isFirstTime;
    }

    public static void SaveGame()
    {
        Debug.Log("SAVE");
        Player player = Player.GetInstance();
        PlayerStats ps = new PlayerStats();

        // Coins
        ps.coins = player.Coins;

        // Hints
        ps.hints = player.Hints;

        // Games
        for (int i = 0; i < player.AllChapter.Count; i++)
        {
            for (int j = 0; j < player.AllChapter[i].AllGames.Count; j++)
            {
                Game g = player.AllChapter[i].AllGames[j];
                ps.gameInfos.Add(new GameInfos(g.isPlayed, g.Tries, g.Hints, i, j));
            }
        }

        // Character
        List<Character> availableCharacter = player.GetAvailableCharacter();
        foreach (Character c in availableCharacter)
        {
            ps.availableCharacter.Add(c.Name);
        }

        // Actual Character
        ps.actualCharacter = player.ActualCharacter.name;

        // Timestamp
        ps.lastSave = System.DateTime.UtcNow.ToString();

        // Show Ads
        ps.showAds = Player.GetInstance().ShouldShowAds;

        // Show Shadows
        ps.showShadows = Player.GetInstance().ShowShadows;

        // Hint Tutorial
        ps.hasUserGetFreeHints = Player.GetInstance().HasUserGetFreeHints;
        ps.hasUserPlayedHintTutorial = Player.GetInstance().HasUserPlayedHintTutorial;

        // Sound
        ps.soundOn = Player.GetInstance().SoundOn;

        // Wins Without Ad
        ps.winsWithoutAd = Player.GetInstance().WinsWithoutAd;

        // Language
        ps.language = Player.GetInstance().Language;

        // Last played chapter
        ps.lastPlayedChapterIndex = LevelChooseInfos.chapterIndex;

        // IsFirstTime
        Debug.Log("Save ft " + Player.GetInstance().IsFirstTime);
        ps.isFirstTime = Player.GetInstance().IsFirstTime;

        ObscuredPrefs.SetString("PlayerStats", JsonUtility.ToJson(ps));
        //  GooglePlayGameServiceScript.Instance.OpenFileForWrite(ps);
        // GooglePlayGameServiceScript.Instance.OpenFileForWrite(new PlayerStats());
    }
}
