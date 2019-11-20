# AR Foundation サンプル集

[*AR Foundation 3.0*](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@3.0/manual/index.html)を使い、サンプルのアセットとコンポーネントでその機能を試すサンプル集としてのプロジェクト。

このサンプルセットは5つのUnityパッケージに依存している。

* ARSubsystems ([ドキュメント](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.0/manual/index.html))
* ARCore XR Plugin ([ドキュメント](https://docs.unity3d.com/Packages/com.unity.xr.arcore@3.0/manual/index.html))
* ARKit XR Plugin ([ドキュメント](https://docs.unity3d.com/Packages/com.unity.xr.arkit@3.0/manual/index.html))
* ARKit Face Tracking ([ドキュメント](https://docs.unity3d.com/Packages/com.unity.xr.arkit-face-tracking@3.0/manual/index.html))
* ARFoundation ([ドキュメント](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@3.0/manual/index.html))

ARSubsystemsはインターフェースを定義し、プラットフォーム固有の実装はARCoreおよびARKitパッケージに含まれている。ARFoundationは、ARSubsystemsが提供するARデータをUnityの `GameObject` と `MonoBehavour` に変換する。

`master` ブランチはUnity 2019.2以降と互換性がある。2018.4系については[1.5-preview branch](https://github.com/Unity-Technologies/arfoundation-samples/tree/1.5-preview)を参照。

## なぜARKitのフェイストラッキングは別のパッケージになっているのか？

プライバシー上の理由から、ARKitのフェイストラッキングの機能を使用したアプリをApp Storeでアプリを公開するには、追加の審査が必要となる。アプリケーションバイナリに特定のフェイストラッキング関連のシンボルが含まれている場合、アプリの審査に落ちることがあります。このため、フェイストラッキングの機能は個別のパッケージとして提供され、明示的に含める必要がある。

## ARKit 3 Support

ARKit XR PluginとARKit Face TackingはARKit2とARKit3を両方にサポート。個別のライブラリを提供し、Build Settingsで選択したXcodeのバージョンに基づいて適切なライブラリを選択する。これによって、どのパッケージバージョンがどのXcodeバージョンと互換性があるかという混乱が解消される。

ARKit3の機能はXCode11とiOS/iPadOS13が必須。


## AR Foundationの導入手順

1. Unity 2019.2以降の最新バージョンをダウンロード。

2. Unityを開きプロジェクトを *arfoundation-samples* リポジトリのrootでロードする。

3. サンプルのシーンを選択して開く。

4. もっと詳しい手順や情報については[AR Foundation Documentation](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@latest?preview=1)を参照。

# サンプルプロジェクト

## SimpleAR

PoindCloudのビジュアライゼーションと平面検出を有効にした簡単なサンプル。
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

画面上にARにサポートの有無とログをチェックし結果を表示するデモ。これに関連するスクリプトは、 [`SupportChecker.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/SupportChecker.cs)


## LightEstimation

カメラのフレームからの光源推定に関するデモ。画面上の `Brightness` と `Color Temp` と `Color Correct`　の値を参考にすること。
ほとんどの端末は3つのうち一部しかサポートしてないため、 `unavailable` と表示されることがある。

関連するスクリプトは、`Directional Light` のゲームオブジェクト上にある。


## ReferencePoints

レイキャストがヒットして点群が作られる方法を示すサンプル。 `Clear Reference Point` ボタンを押すと作成された点群をすべて削除される。[`ReferencePointCreator.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/ReferencePointCreator.cs) のスクリプトを参照すること。

## Scale

ARシーンでコンテンツの見た目上の拡大縮小を調整する方法を示すサンプル。これはコンテンツの代わりに、 `ARSessionOrigin` を移動、回転、スケーリング（拡大縮小）することにより行われる。複雑なシーンだと作成後に移動できない場合が多く（地形など）、拡大縮小は物理学、パーティクルエフェクト、AIナビゲーションなど他のシステムに悪影響を与える可能性がある。  `ARSessionOrigin` のスケール機能は検出された平面の位置にコンテンツを「表示」し、例えばテーブルサイズのミニチュアを建物サイズのオブジェクトにスケールさせる場合に便利。

`ARSessionOrigin` のスケール機能は、検出された平面上の位置にコンテンツを「表示」し、たとえば、テーブルサイズのミニチュアに建物サイズのオブジェクトを拡大する場合に便利です。

このサンプルを使うには、まず平面が検出されるまで端末を動かし、検出されたら平面をタップする。コンテンツは平面の当たったポイントに表示される。コンテンツが配置された後、画面上のスライダーを使って回転、拡大縮小を調整できる。コンテンツ自体は移動、回転、縮小されないことに注意すること。

このサンプルを使用するには、まず飛行機が検出されるまでデバイスを動かしてから、飛行機をタップします。タッチポイントにコンテンツが表示されます。コンテンツを配置した後、画面上のスライダーを使用してその回転と拡大縮小を調整できます。コンテンツ自体は移動、回転、拡大縮小されないことに注意してください。

関連するスクリプトは[`MakeAppearOnPlane.cs`]（https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/MakeAppearOnPlane.cs）。


## CameraImage

CPU上でのカメラテクスチャを制御するやり方を示すサンプル。パススルーカメラのビデオフォードにはGPUのみのテクスチャが含まれ、CPUでそれらを操作（例えばコンピュータービジョンのアルゴリズム用）には、高価なGPUの読み取りが必要になる。幸いにも、ARFoundationでは、さらなる処理のためにCPU上でカメラ画像を取得するAPIを提供している。

関連するスクリプトは[`TestCameraImage.cs`]（https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/TestCameraImage.cs）。

It is on the `CameraConfigs` GameObject.
CPUイメージの解像度はカメラの設定に影響する。現在の設定は、サポートされているカメラ設定のいずれかを選択できるドロップボックス内の画面の左下に示されている。[`CameraConfigController.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/CameraConfigController.cs)のところでカメラ設定の列挙と選択を行っている。これは`CameraConfigs` GameObjectで使われている。


## TogglePlaneDetection

平面検出のON／OFFを切り替えるやり方を示すサンプル。OFFの場合、GameObjectを無効にすることで、以前に検出されたすべての平面が非表示になる。[`PlaneDetectionController.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/PlaneDetectionController.cs)を参照。


## PlaneClassification

平面の分類を照会する方法を示すサンプル。端末で平面を「ドア」「座席」「窓」「床」などカテゴリごとに分類する。このサンプルのシーンでは `ARPlaneManager` を使い平面検出を有効にして、平面分類を表示するコンポーネントを含むPrefabを使っている。また、分類できない場合は「なし」としている。


## FeatheredPlanes

このサンプルは基本的な平面検出のデモだが、 `ARPlane` に見栄えの良いPrefabを使用している。正確に定義されたとおりに描画するのではなく、平面は端に向かってフェードアウトする。


## PlaneOcclusion

このサンプルは基本的な平面検出のデモだが、平面のマテリアルにオクルージョンシェーダーを使用している。これにより、平面が見えなくなるが、平面の背後の仮想オブジェクトはカリングされる（描画されなくなる）。これによりさらにリアルなレベルでオブジェクトをテーブルに配置するなどといったことが実現する。

平面が検出されるまで端末を動かし（端が描画される）、平面上をタップしてコンテンツを配置／移動。


## UX

このサンプルはARアプリケーションを初めて体験するユーザーをガイドするとき補助するUIのデモ。[`UIManager.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/UX/UIManager.cs)のスクリプトを使って、平面検出などのイベントに基づいて様々なUIアニメーションをトリガーしている。

ここでデモしている機能は、概念的に `ARKitCoachingOverlay` のサンプルに似たものである。

## EnvironmentProbes

このサンプルは環境プローブ、つまり実際の環境から3Dテクスチャを生成し、シーン内の反射プローブに適用する機能を示すデモ。
シーンには完全に黒な状態で始まるいくつかの球体が含まれているが、可能な場合は実際の環境を反映する光沢のある球体に変わっていく。


## ARWorldMap

`ARWorldMap` は、スキャンしたエリアを保存できるARKit特有の機能。オプションで、ARKitは後で保存されたワールドマップに再構築（リローカライズ）することが可能。この機能を使用して、共通のスペースに複数の端末を同期させたり、博物館の展示やその他の特別なインストレーションなどといった場所で固有のキュレーションされた体験を行うことが可能になる。ワールドマップの詳細については [こちら]（https://developer.apple.com/documentation/arkit/arworldmap）　。ワールドマップには、参照点（特徴点？）や平面など、ほとんどの種類の追跡可能なオブジェクトが保存される。

このサンプルでは、 [`ARWorldMapController.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scripts/ARWorldMapController.cs) で上記ロジックのほとんどを行われている。

このサンプルはiOS12(以上)必須。


## ARCollaborationData

`ARWorldMap` と似て `collaborative session` は、ARKit固有の機能で、利用することで複数の端末がセッション情報をリアルタイムに共有することができる。それぞれの端末は定期的に `ARCollaborationData` を生成し、collaborative session内ですべての他の端末に送信される。ARKitは、各参加者のポーズやすべての参照点を共有する。検出された平面など、他の種類の追跡可能なオブジェクトは共有されない。

[`CollaborativeSession.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scenes/ARCollaborationData/CollaborativeSession.cs) を参照。
`Critical` と `Optional` という2種類のcollaboration dataがあることに注意すること。`Critical` は、定期的に利用可能で、すべての他の端末に信頼性の高い方法ｄせに送信する必要がある。一方で、 `Optional` は、ほぼすべてのフレームで利用可能で信頼性の低い方法で送信してもよい。 `Optional` としてマークされたデータには、端末の位置に関するデータが含まれており、そのため非常に頻繁に（つまり毎フレーム）生成される。

`collaborative sessions` に対するARKitのサポートにはいかなるネットワーキングについても含まれていないことに注意すること。接続を管理し、`collaborative sessions` にいる他の参加者にデータを送信することについては開発者の責任。
このサンプルに関して、Appleの[MultipeerConnectivity Framework](https://developer.apple.com/documentation/multipeerconnectivity)を利用している。
実装については、[ここ](https://github.com/Unity-Technologies/arfoundation-samples/tree/master/Assets/Scripts/Multipeer)を参照。

画面をタップして、参照点を作成できる。タップした結果、Point Cloudにある点に当たったレイキャストがあるときに参照点が作成される。

このサンプルはiOS13必須。


## ARKitCoachingOverlay

`Coaching Overlay` はARKit固有の機能で、水平面を見つけるといったとある「ゴール（目標）」を成し遂げるためのアクションを行えるようにユーザーを導きやすいUIをオーバーレイする。

`Coaching Overlay` は自動でもしくは手動でアクティベートすることができ、「ゴール（目標）」をセットできる。このサンプルでは、「任意の平面」をゴールとして設定し、自動的にアクティベートするようにしている。このサンプルでは平面が見つかるまで画面に特別なUIを表示している。また手動でアクシべーとするボタンも用意。

サンプルは `Coaching Overlay` の設定を定義できるようにMonoBehaviorを含んでいる。[`ARKitCoachingOverlay.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scenes/ARKitCoachingOverlay/ARKitCoachingOverlay.cs)を参照。

このサンプルはiOS13必須。


## ImageTracking

このサンプルはImage Trackingのデモ。Image TrackingはARCoreとARKitでサポート。Image Trackingを有効にするには、最初に `XRReferenceImageLibrary` を作成しないといけない。`XRReferenceImageLibrary`　は環境下で画像を検索できるようになるための画像セットになる。Image Trackingを作成する手順に関しては、[ここを参照](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.0/manual/image-tracking.html)

実行時にARFoundationは各検出した参照画像に関して `ARTrackedImage` を生成する。このサンプルでは、[`TrackedImageInfoManager.cs`](https://github.com/Unity-Technologies/arfoundation-samples/blob/master/Assets/Scenes/ImageTracking/TrackedImageInfoManager.cs)のスクリプトを使って検出した画像の上にあるメタデータとともに元の画像をオーバーレイしている。

サンプルはARCoreかARKit対応の端末を使い、端末を[`Assets/Scenes/ImageTracking/Images`](https://github.com/Unity-Technologies/arfoundation-samples/tree/master/Assets/Scenes/ImageTracking/Images)内のいずれかの画像に向けて見ると試すことができる。


## ObjectTracking

Image Trackingのサンプルに似て、このサンプルは `XRReferenceObjectLibrary` で参照オブジェクトのセットから3D objectを検出する。これの作成手順については、[ここを参照](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.0/manual/object-tracking.html) 。

このサンプルでは、端末で認識できる物理オブジェクトが必要。サンプルの参照オブジェクトライブラリは2つの参照オブジェクトを使ってビルドされている。このサンプルには、[印刷可能なテンプレート](https://github.com/Unity-Technologies/arfoundation-samples/tree/master/Assets/Scenes/Object%20Tracking/Printable%20Templates)が含まれていて、8.5x11インチの紙に印刷して、キューブ上の筒に折りたたんで使うことができる。

代わりに、[自身のオブジェクトをスキャン](https://developer.apple.com/documentation/arkit/scanning_and_detecting_3d_objects)して、参照オブジェクトのライブラリに追加することも可能。


このサンプルはiOS12(以上)必須でAndroidは非サポート。	

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

これらサンプルは目と注視点をトラッキングする様を示したデモ。アイトラッキングは検出した顔の目に関する姿勢（位置と回転）を生成し、 `fixation point(注視点)` は顔を見ている（つまり注視されている）点にあたる。 `EyeLasers` は、目の姿勢を使って検出された顔から放射されるレーザービームを描画している。

このサンプルはフロントカメラ（自撮り）を使用しており、さらにTrueDepth cameraを搭載したiOS端末が必須。


### RearCameraWithFrontCameraFaceMesh

iOS13では背面カメラがアクティブなときのフェイストラッキングのサポートが追加されている。このサンプルは現在追跡されている顔の数だけのものである。ARFoundationでこのモードを有効にするために、 `ARFaceManager` と背面カメラを必須とする少なくとも1つの他のマネージャー（※この詳細はまだ調査中）の両方を有効にする必要がある。このサンプルでは `ARFaceManager` と `ARPlaneManager` を有効にしている。

この機能は、TrueDepth cameraとiOS13が動作しているA12 bionicチップ搭載した端末を必須とする。


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

`AR Default Point Cloud` プレハブが行っているようにサンプル。
これはすべての特徴点をディクショナリに格納する `ARPointCloudParticleVisualzier` の一部修正されたバージョンを使用することで利用することで行うことができる。

各特徴点が一意的な識別子を持っているので、保存された点を検索し、存在している場合はディクショナリにあるその点の位置を更新する。
これはポイントクラウドの点群マップを必要とするカスタムソリューション（例えばカスタムメッシュの再構築技術など）に役に立つと思われる。

このサンプルでは以下2つのUIコンポーネントを用意。
* 左下のボタンで `All（すべて）` のポイントと `Current Frame（現在のフレーム）` のポイントだけに切り替えることが可能。
* Text in the upper right which displays the number of points in each point cloud (ARCore & ARKit will only ever have one).
右上のテキストは
それぞれのPoint Cloud（ARCoreとARKitには一つしかありません）にあるポイントの数を表示