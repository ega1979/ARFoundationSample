# AR Foundation Samples

Example projects that use [*AR Foundation 3.0*](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@3.0/manual/index.html) and demonstrate its functionality with sample assets and components.

This set of samples relies on five Unity packages:

* ARSubsystems ([documentation](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.0/manual/index.html))
* ARCore XR Plugin ([documentation](https://docs.unity3d.com/Packages/com.unity.xr.arcore@3.0/manual/index.html))
* ARKit XR Plugin ([documentation](https://docs.unity3d.com/Packages/com.unity.xr.arkit@3.0/manual/index.html))
* ARKit Face Tracking ([documentation](https://docs.unity3d.com/Packages/com.unity.xr.arkit-face-tracking@3.0/manual/index.html))
* ARFoundation ([documentation](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@3.0/manual/index.html))

ARSubsystems defines an interface, and the platform-specific implementations are in the ARCore and ARKit packages. ARFoundation turns the AR data provided by ARSubsystems into Unity `GameObject`s and `MonoBehavour`s.

The `master` branch is compatible with Unity 2019.2 and later. For 2018.4, see the [1.5-preview branch](https://github.com/Unity-Technologies/arfoundation-samples/tree/1.5-preview).

## Why is ARKit Face Tracking a separate package?

For privacy reasons, use of ARKit's face tracking feature requires additional validation in order to publish your app on the App Store. If your application binary contains certain face tracking related symbols, your app may fail validation. For this reason, we provide this feature as a separate package which must be explicitly included.

## ARKit 3 Support

The ARKit XR Plugin and ARKit Face Tacking packages support both ARKit 2 and ARKit 3 simultaneously. We supply separate libraries and select the appropriate one based on the version of Xcode selected in your Build Settings. This should eliminate the confusion over which package version is compatible with which Xcode version.

The ARKit 3 features require Xcode 11 and iOS/iPadOS 13.

## Instructions for installing AR Foundation

1. Download the latest version of Unity 2019.2 or later.

2. Open Unity, and load the project at the root of the *arfoundation-samples* repository.

3. Open your choice of sample scene.

4. See the [AR Foundation Documentation](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@latest?preview=1) for usage instructions and more information.

# サンプルプロジェクト

## SimpleAR

PoindCloudのビジュアライゼーションと平面検出を有効した簡単なサンプル。
スクリーン上にARSessionをPause(一時停止)、Resume(再開)、Reset(リセット)、Reload(リロードボタン)が用意されている。

平面が検知されると、検知した平面をタップすることで、キューブを置くことができる。
これは平面に対してレイキャストを有効にするために `ARRaycastManager` を使っている。

| アクション | 内容 |
| ------ | ------- |
| Pause  | ARSessionを一時停止し、平面検出のような端末によるトラッキングやそれによりオブジェクトなどが検出されることは一時的に停止される。一時停止の間はARSessionはCPUリソースを消費しない。 |
| Resume | ARSessionを再開する。端末は再ローカライズをし始めるが、トラッキングが再確立されると、以前に検出されたオブジェクトはズレてしまう可能性がある。 |
| Reset | すべての検出されたオブジェクトを削除し、効果的に新たなARSessionを開始する。 |
| Reload | ARSession上のゲームオブジェクトを完全に破棄して、再インスタンス化する。これによってシーンの切り替え時に発生する可能性のある動作をシミュレートできる。 |

## Check Support

画面にARされているかとログをチェックし結果を表示するデモ。これに関連するスクリプトは、 [`SupportChecker.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/SupportChecker.cs)

## LightEstimation

カメラのフレームからの光源推定に関するデモ。画面上の `Brightness` と `Color Temp` と `Color Correct`　の値を参考にすること。
ほとんどの端末は3つのうち一部しかサポートしてないため、 `unavailable` と表示されることがある。

関連するスクリプトは、`Directional Light` のゲームオブジェクト上にある。


## ReferencePoints

レイキャストがヒットして点群が作られる方法を示すサンプル。 `Clear Reference Point` ボタンを押すと作成された点群をすべて削除される。[`ReferencePointCreator.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/ReferencePointCreator.cs) のスクリプトを参照すること。

## Scale

This sample shows how to adjust the apparent scale of content in an AR scene. It does this by moving, rotating, and scaling the `ARSessionOrigin` instead of the content. Complex scenes often can't be moved after creation (e.g., terrain), and scale can negatively affect other systems such as physics, particle effects, and AI navigation. The `ARSessionOrigin`'s scale feature is useful if you want to make your content "appear" at a position on a detected plane and to scale, for example, a building sized object to a table-top miniature.

To use this sample, first move the device around until a plane is detected, then tap on the plane. Content will appear at the touch point. After the content is placed, you can adjust its rotation and scale using the on-screen sliders. Note that the content itself is never moved, rotated, or scaled.

The relevant script is [`MakeAppearOnPlane.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/MakeAppearOnPlane.cs).

## CameraImage

This samples shows how to manipulate the camera textures on the CPU. The video feed for pass through cameras involves GPU-only textures, and manipulating them on the CPU (e.g., for computer vision algorithms) would require an expensive GPU read. Fortunately, ARFoundation provides an API for obtaining the camera image on the CPU for further processing.

The relevant script is [`TestCameraImage.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/TestCameraImage.cs).

The resolution of the CPU image is affected by the camera's configuration. The current configuration is indicated at the bottom left of the screen inside a dropdown box which lets you select one of the supported camera configurations. The [`CameraConfigController.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/CameraConfigController.cs) demonstrates enumerating and selecting a camera configuration. It is on the `CameraConfigs` GameObject.

## TogglePlaneDetection

This sample shows how to toggle plane detection on and off. When off, it will also hide all previously detected planes by disabling their GameObjects. See [`PlaneDetectionController.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/PlaneDetectionController.cs).

## PlaneClassification

This sample shows how to query for a plane's classification. Some devices attempt to classify planes into categories such as "door", "seat", "window", and "floor". This scene enables plane detection using the `ARPlaneManager`, and uses a prefab which includes a component which displays the plane's classification, or "none" if it cannot be classified.

## FeatheredPlanes

This sample demonstrates basic plane detection, but uses a better looking prefab for the `ARPlane`. Rather than being drawn as exactly defined, the plane fades out towards the edges.

## PlaneOcclusion

This sample demonstrates basic plane detection, but uses an occlusion shader for the plane's material. This makes the plane appear invisible, but virtual objects behind the plane are culled. This provides an additional level of realism when, for example, placing objects on a table.

Move the device around until a plane is detected (its edges are still drawn) and then tap on the plane to place/move content.

## UX

This sample demonstrates some UI that may be useful when guiding new users through an AR application. It uses the script [`UIManager.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/UX/UIManager.cs) to trigger different UI animations based on events (e.g., a plane being detected).

The functionality demonstrated here is conceptually similar to the `ARKitCoachingOverlay` sample.

## EnvironmentProbes

This sample demonstrates environment probes, a feature which attempts to generate a 3D texture from the real environment and applies it to reflection probes in the scene. The scene includes several spheres which start out completely black, but will change to shiny spheres which reflect the real environment when possible.

---


## ARWorldMap

An `ARWorldMap` is an ARKit-specific feature which lets you save a scanned area. ARKit can optionally relocalize to a saved world map at a later time. This can be used to synchronize multiple devices to a common space, or for curated experiences specific to a location, such as a museum exhibition or other special installation. Read more about world maps [here](https://developer.apple.com/documentation/arkit/arworldmap). A world map will store most types of trackables, such as reference points and planes.

The [`ARWorldMapController.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/ARWorldMapController.cs) performs most of the logic in this sample.

This sample requires iOS 12.

## ARCollaborationData

Similar to an `ARWorldMap`, a "collaborative session" is an ARKit-specific feature which allows multiple devices to share session information in real time. Each device will periodically produce `ARCollaborationData` which should be sent to all other devices in the collaborative session. ARKit will share each participant's pose and all reference points. Other types of trackables, such as detected planes, are not shared.

See [`CollaborativeSession.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scenes/ARCollaborationData/CollaborativeSession.cs). Note there are two types of collaboration data: "Critical" and "Optional". "Critical" data is available periodically and should be sent to all other devices reliably. "Optional" data is available nearly every frame and may be sent unreliably. Data marked as "optional" includes data about the device's location, which is why it is produced very frequently (i.e., every frame).

Note that ARKit's support for collaborative sessions does not include any networking; it is up to the developer to manage the connection and send data to other participants in the collaborative session. For this sample, we used Apple's [MultipeerConnectivity Framework](https://developer.apple.com/documentation/multipeerconnectivity). Our implementation can be found [here](https://github.com/Unity-Technologies/arfoundation-samples/tree/master/Assets/Scripts/Multipeer).

You can create reference points by tapping on the screen. Reference points are created when the tap results in a raycast which hits a point in the point cloud.

This sample requires iOS 13.

## ARKitCoachingOverlay

The coaching overlay is an ARKit-specific feature which will overlay a helpful UI guiding the user to perform certain actions to achieve some "goal", such as finding a horizontal plane.

The coaching overlay can be activated automatically or manually, and you can set its goal. In this sample, we've set the goal to be "Any plane", and for it to activate automatically. This will display a special UI on the screen until a plane is found. There is also a button to activate it manually.

The sample includes a MonoBehavior to define the settings of the coaching overlay. See [`ARKitCoachingOverlay.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scenes/ARKitCoachingOverlay/ARKitCoachingOverlay.cs).

This sample requires iOS 13.

## ImageTracking

This sample demonstrates image tracking. Image tracking is supported on ARCore and ARKit. To enable image tracking, you must first create an `XRReferenceImageLibrary`. This is the set of images to look for in the environment. [Click here](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.0/manual/image-tracking.html) for instructions on creating one.

At runtime, ARFoundation will generate an `ARTrackedImage` for each detected reference image. This sample uses the [`TrackedImageInfoManager.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scenes/ImageTracking/TrackedImageInfoManager.cs) script to overlay the original image on top of the detected image, along with some meta data.

Run the sample on an ARCore or ARKit-capable device and point your device at one of the images in [`Assets/Scenes/ImageTracking/Images`](https://github.com/Unity-Technologies/arfoundation-samples/tree/master/Assets/Scenes/ImageTracking/Images). They can be displayed on a computer monitor; they do not need to be printed out.

## ObjectTracking

Similar to the image tracking sample, this sample detects a 3D object from a set of reference objects in an `XRReferenceObjectLibrary`. [Click here](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.0/manual/object-tracking.html) for instructions on creating one.

To use this sample, you must have a physical object the device can recognize. The sample's reference object library is built using two reference objects. The sample includes [printable templates](https://github.com/Unity-Technologies/arfoundation-samples/tree/master/Assets/Scenes/Object%20Tracking/Printable%20Templates) which can be printed on 8.5x11 inch paper and folded into a cube and cylinder.

Alternatively, you can [scan your own objects](https://developer.apple.com/documentation/arkit/scanning_and_detecting_3d_objects) and add them to the reference object library.

This sample requires iOS 12 and is not supported on Android.


## Face Tracking

様々なフェイストラッキング機能を示すいくつかのサンプル。ARCore向けのものとARKit向けのものを用意しているものもある。


### FacePose

これは最もシンプルなフェイストラッキングのサンプルで単に検知した顔のポーズに軸を描画。
このサンプルはフロントカメラ（自撮り）を使用。

### FaceMesh

検出された顔を表すメッシュをインスタンス化してアップデートするサンプル。端末のサポートに関する情報（同時に追跡できる顔の数など）を画面に表示。

このサンプルはフロントカメラ（自撮り）を使用。

### ARKitFaceBlendShapes

`Blend shapes` は、ARKit独自の機能で、例えば、`wink` and `frown`などさまざまな顔の特徴に関する情報について0.1単位の大きさで提供する。このサンプルでは、​​`Blend shapes` を使用して、検出された顔の上に表示されるカートン（漫画風）の顔をパペットとして操作できる。

[`ARKitBlendShapeVisualizer.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/ARKitBlendShapeVisualizer.cs) を参照。

このサンプルはフロントカメラ（自撮り）を使用。

### ARCoreFaceRegions

`Face regions`は、ARCore独自の機能で、検出した顔の特定の `regions（領域）` に関するポーズの情報を提供する。 このサンプルでは各々の顔の領域に軸を描画。[`ARCoreFaceRegionManager.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/ARCoreFaceRegionManager.cs) を参照。

このサンプルはフロントカメラ（自撮り）を使用。


### EyeLasers, EyePoses, FixationPoint

これらサンプルは目と注視点をトラキングする様を示したデモ。アイトラッキングは検出した顔の目に関する姿勢（位置と回転）を生成し、 `fixation point(注視点)` は顔を見ている（つまり注視されている）点にあたる。 `EyeLasers` は、目の姿勢を使って検出された顔から放射されるレーザービームを描画している。

このサンプルはフロントカメラ（自撮り）を使用しており、さらにTrueDepth cameraを搭載したiOS端末が必須。


### RearCameraWithFrontCameraFaceMesh

iOS 13では背面カメラがアクティブなときのフェイストラッキングのサポートが追加されている。このサンプルは現在追跡されている顔の数だけのものである。ARFoundationでこのモードを有効にするために、 `ARFaceManager` と背面カメラを必須とする少なくとも1つの他のマネージャー（※この詳細はまだ調査中）の両方を有効にする必要がある。このサンプルでは `ARFaceManager` と `ARPlaneManager` を有効にしている。

この機能は、TrueDepth cameraとiOS 13が動作しているA12 bionicチップ搭載した端末を必須とする。


## HumanBodyTracking2D

2D画面空間におけるボディトラッキングを示すサンプル。人が検出されると、2Dスケルトンを生成。
[`ScreenSpaceJointVisualizer.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/ScreenSpaceJointVisualizer.cs) のスクリプトを参照。	

このサンプルはiOSが動作しているA12 bionicチップが搭載された端末を必須とする。


## HumanBodyTracking3D

3Dワールド空間におけるボディトラッキングを示すサンプル。人が検出されると、3Dスケルトンを生成。
[`HumanBodyTracker.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/HumanBodyTracker.cs) のスクリプトを参照。

このサンプルはiOSが動作しているA12 bionicチップが搭載された端末を必須とする。


## HumanSegmentationImages

このサンプルは `people occlusion(ピープルオクルージョン)` を示すサンプルで、検出した人に関するステンシルと震度テクスチャを生成する。このサンプルは非常にシンプルなもので、画面上に単に生のテクスチャを表示したもの。

このサンプルはiOSが動作しているA12 bionicチップが搭載された端末を必須とする。


## AllPointCloudPoints

`AR Default Point Cloud` プレハブが行っているように現在のフレームの特徴点だけでなく、すべての特徴点を経時的に表示するサンプル。
これはすべての特徴点をディクショナリに格納する `ARPointCloudParticleVisualzier` の一部修正されたバージョンを使用することで利用することで行うことができる。
各特徴点が一意的な識別子を持っているので、保存された点を検索し、存在している場合はディクショナリにあるその点の位置を更新する。
これはポイントクラウドの点群マップを必要とするカスタムソリューション（例えばカスタムメッシュの再構築技術など）に役に立つと思われる。

このサンプルでは以下2つのUIコンポーネントを用意。
* 左下のボタンで `All（すべて）` のポイントと `Current Frame（現在のフレーム）` のポイントだけに切り替えることが可能。
* Text in the upper right which displays the number of points in each point cloud (ARCore & ARKit will only ever have one).
右上のテキストは
それぞれのPoint Cloud（ARCoreとARKitには一つしかありません）にあるポイントの数を表示