#include "InputHandler.h"
#include <Novice.h>

ICommand* InputHandler::HandleInput() {

	if (Novice::CheckHitKey(DIK_A)) {
		return /*Aが押された*/;
	}

	if (Novice::CheckHitKey(DIK_D)) {
		return /*Dが押された*/;
	}

	return nullptr;
}

void InputHandler::/*Aが押されたら左移動の関数（コマンド）をセット*/() {

	ICommand* command = new /*左移動コマンドクラス*/();
	this->pressKeyA_ = command;
}

void InputHandler::/*Dが押されたら右移動の関数（コマンド）をセット*/() {
	
	ICommand* command = new /*右移動コマンドクラス*/();
	this->pressKeyD_ = command;
}