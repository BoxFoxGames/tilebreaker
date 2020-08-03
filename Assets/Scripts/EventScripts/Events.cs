using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Events : MonoBehaviour
{
    private readonly OpenWindowEvents openWindowEvents = new OpenWindowEvents();

    public void ActivateGameObject(GameObject activateObject)
    {
        activateObject.SetActive(true);
    }

    public void DeactivateGameObject(GameObject deactivateObject)
    {
        deactivateObject.SetActive(false);
    }

    public void SetTrigger(string trigger)
    {
        GetComponent<Animator>().SetTrigger(trigger);
    }

    public void SetShowGames(bool showGames)
    {
        LevelChooseInfos.showGames = showGames;
    }

    public void DestroyThis()
    {
        Destroy(gameObject);
    }

    public void NavigateBack()
    {
        GameObject.Find("UI_Manager").GetComponent<UI_Controller>().switchScene(TBConstants.LAST_SCREEN);
    }

    public void SetLastScreen(string lastScreen)
    {
        TBConstants.LAST_SCREEN = lastScreen;
    }

    public void BuyHints(int hintCount)
    {
        if (Player.GetInstance().BuyHints(hintCount))
        {
            GetComponent<AudioSource>().Play();
        }
        else
        {
            transform.Find("ExitButton").GetComponent<AudioSource>().Play();
            openWindowEvents.OpenIAP(transform.parent.gameObject);
        }
    }

    public void SetNextWorld() {
        if(LevelChooseInfos.chapterIndex < Player.GetInstance().AllChapter.Count - 1) {
            LevelChooseInfos.chapterIndex++;
            SaveLoadGame.SaveGame();
        }
    }
}