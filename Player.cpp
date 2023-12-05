#include "Player.h"

Player::Player() {

}

void Player::Initialize() {

}

void Player::Update() {
	
}

void Player::Draw() {
	Novice::DrawBox(int(this->pos.x), int(this->pos.y), 32, 32, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	this->pos.x += this->speed;
}

void Player::MoveLeft() {
	this->pos.x -= this->speed;
}