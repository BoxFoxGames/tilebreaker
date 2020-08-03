using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinCountController : MonoBehaviour
{
    void Update()
    {
        GetComponent<Text>().text = Player.GetInstance().Coins + "";
    }
}
