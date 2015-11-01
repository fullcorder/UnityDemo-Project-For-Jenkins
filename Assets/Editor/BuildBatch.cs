using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Linq;

using UnityEditor;


public class BuildBatch : MonoBehaviour 
{

	void Start () 
	{
	
	}
	
	void Update () 
	{
	
	}

	[UnityEditor.MenuItem("Tools/Build Project AllScene iOS")]
	private static void BuildiOS()
	{
		Debug.Log("########## iOS Build Start ##########");

		EditorUserBuildSettings.SwitchActiveBuildTarget (BuildTarget.iOS);


		var paths = EditorBuildSettings.scenes
			.Select( scene => scene.path )
			.ToArray();

		Debug.Log("paths:" + paths.Length);

		BuildOptions opt = BuildOptions.SymlinkLibraries |
			BuildOptions.AllowDebugging |
			BuildOptions.ConnectWithProfiler |
			BuildOptions.Development;

		PlayerSettings.iOS.sdkVersion = iOSSdkVersion.DeviceSDK;
		PlayerSettings.bundleIdentifier = "jp.kobaring.JenkinsTest";
		PlayerSettings.bundleVersion = "1.0.0";
		PlayerSettings.statusBarHidden = true;

		var errLog = BuildPipeline.BuildPlayer(paths, "iOSDevice", BuildTarget.iOS, opt);
			
		if(string.IsNullOrEmpty(errLog))
		{
			Debug.Log("Success iOS Build.");
		}
		else
		{
			Debug.Log("Failed iOS Build.");
			Debug.Log(errLog);
		}

		PlayerSettings.iOS.sdkVersion = iOSSdkVersion.SimulatorSDK;
		var errLogSumi = BuildPipeline.BuildPlayer(paths, "Sumulator", BuildTarget.iOS, opt);

		if(string.IsNullOrEmpty(errLog))
		{
			Debug.Log("Success Sumulator Build.");
		}
		else
		{
			Debug.Log("Failed  Sumulator Build.");
			Debug.Log(errLog);
		}
	
	}
}


