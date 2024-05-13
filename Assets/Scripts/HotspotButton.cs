using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using TMPro;

public class HotspotButton : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public GameObject buttonVideoObject;
    [HideInInspector]
    public GameObject mainEnvironment;
    public TMP_Text myLabelText;
    public Button myButton;
    private void Start()
    {
       // myButton.onClick.AddListener(OpenVideoObject);
    }
    public void OpenVideoObject()
    {
        buttonVideoObject.SetActive(true);
        mainEnvironment.SetActive(false);
    }

    public Image fillImage;
    public float fillSpeed = 0.5f;
    public float decreaseSpeed = 0.2f;

    private Coroutine fillCoroutine;
    private Button button;

    public void OnPointerEnter(PointerEventData eventData)
    {
        // Start filling the image
        if (fillCoroutine == null)
        {
            fillCoroutine = StartCoroutine(FillImageCoroutine());
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        // Stop filling the image and start decreasing the fill amount
        if (fillCoroutine != null)
        {
            StopCoroutine(fillCoroutine);
            fillCoroutine = StartCoroutine(DecreaseFillAmountCoroutine());
        }
    }

    IEnumerator FillImageCoroutine()
    {
        float fillAmount = 0f;

        while (fillAmount < 1f)
        {
            fillAmount += fillSpeed * Time.deltaTime;
            fillImage.fillAmount = Mathf.Clamp01(fillAmount);

            yield return null;
        }

        // Fill amount reached 1, simulate button press
        OpenVideoObject();

        // Reset coroutine and fill amount
        fillCoroutine = null;
        fillImage.fillAmount = 0f;
    }

    IEnumerator DecreaseFillAmountCoroutine()
    {
        float fillAmount = fillImage.fillAmount;

        while (fillAmount > 0f)
        {
            fillAmount -= decreaseSpeed * Time.deltaTime;
            fillImage.fillAmount = Mathf.Clamp01(fillAmount);

            yield return null;
        }

        // Reset coroutine and fill amount
        fillCoroutine = null;
        fillImage.fillAmount = 0f;
    }
}
