using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HelpWindowController : MonoBehaviour
{
    public GameObject hintButton;
    public GameObject gameplayButton;
    public GameObject gameplayContent;
    public GameObject hintContent;

    private enum Category
    {
        HINT,
        GAMEPLAY
    }

    private Category actualCategory = Category.GAMEPLAY;

    private void SetContent()
    {
        gameplayContent.SetActive(false);
        hintContent.SetActive(false);

        switch (actualCategory)
        {
            case Category.GAMEPLAY:
                gameplayContent.SetActive(true);
                break;
            case Category.HINT:
                hintContent.SetActive(true);
                break;
        }
    }

	private void SetButtons() {
		Sprite selected = Resources.Load<Sprite>( "UI/Buttons/Button_Settings_Category_Pressed");
		Sprite unSelected = Resources.Load<Sprite>( "UI/Buttons/Button_Settings_Category");

		hintButton.GetComponent<Image>().sprite = unSelected;
		gameplayButton.GetComponent<Image>().sprite = unSelected;

		switch (actualCategory)
        {
            case Category.GAMEPLAY:
                gameplayButton.GetComponent<Image>().sprite = selected;
                break;
            case Category.HINT:
                hintButton.GetComponent<Image>().sprite = selected;
                break;
        }
	}

	public void SetHintContent() {
		actualCategory = Category.HINT;

		SetContent();
		SetButtons();
	}

	public void SetGameplayContent() {
		actualCategory = Category.GAMEPLAY;

		SetContent();
		SetButtons();
	}
}
