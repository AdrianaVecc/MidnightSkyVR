using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectMaker : MonoBehaviour {

	public GameObject spaceElement;

	// Use this for initialization
	void Start () {
		for (int x = 0; x < 5; x++) {
			for (int y = 0; y < 5; y++) {
				for (int z = 0; z < 5; z++)  {
					Object.Instantiate (spaceElement, new Vector3 (20 + 15 * (x + Random.value), 20 + 15 * (y + Random.value), 20 + 15 * (z + Random.value)), Quaternion.identity);
				}
			}
		}
	}
	
}
