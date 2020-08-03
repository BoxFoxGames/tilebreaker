using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScrollMenu : MonoBehaviour {

	public Animator slideAnim;

	public GameObject scrollMenu;
	public GameObject miniWorlds;
    public GameObject scrollBar;

	public int numberOfWorlds;
    public int pageSize;

    public float lockOnSpeed;
    private float newPos;
    private float scrollMenuWidth;

    private Vector3 scrollMenuPosition;
    private Vector3 miniWorldsPosition;
    private Vector3 target;
    private Vector3 scrollbarPosition;

	public int[] anchorPoints;
	public int[] anchorBorders;

    public bool scrollingAllowed;
    private bool isMousePressed;
    private bool isTouched;
    private ScrollPointsController scrollPointsController;

    void Start () {
        scrollPointsController = GameObject.Find("ScrollPoints").GetComponent<ScrollPointsController>();
        scrollMenuPosition = scrollMenu.gameObject.transform.localPosition;
        miniWorldsPosition = miniWorlds.gameObject.transform.position;
        scrollbarPosition = scrollBar.transform.localPosition;

        scrollMenuWidth = scrollMenu.transform.GetComponent<RectTransform>().sizeDelta.x;

        anchorPoints = new int[numberOfWorlds];
        for (int i = 0; i < numberOfWorlds; i++)
        {
            anchorPoints[i] = ((i + 1) * -1080) + 540;
        }

        anchorBorders = new int[numberOfWorlds];
        for (int i = 0; i < numberOfWorlds; i++)
        {
            anchorBorders[i] = ((i + 1) * -1080);
        }
    }

    public void checkIfTouched()
    {
        if (Input.GetMouseButtonDown(0))
        {
            isMousePressed = true;
        }
        else if (Input.GetMouseButtonUp(0))
        {
            isMousePressed = false;
        }

        if (Input.touchCount == 0)
        {
            isTouched = false;
        }
        else
        {
            isTouched = true;
        }
    }

    public void lockOnToMiniWorld()
    {
        if (isMousePressed || isTouched)
        {
            return;
        }
            
            for (int i = 0; i < numberOfWorlds; i++)
            {
            if (scrollMenuPosition.x > anchorBorders[i])
            {
                newPos = scrollMenuPosition.x;
                target = new Vector3(anchorPoints[i], 0, 0);

                float step = lockOnSpeed * Time.deltaTime;
                scrollMenuPosition = Vector3.MoveTowards(scrollMenuPosition, target, step);
                scrollMenu.transform.localPosition = scrollMenuPosition;
                scrollPointsController.SetPoint(i);

                return;
            }
        }
    }

    private void MoveScrollBarAlong() {
        scrollbarPosition = new Vector3(scrollbarPosition.x, scrollMenuPosition.y - 500, scrollbarPosition.z);
        scrollBar.transform.localPosition = scrollbarPosition;
    }

    public void moveMiniWorldsAlong()
    {
        miniWorldsPosition = new Vector3((scrollMenuPosition.x + 540) * 0.01f, (scrollMenuPosition.y) * 0.01f, (scrollMenuPosition.y) * 0.005f);
        miniWorlds.transform.position = miniWorldsPosition;
    }

    public void slideInLevels()
	{
        slideAnim.speed = 1;
		slideAnim.SetTrigger ("SlideInLevels");
        scrollingAllowed = false;
	}

    public void slideInLevelsFast()
	{
        slideAnim.speed = 1000;
		slideAnim.SetTrigger ("SlideInLevels");
        scrollingAllowed = false;
	}

	public void slideOutLevels()
	{
        slideAnim.speed = 1;
		slideAnim.SetTrigger ("SlideOutLevels");
        scrollingAllowed = true;
	}

    public void slideToWorld(int worldIndex)
	{
        int x = anchorPoints[worldIndex];
        scrollMenu.transform.localPosition = new Vector3(x, 0, 0);
	}
	
	void Update () {

        if (scrollingAllowed)
        {
            transform.GetChild(0).GetComponent<ScrollRect>().enabled = true;
        }
        else
        {
            transform.GetChild(0).GetComponent<ScrollRect>().enabled = false;
        }

        scrollMenuPosition = scrollMenu.gameObject.transform.localPosition;

        checkIfTouched();

        lockOnToMiniWorld();

        MoveScrollBarAlong();

        moveMiniWorldsAlong();
    }
}
