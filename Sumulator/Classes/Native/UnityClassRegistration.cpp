struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

}

void RegisterAllClasses()
{
	//Total: 48 classes
	//0. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//4. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//5. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//8. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//9. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//10. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//11. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//12. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//15. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//16. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//17. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//18. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//19. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//20. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//21. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//22. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//23. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//24. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//25. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//26. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//27. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//28. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//29. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//30. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//31. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//32. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//33. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//34. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//35. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//36. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//37. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//38. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//39. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//40. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//41. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//42. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//43. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//44. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//45. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//46. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//47. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
