using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UI_Controller : MonoBehaviour
{

    public Animator transitionAnim;
    public string triggerName;
    public float transitionTime;
    public void switchScene(string sceneName)
    {
        StartCoroutine(LoadScene(sceneName));
    }

    IEnumerator LoadScene(string sceneName)
    {
        StartCoroutine(AudioFader.FadeOut(GameObject.Find("Main Camera").GetComponent<AudioSource>(), transitionTime));
        transitionAnim.SetTrigger(triggerName);
        yield return new WaitForSeconds(transitionTime);
        SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
    }
}
