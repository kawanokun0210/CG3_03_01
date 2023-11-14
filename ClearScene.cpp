#include "ClearScene.h"

void ClearScene::Initialize() {

}

void ClearScene::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw() {
	Novice::ScreenPrintf(0, 0, "SCENE : CLAR");
	Novice::ScreenPrintf(0, 20, "Press[SPACE]");
}