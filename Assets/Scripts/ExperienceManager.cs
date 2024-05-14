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
    private ApplyToMesh myPlayer;
    public UnityEvent buttonResetState;
    private void OnEnable()
    {
       videoPlayer = SceneManager.Instance.myMediaPlayer;
    }
    private void Start()
    {
        play.onClick.AddListener(Play);
        pause.onClick.AddListener(Pause);
        rewind.onClick.AddListener(Rewind);
        StartCoroutine(Wait());
    }
   
   
    public void ButtonsState(bool check)
    {
        videoSlider.interactable = check;
        exit.interactable = check;
        play.interactable = check;
        rewind.interactable = check;
        pause.interactable = check;
        
    }
   
    IEnumerator ExitScreen()
    {
        buttonResetState.Invoke();
        SceneManager.Instance.mainCanvasObject.SetActive(true);
        this.gameObject.SetActive(false);
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
        videoPlayer.Play();
    }
    public void Pause()
    {
        videoPlayer.Pause();
    }
    public void Rewind()
    {
        videoPlayer.Rewind(true);
        videoPlayer.Play();
    }
    IEnumerator Wait()
    {
        yield return new WaitForSeconds(0.25f);
        yield return new WaitForEndOfFrame();
        
    }
}
