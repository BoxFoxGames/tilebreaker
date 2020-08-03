using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChapterChooseController : MonoBehaviour
{

    public List<GameObject> chapterButtons;
    public List<GameChooseController> gameChooseControllers;
    private ScrollMenu scrollMenu;
    private readonly OpenWindowEvents openWindowEvents = new OpenWindowEvents();

    void Start()
    {
        scrollMenu = GetComponent<ScrollMenu>();
        SetChapter();

        scrollMenu.slideToWorld(LevelChooseInfos.chapterIndex);

        if (LevelChooseInfos.showGames)
        {
            gameChooseControllers[LevelChooseInfos.chapterIndex].SetGames();
            scrollMenu.slideInLevelsFast();
        }
    }

    public void SetChapter()
    {
        for (int i = 0; i < chapterButtons.Count; i++)
        {
            if (Player.GetInstance().AvailableChapter.Contains(Player.GetInstance().AllChapter[i]))
            {
                // Available
                chapterButtons[i].GetComponent<Image>().sprite = Resources.Load<Sprite>("UI/Buttons/Button_WorldSelect_Play");
                SetEvent(chapterButtons[i], gameChooseControllers[i]);
                chapterButtons[i].GetComponent<Animator>().speed = 1;
            }
            else
            {
                // Not Available
                chapterButtons[i].GetComponent<Image>().sprite = Resources.Load<Sprite>("UI/Buttons/Button_WorldSelect_Play_Locked");
                chapterButtons[i].GetComponent<Animator>().speed = 0;
                chapterButtons[i].GetComponent<Button>().onClick.AddListener(() =>
                                {
                                    GameObject.Find("AudioSourceClickDisabledButton").GetComponent<AudioSource>().Play();
                                    openWindowEvents.OpenBottomInfo(GameObject.Find("UI"), "chapterNotAvailable");
                                });
            }

        }
    }

    private void SetEvent(GameObject chapterButton, GameChooseController gameChooseController)
    {
        chapterButton.GetComponent<Button>().onClick.AddListener(() =>
                {
                    GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
                    gameChooseController.SetGames();
                    scrollMenu.slideInLevels();
                });
    }
}
