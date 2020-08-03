using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeIn : MonoBehaviour
{
    public float fadeInTime;
    void Start()
    {
        StartCoroutine(AudioFader.FadeIn(GetComponent<AudioSource>(), fadeInTime));
    }
}
