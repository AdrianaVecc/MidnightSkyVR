using UnityEngine;
using System.Collections;

public class CardboardSwapper : MonoBehaviour {

	void Start () {

		GvrViewer.Instance.VRModeEnabled = false;
	
	}
	
	void Update () {
		this.gameObject.transform.Find("Canvas/CardboardButton").gameObject.SetActive(!GvrViewer.Instance.VRModeEnabled);
		if (GvrViewer.Instance.Tilted) 
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
