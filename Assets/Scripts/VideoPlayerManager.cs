using UnityEngine;
using UnityEngine.UI;


using RenderHeads.Media.AVProVideo;
public class VideoPlayerManager : MonoBehaviour
{
    public Button backToMain;
    public GameObject hotspotButtonPrefab, hotspotObjectPrefab, mainEnvironment;
    public string hotspotLabel;
    public MediaPlayer videoPlayer;
    public ApplyToMesh mainVideoPlayer;
    public int count;
    public string videoName;


    public int rows = 3; // Number of rows in the grid
    public int columns = 3; // Number of columns in the grid
    public float spacing = 1.0f; // Spacing between objects in the grid
    private void OnEnable()
    {

        videoPlayer = SceneManager.Instance.myMediaPlayer;
        backToMain.onClick.AddListener(BackToMain);
        mainVideoPlayer.Player = videoPlayer;
        videoPlayer.OpenMedia(new MediaPath("360 Videos/"+videoName + ".mp4", MediaPathType.RelativeToDataFolder), autoPlay: true);
    }
    public void InstantiateHotspotObjects()
    {
        GameObject refObj = Instantiate(hotspotObjectPrefab, this.gameObject.transform);
        //GameObject btnObj = Instantiate(hotspotButtonPrefab, contentObjectOfHotspot.transform);
        GameObject btnObj = Instantiate(hotspotButtonPrefab, mainEnvironment.transform);
        btnObj.transform.position = new Vector3(btnObj.transform.position.x, btnObj.transform.position.y + count, btnObj.transform.position.z);
        count += 60;
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
