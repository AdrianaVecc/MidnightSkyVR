struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_VR();
	RegisterModule_VR();

}

void RegisterAllClasses()
{
	//Total: 77 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//11. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//12. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//13. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//14. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//15. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//16. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//17. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//18. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//21. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//22. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//23. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//24. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//25. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//26. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//27. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//28. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//29. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//30. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//31. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//32. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//33. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//34. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//35. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//36. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//37. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//38. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//39. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//40. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//41. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//42. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//43. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//44. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//45. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//46. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//47. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//48. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//49. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//50. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//51. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//52. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//53. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//54. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//55. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//56. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//57. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//58. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//59. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//60. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//61. Halo
	void RegisterClass_Halo();
	RegisterClass_Halo();

	//62. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//63. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//64. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//65. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//66. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//67. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//68. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//69. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//70. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//71. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//72. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//73. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//74. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//75. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//76. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
