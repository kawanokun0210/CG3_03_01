#pragma once
#include "Vector2.h"
#include <Novice.h>

class Player
{
private:

	Vector2 pos = { 640.0f,360.0f };
	float speed = 4.0f;

public:
	Player();
	
	void Initialize();
	void Update();
	void Draw();

	//メンバ関数
	void MoveRight();
	void MoveLeft();

};

