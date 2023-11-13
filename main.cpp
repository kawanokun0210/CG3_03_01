#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "LE2B_カワノユウキ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameManager* gameManager = new GameManager();

	gameManager->Run();

}
