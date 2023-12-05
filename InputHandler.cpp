#include "InputHandler.h"

void InputHandler::AssignMoveRightCommand2PressKeyD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyD = command;
}

void InputHandler::AssignMoveLeftCommand2PressKeyA() {
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA = command;
}

ICommand* InputHandler::HandleInput() {
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD;
	}

	if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA;
	}

	return nullptr;
}