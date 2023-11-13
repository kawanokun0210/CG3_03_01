#include "StageScene.h"

void StageScene::Initialize() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
}

void StageScene::Update() {
	Initialize();
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = CLEAR;
	}
}

void StageScene::Draw() {
	Novice::ScreenPrintf(0, 0, "SCENE : STAGE");
	Novice::ScreenPrintf(0, 20, "Press[SPACE]");
}