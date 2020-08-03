using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameMenuController : MonoBehaviour {

	public Text coinCountText;
	public Button backButton;

	void Update()
    {
        coinCountText.text = Player.GetInstance().Coins + "";

        if (Input.GetKeyDown(KeyCode.Escape)) { 
            coinCountText.text = "BACK";
         }
    }
}
