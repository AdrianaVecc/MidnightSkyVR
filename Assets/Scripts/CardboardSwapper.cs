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

		VRSettings.enabled = false;
		Camera.main.ResetAspect ();
	
	}

	public void EnableVR ()
	{

		VRSettings.enabled = true;

	}
}
