/*
Heavily inspired by https://github.com/JuppOtto/AutoFloat-for-Google-VR-SDK-with-Unity/
*/

using UnityEngine;
using System.Collections;

public class AutoFloat : MonoBehaviour
{
	private const int RIGHT_ANGLE = 90;

	// This variable determinates if the player will move or not 
	private bool isFloating = false;

	Transform mainCamera = null;

	//This is the variable for the player speed
	[Tooltip("With this speed the player will move.")]
	public float speed;

	[Tooltip("Activate this checkbox if the player shall move when the Cardboard trigger is pulled.")]
	public bool FloatWhenTriggered;

	[Tooltip("Activate this Checkbox if you want to freeze the y-coordiante for the player. " +
		"For example in the case of you have no collider attached to your CardboardMain-GameObject" +
		"and you want to stay in a fixed level.")]
	public bool freezeYPosition;

	[Tooltip("This is the fixed y-coordinate.")]
	public float yOffset;

	void Start()
	{
		mainCamera = Camera.main.transform;
	}

	void Update()
	{
		// Float when the Cardboard Trigger is used 
		if (FloatWhenTriggered && !isFloating && GvrViewer.Instance.Triggered)
		{
			isFloating = true;
		}
		else if (FloatWhenTriggered && isFloating && GvrViewer.Instance.Triggered)
		{
			isFloating = false;
		}

		if (isFloating)
		{
			Vector3 direction = new Vector3(mainCamera.transform.forward.x, mainCamera.transform.forward.y, mainCamera.transform.forward.z).normalized * speed * Time.deltaTime;
			Quaternion rotation = Quaternion.Euler(new Vector3(0, -transform.rotation.eulerAngles.y, 0));
			transform.Translate(rotation * direction);
		}

		if (freezeYPosition)
		{
			transform.position = new Vector3(transform.position.x, yOffset, transform.position.z);
		}
	}
}