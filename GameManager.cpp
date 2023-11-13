#include "GameManager.h"

GameManager::GameManager() {
	//各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	//初期シーンの設定
	currentSceneNo_ = iscene->GetSceneNo();
}

GameManager::~GameManager() {

}

int GameManager::Run() {
	while (Novice::ProcessMessage() == 0)
	{
		Novice::BeginFrame();

		//// キー入力を受け取る
		//memcpy(preKeys, keys, 256);
		//Novice::GetHitKeyStateAll(keys);

		//シーンのチェック
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		//シーン変更チェック
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Initialize();
		}

		//更新処理
		sceneArr_[currentSceneNo_]->Update();

		//描画処理
		sceneArr_[currentSceneNo_]->Draw();

		Novice::EndFrame();

		//ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}

	}
	// ライブラリの終了
	Novice::Finalize();

	return 0;
}