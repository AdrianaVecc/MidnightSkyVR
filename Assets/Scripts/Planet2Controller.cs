using UnityEngine;
using System.Collections;

public class Planet2Controller : MonoBehaviour {
	public Vector3 lastPosition;

	// Use this for initialization
	void Start () {
		lastPosition = transform.position;
	}
	
	// Update is called once per frame
	public void LookAtPlanet2 () {
		lastPosition = new Vector3(lastPosition.x, lastPosition.y + 0.5f, lastPosition.z + 0.5f);
		transform.position = lastPosition;
	}
}
