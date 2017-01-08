using UnityEngine;
using System.Collections;

public class AllPlanetsController : MonoBehaviour {

	public float speed;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		transform.Rotate(speed * Time.deltaTime, 0, 0);
	}
}
