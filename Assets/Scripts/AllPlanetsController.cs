using UnityEngine;
using System.Collections;

public class AllPlanetsController : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		transform.Rotate(2 * Time.deltaTime, 0, 0);
	}
}
