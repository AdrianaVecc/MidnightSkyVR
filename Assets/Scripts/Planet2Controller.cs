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
		lastPosition = new Vector3(lastPosition.x, lastPosition.y + 0.1f, lastPosition.z + 0.1f);
		transform.position = lastPosition;
	}
}
