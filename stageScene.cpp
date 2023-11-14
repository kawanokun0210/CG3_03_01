#include "StageScene.h"

void StageScene::Initialize() {
	playerPos = { 640,360 };
	enemyPos = { 640,0 };
	bulletPos = { playerPos.x,playerPos.y };

	bulletSize = 20;
	enemySize = 50;

	speed = 5.0f;

	isAlive = true;
	isBulletShot = false;

}

void StageScene::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		isBulletShot = true;
	}

	if (isBulletShot == true) {
		bulletPos.y -= speed;
	}

	//色の変換
	if (bulletPos.x >= enemyPos.x - enemySize / 2 &&
		bulletPos.y >= enemyPos.y - enemySize / 2 &&
		bulletPos.x <= enemyPos.x + enemySize &&
		bulletPos.y <= enemyPos.y + enemySize) {
		isAlive = false;
	}

	if (isAlive == false) {
		sceneNo = CLEAR;
	}

}

void StageScene::Draw() {

	Novice::DrawBox(int(playerPos.x), int(playerPos.y), 32, 32, 0.0f, WHITE, kFillModeSolid);
	Novice::DrawBox(int(enemyPos.x), int(enemyPos.y), enemySize, enemySize, 0.0f, WHITE, kFillModeSolid);
	Novice::DrawBox(int(bulletPos.x), int(bulletPos.y), bulletSize, bulletSize, 0.0f, WHITE, kFillModeSolid);

	Novice::ScreenPrintf(0, 0, "SCENE : STAGE");
	Novice::ScreenPrintf(0, 20, "Press[SPACE]");
}