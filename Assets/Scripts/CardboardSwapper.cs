using UnityEngine;
using System.Collections;

public class CardboardSwapper : MonoBehaviour {

	void Start () {
	
	}
	
	void Update () {
		this.gameObject.transform.Find("Canvas/CardboardButton").gameObject.SetActive(!GvrViewer.Instance.VRModeEnabled);
		if (GvrViewer.Instance.Tilted || GvrViewer.Instance.BackButtonPressed) 
		{
			DisableVR();
		}
	
	}

	public void DisableVR ()
	{
		GvrViewer.Instance.VRModeEnabled = false;
	}

	public void EnableVR ()
	{
		GvrViewer.Instance.VRModeEnabled = true;
	}
}
