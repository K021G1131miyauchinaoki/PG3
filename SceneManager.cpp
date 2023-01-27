#include "SceneManager.h"
#include<stdio.h>

SceneManager::SceneManager() {}

SceneManager::~SceneManager() {}

SceneManager* SceneManager::GetInstance() {
	static	SceneManager instance;
	//printf("インスタンスを取得しました");
	return &instance;
}

void SceneManager::ChangeScene(int sceneNo) {
	switch (sceneNo)
	{
	case 0:
		printf("sceneNo:%d\nTitle\n", sceneNo);
		break;
	case 1:
		printf("sceneNo:%d\nNewGame\n", sceneNo);
		break;
	case 2:
		printf("sceneNo:%d\nGamePlay\n", sceneNo);
		break;
	case 3:
		printf("sceneNo:%d\nGameClear\n", sceneNo);
		break;
	default:
		printf("シーンがありません\n");
		break;
	}
}