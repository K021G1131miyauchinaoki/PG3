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
	}
	

	delete enemy;
	system("Pause");

	return	0;
}