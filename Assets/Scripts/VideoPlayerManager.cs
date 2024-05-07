using UnityEngine;
using UnityEngine.UI;


using RenderHeads.Media.AVProVideo;
public class VideoPlayerManager : MonoBehaviour
{
    public Button hotspotButtonPrefab, backToMain;
    public GameObject contentObjectOfHotspot, hotspotObjectPrefab, mainEnvironment;
    public string hotspotLabel;
    public MediaPlayer videoPlayer;
    public ApplyToMesh mainVideoPlayer;
    public string videoName;
    private void OnEnable()
    {

        videoPlayer = SceneManager.Instance.myMediaPlayer;
        backToMain.onClick.AddListener(BackToMain);
        mainVideoPlayer.Player = videoPlayer;
        videoPlayer.OpenMedia(new MediaPath(videoName + ".mp4", MediaPathType.RelativeToStreamingAssetsFolder), autoPlay: true);
    }
    public void InstantiateHotspotObjects()
    {
        GameObject refObj = Instantiate(hotspotObjectPrefab, this.gameObject.transform);
        Button btnObj = Instantiate(hotspotButtonPrefab, contentObjectOfHotspot.transform);
        HotspotButton btn = btnObj.GetComponent<HotspotButton>();
        btn.mainEnvironment = mainEnvironment;
        refObj.GetComponent<HotspotVideoPlayerManager>().mainOBJ = mainEnvironment;
        refObj.GetComponent<HotspotVideoPlayerManager>().StartSceneConfigurations();
        btn.buttonVideoObject = refObj;
        btn.myLabelText.text = hotspotLabel;
    }
    public void BackToMain()
    {
        SceneManager.Instance.mainCanvasObject.SetActive(true);
        this.gameObject.SetActive(false);
    }
    
}
