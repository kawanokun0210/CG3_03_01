#include "TitleScene.h"

void TitleScene::Initialize() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
}

void TitleScene::Update() {
	Initialize();
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw() {
	Novice::ScreenPrintf(0, 0, "SCENE : TITLE");
	Novice::ScreenPrintf(0, 20, "Press[SPACE]");
}