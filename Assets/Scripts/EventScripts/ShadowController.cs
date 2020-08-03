using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShadowController : MonoBehaviour {

	private Image image;

	void Start () {
		image = GetComponent<Image>();
		SetShadowSwitcher();
	}
	
	public void SwitchShowShadows() {
		Player.GetInstance().ShowShadows = !Player.GetInstance().ShowShadows;
		SetShadowSwitcher();
		// GameObject.Find("Directional Light").GetComponent<ShowShadowController>().SetShadow();
		SaveLoadGame.SaveGame();
	}

	private void SetShadowSwitcher() {
		image.sprite = Player.GetInstance().ShowShadows? Resources.Load<Sprite>( "UI/Icons/switcher_enabled" )
			:Resources.Load<Sprite>( "UI/Icons/switcher_disabled" );
	}
}
