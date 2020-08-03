using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class InactiveGameObject
{
    public static GameObject FindInactiveObject(GameObject parent, string gameObject)
    {
        Component[] components = parent.GetComponentsInChildren(typeof(Transform), true);

        foreach (Component comp in components)
        {
            if (comp.ToString().StartsWith(gameObject))
            {
                return comp.gameObject;
            }
        }
        return null;
    }
}
