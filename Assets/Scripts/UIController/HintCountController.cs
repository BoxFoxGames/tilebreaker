using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HintCountController : MonoBehaviour
{
    private readonly OpenWindowEvents openWindowEvents = new OpenWindowEvents();

    void Start()
    {
        GetComponent<Text>().text = Player.GetInstance().Hints.ToString();
    }

    void Update()
    {
        GetComponent<Text>().text = Player.GetInstance().Hints.ToString();
    }
}
