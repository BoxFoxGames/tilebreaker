using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChapterProgressCounter : MonoBehaviour {

	public int chapterIndex = 0;

	void Update () {
		int count = Player.GetInstance().AllChapter[chapterIndex].AvailableGames.Count;
		if(!Player.GetInstance().AvailableChapter.Contains(Player.GetInstance().AllChapter[chapterIndex])) {
			count = 0;
		}
        GetComponent<Text>().text = count + "/"
			+ Player.GetInstance().AllChapter[chapterIndex].AllGames.Count;
	}
}
