#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include"Enemy.h"

int	main() {
	Enemy* enemy = new Enemy;
	while (true)
	{
		switch (_getch())
		{
		case 0x20:
			enemy->Update();
			break;
		default:
			break;
		}

	}
	

	delete enemy;
	system("Pause");

	return	0;
}