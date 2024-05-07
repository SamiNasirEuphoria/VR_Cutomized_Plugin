using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class HotspotButton : MonoBehaviour
{
    public GameObject buttonVideoObject;
    [HideInInspector]
    public GameObject mainEnvironment;
    public Text myLabelText;
    private Button myButton;
    private void Start()
    {
        myButton = GetComponent<Button>();
        myButton.onClick.AddListener(OpenVideoObject);
    }
    public void OpenVideoObject()
    {
        buttonVideoObject.SetActive(true);
        mainEnvironment.SetActive(false);
    }
}
