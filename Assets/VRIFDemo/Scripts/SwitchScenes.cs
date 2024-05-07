using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class SwitchScenes : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void LoadScence1()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("3D-side-by-side");
    }
    public void LoadScence2()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("360player");
    }
    public void LoadScence3()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("3D-over-under");
    }
    public void QuitScence()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("home");
    }
}
