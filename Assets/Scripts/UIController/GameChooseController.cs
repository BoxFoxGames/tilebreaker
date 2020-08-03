using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameChooseController : MonoBehaviour
{

    public UI_Controller uI_Controller;
    public GameObject container;
    public int chapterIndex;
    public AudioSource buttonClickSound;
    public AudioSource buttonDisableSound;
    private readonly OpenWindowEvents openWindowEvents = new OpenWindowEvents();
    private readonly GameObjectLoader gameObjectLoader = new GameObjectLoader();

    public void SetGames()
    {
        Chapter chapter = Player.GetInstance().AllChapter[chapterIndex];
        Player.GetInstance().ActualGame = chapter.AllGames[0];

        DestroyExistingGameChooseButtons();
        CreateGameChooseButtons(chapter);
    }

    private void CreateGameChooseButtons(Chapter chapter)
    {
        GameObject button = null;
        Game game;

        for (int i = 0; i < chapter.AllGames.Count; i++)
        {
            game = chapter.AllGames[i];

            if (chapter.AvailableGames.Contains(game))
            {
                button = gameObjectLoader.GetGameButton(true, game.Chapter);
                SetEvent(button, chapter.AllGames[i]);
            }
            else
            {
                button = gameObjectLoader.GetGameButton(false, game.Chapter);
                button.GetComponent<Button>().onClick.AddListener(() =>
                {
                    buttonDisableSound.Play();
                    openWindowEvents.OpenGameLocked(GameObject.Find("UI"));
                });
            }

            button.GetComponentInChildren<Text>().text = "" + (i + 1);
            button.GetComponent<RectTransform>().parent = container.GetComponent<RectTransform>();
            button.GetComponent<RectTransform>().localScale = new Vector3(1, 1, 1);
        }
    }

    private void DestroyExistingGameChooseButtons()
    {
        foreach (Transform transform in container.GetComponentsInChildren<Transform>())
        {
            if (!transform.gameObject.Equals(container))
            {
                GameObject.Destroy(transform.gameObject);
            }
        }

        foreach (Transform transform in transform)
        {
            if (!transform.gameObject.Equals(container) && !transform.gameObject.Equals(gameObject)
                && !transform.gameObject.Equals(container.transform.parent.gameObject))
            {
                GameObject.Destroy(transform.gameObject);
            }
        }
    }

    private void SetEvent(GameObject button, Game game)
    {
        button.GetComponent<Button>().onClick.AddListener(() =>
        {
            buttonClickSound.Play();
            Player.GetInstance().ActualGame = game;
            uI_Controller.switchScene(GetSceneName());
            LevelChooseInfos.chapterIndex = Player.GetInstance().AllChapter.IndexOf(game.Chapter);
        });
    }

    private String GetSceneName()
    {
        switch (chapterIndex)
        {
            case 0:
                return "World_Tutorial";
            case 1:
                return "World_Forest";
            case 2:
                return "World_Beach";
            case 3:
                return "World_Vulcano";
            default:
                return "World_Forest";
        }
    }
}
