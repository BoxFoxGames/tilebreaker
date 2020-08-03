using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonSizeChangeAnimationController : MonoBehaviour {

	public void StartGrowButton() {
		GetComponent<Animator>().SetTrigger("growButton");
	}

	public void StartDecraseButton() {

		GetComponent<Animator>().SetTrigger("decraseButton");
	}
}
