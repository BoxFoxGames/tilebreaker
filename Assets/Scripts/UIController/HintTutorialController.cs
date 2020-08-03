using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HintTutorialController : MonoBehaviour
{
	private Animator animator;
    private GameSceneController gameSceneController;
    private GameObject repeatButton;

    void Start()
    {
		animator = GetComponent<Animator>();
        gameSceneController = GameObject.Find("Matchfield").GetComponent<GameSceneController>();
        gameSceneController.isJumpingAvailable = false;
        repeatButton = GameObject.Find("Button_Repeat");
        repeatButton.SetActive(false);
    }

    public void OnGetHintsOkClick()
    {
        GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
        Player.GetInstance().Hints += 5;
		Player.GetInstance().HasUserGetFreeHints = true;
        if (Player.GetInstance().ActualGame.Hints == 0)
        {
            gameSceneController.SetTutorialFirstHint();
        } else {
			gameSceneController.isJumpingAvailable = true;
		}
		animator.SetTrigger("decrase");
        repeatButton.SetActive(true);
    }

    public void OnHintDescriptionOkClick()
    {
        GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
		Player.GetInstance().HasUserPlayedHintTutorial = true;
		SaveLoadGame.SaveGame();
		gameSceneController.isJumpingAvailable = true;
        animator.SetTrigger("decrase");
        repeatButton.SetActive(true);
    }

	public void DestroyThis() {
		Destroy(gameObject);
	}
}
