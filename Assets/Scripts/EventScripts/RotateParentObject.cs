using UnityEngine;

public class RotateParentObject : MonoBehaviour {

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
            mouseOffset = (Input.mousePosition - mouseReference);
            rotation.y = -(mouseOffset.x + mouseOffset.y) * sensitivity;
            gameObject.transform.parent.transform.Rotate(rotation);
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
