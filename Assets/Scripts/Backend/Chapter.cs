using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using UnityEngine;

public class Chapter
{
    public String name;
    private List<Game> availableGames = new List<Game>();
    private List<Game> allGames = new List<Game>();
    private Player player;
    private readonly GameObjectLoader gameObjectLoader = new GameObjectLoader();
    private int gamesPlayedToUnlockThisChapter = 0;

    public Chapter(String name, Player player)
    {
        this.name = name;
        this.player = player;
        AddGames();
    }

    private void AddGames()
    {
        TextAsset chapterInfo = (TextAsset)Resources.Load("Chapter/" + name);

        using (StringReader sr = new StringReader(chapterInfo.text))
        {
            gamesPlayedToUnlockThisChapter = int.Parse(sr.ReadLine().Split(' ')[1]);
            String gameName = sr.ReadLine();

            while (gameName != null)
            {
                TextAsset matchfieldArrangement = Resources.Load("Games/" + gameName) as TextAsset;
                allGames.Add(new Game(matchfieldArrangement.text, this));
                gameName = sr.ReadLine();
            }
        }

        ReloadAvailableGames();
    }

    private Game GetNextGame(Game game)
    {
        return AllGames[AllGames.IndexOf(game) + 1];
    }

    public void ReloadAvailableGames()
    {
        availableGames.Clear();
        foreach (Game game in allGames)
        {
            if (!game.IsPlayed || game == allGames[allGames.Count - 1])
            {
                continue;
            }
            availableGames.Add(GetNextGame(game));

            if (availableGames.Contains(game))
            {
                continue;
            }
            availableGames.Add(game);
        }

        if (!AvailableGames.Contains(allGames[0]))
        {
            availableGames.Add(allGames[0]);
        }

        player.ReloadAvailableChapter();
    }

    public bool isAvailable()
    {
        return gamesPlayedToUnlockThisChapter == 0 || player.GetChapterBefore(this).availableGames.Count > gamesPlayedToUnlockThisChapter;
    }

    // Getter und Setter
    public int GamesPlayedToUnlockThisChapter { get { return gamesPlayedToUnlockThisChapter; } }
    public String Name { get { return name; } }
    public Player Player { get { return player; } }
    public List<Game> AllGames { get { return allGames; } }
    public List<Game> AvailableGames { get { return availableGames; } }
}
