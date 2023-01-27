#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include"Enemy.h"

int	main() {
	Enemy* enemy = new Enemy;
	while (true)
	{	
		enemy->Update();

		if (Enemy::GetNum()==3)
		{
			break;
		}
	}
	

	delete enemy;
	system("Pause");

	return	0;
}