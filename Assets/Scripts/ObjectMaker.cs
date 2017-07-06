using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectMaker : MonoBehaviour {

	public GameObject spaceElement;
	public int maxNumberOfElements;
	public int distanceFromOrigin;
	public int step;

	private float randx;
	private float randy;
	private float randz;

	private float rx;
	private float ry;
	private float rz;

	void Start () {
		for (int x = 0; x < Mathf.Round(Mathf.Pow(maxNumberOfElements, 1f / 3f)); x++) {
			for (int y = 0; y < Mathf.Round(Mathf.Pow(maxNumberOfElements, 1f / 3f)); y++) {
				for (int z = 0; z < Mathf.Round(Mathf.Pow(maxNumberOfElements, 1f / 3f)); z++)  {

					randx = (Random.value < 0.5) ? 1 : -1;
					randy = (Random.value < 0.5) ? 1 : -1;
					randz = (Random.value < 0.5) ? 1 : -1;

					rx = randx * (distanceFromOrigin + step * (x + Random.value));
					ry = randy * (distanceFromOrigin + step * (y + Random.value));
					rz = randz * (distanceFromOrigin + step * (z + Random.value));

					Vector3 position = new Vector3 (rx, ry, rz);
					Object.Instantiate (spaceElement, position, Quaternion.identity);

					Debug.Log (rx);

						}
			}
		}
	}
	
}
