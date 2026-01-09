#include "Scene.h"

void Scene::Initialize() {

	inputHandler_ = new /*インプットハンドラークラス*/();

	inputHandler_->/*Aが押されたら左移動の関数（コマンド）をセット*/();
	inputHandler_->/*Dが押されたら右移動の関数（コマンド）をセット*/();

	player_ = new Player();
	player_->Initialize();
}

void Scene::Update() {

	iCommand_ = /*インプットハンドラークラスからAorDに入力チェック*/();

	if (iCommand_) {
		iCommand_->Execute(*player_);
	}

	player_->Update();
}

void Scene::Draw() {

	player_->Draw();
}