using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class EventController : MonoBehaviour
{
    [SerializeField] private Button button1_1;
    [SerializeField] private Button button1_2;
    [SerializeField] private Button button1_3;
    [SerializeField] private Button button1_4;
    [SerializeField] private Button button1_5;
    [SerializeField] private Button button1_6;
    [SerializeField] private Button button1_7;
    [SerializeField] private Button button2_1;
    [SerializeField] private Button button2_2;
    [SerializeField] private Button button2_3;
    [SerializeField] private Button button2_4;
    [SerializeField] private Button button2_5;
    [SerializeField] private Button button2_6;
    [SerializeField] private Button button2_7;
    [SerializeField] private Button button3_1;
    [SerializeField] private Button button3_2;
    [SerializeField] private Button button3_3;
    [SerializeField] private Button button3_4;
    [SerializeField] private Button button3_5;
    [SerializeField] private Button button3_6;
    [SerializeField] private Button button3_7;
    [SerializeField] private Button button4_1;
    [SerializeField] private Button button4_2;
    [SerializeField] private Button button4_3;
    [SerializeField] private Button button4_4;
    [SerializeField] private Button button4_5;
    [SerializeField] private Button button4_6;
    [SerializeField] private Button button4_7;
    [SerializeField] private Button button5_1;

    // Start is called before the first frame update
    void Start()
    {

        button1_1.onClick.AddListener(ChangeScene1);
        button1_2.onClick.AddListener(ChangeScene2);
        button1_3.onClick.AddListener(ChangeScene3);
        button1_4.onClick.AddListener(ChangeScene4);
        button1_5.onClick.AddListener(ChangeScene5);
        button1_6.onClick.AddListener(ChangeScene6);
        button1_7.onClick.AddListener(ChangeScene7);

        button2_1.onClick.AddListener(ChangeScene8);
        button2_2.onClick.AddListener(ChangeScene9);
        button2_3.onClick.AddListener(ChangeScene10);
        button2_4.onClick.AddListener(ChangeScene11);
        button2_5.onClick.AddListener(ChangeScene12);
        button2_6.onClick.AddListener(ChangeScene13);
        button2_7.onClick.AddListener(ChangeScene14);

        button3_1.onClick.AddListener(ChangeScene15);
        button3_2.onClick.AddListener(ChangeScene16);
        button3_3.onClick.AddListener(ChangeScene17);
        button3_4.onClick.AddListener(ChangeScene18);
        button3_5.onClick.AddListener(ChangeScene19);
        button3_6.onClick.AddListener(ChangeScene20);
        button3_7.onClick.AddListener(ChangeScene21);

        button4_1.onClick.AddListener(ChangeScene22);
        button4_2.onClick.AddListener(ChangeScene23);
        button4_3.onClick.AddListener(ChangeScene24);
        button4_4.onClick.AddListener(ChangeScene25);
        button4_5.onClick.AddListener(ChangeScene26);
        button4_6.onClick.AddListener(ChangeScene27);
        button4_7.onClick.AddListener(ChangeScene28);

        button5_1.onClick.AddListener(ChangeScene29);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void ChangeScene1() 
    {
        SceneManager.LoadScene(1);
    }
    void ChangeScene2()
    {
        SceneManager.LoadScene(2);
    }
    void ChangeScene3()
    {
        SceneManager.LoadScene(3);
    }
    void ChangeScene4()
    {
        SceneManager.LoadScene(4);
    }
    void ChangeScene5()
    {
        SceneManager.LoadScene(5);
    }
    void ChangeScene6()
    {
        SceneManager.LoadScene(6);
    }
    void ChangeScene7()
    {
        SceneManager.LoadScene(7);
    }
    void ChangeScene8()
    {
        SceneManager.LoadScene(8);
    }
    void ChangeScene9()
    {
        SceneManager.LoadScene(9);
    }
    void ChangeScene10()
    {
        SceneManager.LoadScene(10);
    }
    void ChangeScene11()
    {
        SceneManager.LoadScene(11);
    }
    void ChangeScene12()
    {
        SceneManager.LoadScene(12);
    }
    void ChangeScene13()
    {
        SceneManager.LoadScene(13);
    }
    void ChangeScene14()
    {
        SceneManager.LoadScene(14);
    }
    void ChangeScene15()
    {
        SceneManager.LoadScene(15);
    }
    void ChangeScene16()
    {
        SceneManager.LoadScene(16);
    }
    void ChangeScene17()
    {
        SceneManager.LoadScene(17);
    }
    void ChangeScene18()
    {
        SceneManager.LoadScene(18);
    }
    void ChangeScene19()
    {
        SceneManager.LoadScene(19);
    }
    void ChangeScene20()
    {
        SceneManager.LoadScene(20);
    }
    void ChangeScene21()
    {
        SceneManager.LoadScene(21);
    }
    void ChangeScene22()
    {
        SceneManager.LoadScene(22);
    }
    void ChangeScene23()
    {
        SceneManager.LoadScene(23);
    }
    void ChangeScene24()
    {
        SceneManager.LoadScene(24);
    }
    void ChangeScene25()
    {
        SceneManager.LoadScene(25);
    }
    void ChangeScene26()
    {
        SceneManager.LoadScene(26);
    }
    void ChangeScene27()
    {
        SceneManager.LoadScene(27);
    }
    void ChangeScene28()
    {
        SceneManager.LoadScene(28);
    }

    void ChangeScene29()
    {
        SceneManager.LoadScene(29);
    }
}
