using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowShadowController : MonoBehaviour
{

    void Start()
    {
        SetShadow();
    }

    public void SetShadow()
    {
        GetComponent<Light>().shadows = Player.GetInstance().ShowShadows ? LightShadows.Hard : LightShadows.None;
    }
}
