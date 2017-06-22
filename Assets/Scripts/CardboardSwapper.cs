using UnityEngine;
using UnityEngine.VR;
using System.Collections;

public class CardboardSwapper : MonoBehaviour {

	void Start () {

		DisableVR();
	
	}
	
	void Update () {
		
		this.gameObject.transform.Find("Canvas/CardboardButton").gameObject.SetActive(!VRSettings.enabled);

		if (GvrViewer.Instance.Tilted || GvrViewer.Instance.BackButtonPressed) 
		{
			DisableVR();
		}
	
	}

	public void DisableVR ()
	{

		Screen.orientation = ScreenOrientation.Portrait;

		VRSettings.enabled = false;
	
	}

	public void EnableVR ()
	{

		Screen.orientation = ScreenOrientation.LandscapeLeft;

		VRSettings.enabled = true;

	}
}
