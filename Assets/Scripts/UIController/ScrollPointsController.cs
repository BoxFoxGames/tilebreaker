using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScrollPointsController : MonoBehaviour {

	public List<GameObject> points = new List<GameObject>();

	public void SetPoint(int index) {
		for(int i = 0; i < points.Count; i++) {
			Image image = points[i].GetComponent<Image>();
          	var tempColor = image.color;
          	tempColor.a = 0.5f;
			if(i == index) {
				tempColor.a = 1f;
			}

          	image.color = tempColor;
		}
	}
}
