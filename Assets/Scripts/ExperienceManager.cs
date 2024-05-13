using UnityEngine;
using RenderHeads.Media.AVProVideo;
using BNG;
using System.Collections;
using UnityEngine.Events;
using BNG;

public class ExperienceManager : MonoBehaviour
{
    public ApplyToMesh meshMedia;
    public MediaPlayer videoPlayer;
    public UnityEngine.UI.Button exit, play,pause, rewind;
    public UnityEngine.UI.Slider videoSlider;
    //public GameObject outerSphere, canvesPanel, camreferenceObject, prefab;
    private ApplyToMesh myPlayer;
    //public CanvasGroup myGroup;
    //public Animator myAnimator;
    //public float startScene, fadeInScreen, fadeOutScreen;
    //private bool check, _check;
    public UnityEvent buttonResetState;
    //public UIPointer_ raycastLine;
    //private LineRenderer raycast;
    //private string basicUrl= "/Users/mac/Downloads/";
    private string basicUrl = "/storage/emulated/0/Movies/";
    private void OnEnable()
    {
       videoPlayer = SceneManager.Instance.myMediaPlayer;
    }
    private void Start()
    {
        //myPlayer = outerSphere.GetComponent<ApplyToMesh>();
        
        //exit.onClick.AddListener(Exit);
        play.onClick.AddListener(Play);
        pause.onClick.AddListener(Pause);
        rewind.onClick.AddListener(Rewind);
        StartCoroutine(Wait());
        //check = true;
        //_check = true;

        //if (raycastLine.lineRenderer)
        //{
        //    raycast = raycastLine.lineRenderer;
        //}
        //raycast.enabled= false;
    }
    private void Update()
    {
        //if (Input.GetKeyDown(KeyCode.Space))
        //{
        //    DropObjects();
        //}
        //if (InputBridge.Instance.RightTriggerDown && check)
        //{
        //    //CanvesPosition();
        //    //DropObjects();
        //    //raycast.enabled = true;
        //    //canvesPanel.SetActive(true);
        //    //StartCoroutine(FadeInScreen());
        //    //check = false;
        //}
        //else if (InputBridge.Instance.RightTriggerDown && !check && !raycastLine.lookingAtUI)
        //{
        //    StartCoroutine(FadeOutScreen());
        //}
    }
    public void DropObjects()
    {
        //old approach
        //GameObject newPlane = Instantiate(prefab, camreferenceObject.transform);
        
        //newPlane.transform.parent = null;

        //canvesPanel.transform.position = newPlane.transform.position;
        //canvesPanel.transform.rotation = newPlane.transform.rotation;


        //  new approach
        //canvesPanel.transform.position = new Vector3(camreferenceObject.transform.position.x,
        //                                   camreferenceObject.transform.position.y,
        //                                   camreferenceObject.transform.position.z);
        //Quaternion rot = Quaternion.LookRotation(camreferenceObject.transform.forward, Vector3.up);
        //canvesPanel.transform.rotation = rot;

    }
    
    public void ModifyRotation()
    {
        // Calculate the direction from this object to the target
        //Vector3 directionToTarget = camreferenceObject.transform.position - canvesPanel.transform.position;
        //directionToTarget.y = 0f; // Constrain rotation to Y-axis only

        //// Rotate this object to face the target
        //Quaternion targetRotation = Quaternion.LookRotation(directionToTarget);
        //transform.rotation = targetRotation;
    }
    public void ButtonsState(bool check)
    {
        videoSlider.interactable = check;
        exit.interactable = check;
        play.interactable = check;
        rewind.interactable = check;
        pause.interactable = check;
        
    }
    //IEnumerator FadeInScreen()
    //{
    //    //raycast.enabled = true;
    //    //Debug.Log("Calling screen fade in");
    //    //yield return new WaitForSeconds(0.05f);
    //    //yield return FadeScreen(myGroup, 1f, 1.25f);
    //    //ButtonsState(true);
    //    //StartCoroutine(FadeOutScreen());
    //}
    //IEnumerator FadeOutScreen()
    //{
       
    //    //Debug.Log("calling screen fade out");
    //    //yield return new WaitForSeconds(8.5f);
    //    //ButtonsState(false);
    //    //yield return FadeScreen(myGroup, 0f, 1.25f);
    //    //canvesPanel.SetActive(false);
    //    //check = true;
    //    //raycast.enabled = false;
    //}
    IEnumerator ExitScreen()
    {
        //raycast.enabled = false;
        //myAnimator.SetTrigger("FadeIn");
        buttonResetState.Invoke();
        SceneManager.Instance.mainCanvasObject.SetActive(true);
        this.gameObject.SetActive(false);
        //yield return new WaitForSeconds(0.05f);
        //yield return FadeScreen(myGroup, 0f, fadeOutScreen);
        yield return null;
    }
    IEnumerator FadeScreen(CanvasGroup screen, float targetAlpha, float duration)
    {
        float elapsedTime = 0f;
        float startAlpha = screen.alpha;
        while (elapsedTime < duration)
        {
            elapsedTime += Time.deltaTime;
            screen.alpha = Mathf.Lerp(startAlpha, targetAlpha, elapsedTime / duration);
            yield return null;
        }
        screen.alpha = targetAlpha;
        screen.blocksRaycasts = (targetAlpha == 1f); // Enable raycast targeting if fading in, disable if fading out
    }
    public void Exit()
    {
        StartCoroutine(ExitScreen());
    }
    public void Play()
    {
        //StopAllCoroutines();
        videoPlayer.Play();
        //StartCoroutine(FadeOutScreen());
    }
    public void VideoForwardStart()
    {
        //StopAllCoroutines();
    }
    public void VideoForwardStop()
    {
        //StartCoroutine(FadeOutScreen());
    }
    public void Pause()
    {
        //StopAllCoroutines();
        videoPlayer.Pause();
    }
    public void Rewind()
    {
        //StopAllCoroutines();
        videoPlayer.Rewind(true);
        videoPlayer.Play();
        //StartCoroutine(FadeOutScreen());
    }
    IEnumerator Wait()
    {
        //yield return new WaitForSeconds(startScene);
        yield return new WaitForSeconds(0.25f);
       // myPlayer.enabled = true;
        yield return new WaitForEndOfFrame();
        
    }
}
