using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileBlinker : MonoBehaviour
{

    public bool shouldBlink = false;
    public Vector3 size = new Vector3(1, 1, 1);
    private Vector3 bigSize;
    private Vector3 changeSize;
    private float step;

    void Start()
    {
        bigSize = new Vector3(size.x * 1.2f, size.x * 1.2f, size.x * 1.2f);
        changeSize = bigSize;

        step = 0.4f * Time.deltaTime;
    }

    void Update()
    {
        if (shouldBlink)
        {
            if (transform.localScale.x >= bigSize.x)
            {
                changeSize = size;
            }
            else if (transform.localScale.x <= size.x)
            {
                changeSize = bigSize;
            }

            transform.localScale = Vector3.MoveTowards(transform.localScale, changeSize, step);
        }
        else
        {
            transform.localScale = size;

        }
    }
}
