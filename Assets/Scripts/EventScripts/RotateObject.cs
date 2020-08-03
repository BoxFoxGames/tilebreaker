using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateObject : MonoBehaviour
{
    #region ROTATE
    private float sensitivity = 0.3f;
    private Vector3 mouseReference;
    private Vector3 mouseOffset;
    private Vector3 rotation = Vector3.zero;
    private bool isRotating;
    #endregion

    void Update()
    {
        if (isRotating)
        {
            // offset
            mouseOffset = (Input.mousePosition - mouseReference);

            // apply rotation
            rotation.y = -(mouseOffset.x + mouseOffset.y) * sensitivity;

            // rotate
            gameObject.transform.Rotate(rotation);

            // store new mouse position
            mouseReference = Input.mousePosition;
        }
    }

    void OnMouseDown()
    {
        isRotating = true;
        mouseReference = Input.mousePosition;
    }

    void OnMouseUp()
    {
        isRotating = false;
    }
}
