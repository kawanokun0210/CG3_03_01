#pragma once
#include "IScene.h"
#include <Novice.h>
#include "Vector2.h"

class StageScene : public IScene
{
public:

	void Initialize() override;

	void Update() override;

	void Draw() override;

private:
	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	Vector2 playerPos;
	Vector2 enemyPos;

	Vector2 bulletPos;

	int bulletSize;
	int enemySize;

	float speed;

	bool isAlive;
	bool isBulletShot;

};

