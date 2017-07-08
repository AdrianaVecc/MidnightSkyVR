using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectMaker : MonoBehaviour {

	[Tooltip("Drag space element Prefab here")]
	public GameObject spaceElement;

	[Tooltip("How many objects will be cloned in the Scene?")]
	public int numberOfElements;

	[Tooltip("How far from (0, 0, 0) should the space elements be spawn?")]
	public int distanceFromOrigin;

	[Tooltip("How far are the space elements from each other?")]
	public int step;

	// Random values equal -1 or 1
	private float randx;
	private float randy;
	private float randz;

	// Clones coordinates
	private float rx;
	private float ry;
	private float rz;

	void Start () {

		for (int x = 0; x < Mathf.Round(Mathf.Pow(numberOfElements, 1f / 3f)); x++) {
			for (int y = 0; y < Mathf.Round(Mathf.Pow(numberOfElements, 1f / 3f)); y++) {
				for (int z = 0; z < Mathf.Round(Mathf.Pow(numberOfElements, 1f / 3f)); z++)  {

					randx = (Random.value < 0.5) ? 1 : -1;
					randy = (Random.value < 0.5) ? 1 : -1;
					randz = (Random.value < 0.5) ? 1 : -1;

					rx = randx * (distanceFromOrigin + step * (x + Random.value));
					ry = randy * (distanceFromOrigin + step * (y + Random.value));
					rz = randz * (distanceFromOrigin + step * (z + Random.value));

					GameObject newSpaceElement = (GameObject)Object.Instantiate(spaceElement, new Vector3 (rx, ry, rz), Quaternion.identity);
					//ParticleSystem newSpaceElementParticle = newSpaceElement.GetComponentInChildren<ParticleSystem>();
					//ParticleSystem.MainModule newMain = newSpaceElementParticle.main;
					//newMain.startColor = new Color (1, 1 - (0.25f * Random.value), 1 - (0.25f * Random.value), 1);

						}
			}
		}
	}
	
}
