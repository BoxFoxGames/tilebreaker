using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollideSwitchTile : MonoBehaviour {

    public int switchTileNumber;
    private readonly GameObjectLoader gameObjectLoader = new GameObjectLoader();
	void OnTriggerEnter(Collider other)
    {
        GameObject.Find("AudioSwitchTileClick").GetComponent<AudioSource>().Play();

        foreach (Transform t in transform)
        {
            if (!t.gameObject.Equals(transform.gameObject))
            {
                GameObject.Destroy(t.gameObject);
            }
        }

        GameObject newTile = gameObjectLoader.GetPressedTile(switchTileNumber, Player.GetInstance().ActualGame.Chapter);
        newTile.transform.parent = transform;
        newTile.transform.localScale = new Vector3(1,1,1);
        newTile.transform.localPosition = new Vector3(0,0,0);
    }
}
