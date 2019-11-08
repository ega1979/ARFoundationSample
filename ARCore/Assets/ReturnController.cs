using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ReturnController : MonoBehaviour
{
    [SerializeField] private Button returnButton;
    // Start is called before the first frame update
    void Start()
    {
        returnButton.onClick.AddListener(ReturnScene);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void ReturnScene()
    {
        Resources.UnloadUnusedAssets();
        SceneManager.LoadScene(0);
    }
}
