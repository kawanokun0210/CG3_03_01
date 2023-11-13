#pragma once

enum SCENE {
	TITLE,
	STAGE,
	CLEAR
};

class IScene
{
protected:
	//シーン番号を管理する変数
	static int sceneNo;

public:
	//継承先で実装される関数
	//抽象クラスなので純粋仮想クラスとする
	virtual void Initialize() = 0;

	virtual void Update() = 0;

	virtual void Draw() = 0;

	//仮想デストラクタ
	virtual ~IScene();

	//シーン番号のゲッター
	int GetSceneNo() { return sceneNo; }

};

