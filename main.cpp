#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"SceneManager.h"

int	main() {
	int sceneNo = 0;

	SceneManager* sceneManager = SceneManager::GetInstance();

	while (true)
	{
		system("cls");
		sceneManager->ChangeScene(sceneNo);
		switch (_getch())
		{
		case 0x20:
			sceneNo++;
			if (sceneNo == 4)
			{
				sceneNo = 0;
			}
			break;
		default:
			break;
		}

	}
	//Test::GetInstance();
	//Test* test = Test::GetInstance();
	//printf("1");

	system("Pause");

	return	0;
}