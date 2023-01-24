#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<memory>
#include<list>
#include"Enemy.h"

bool Enemy::isDead;

int	main() {

	int num = 2;
	std::list<std::unique_ptr<Enemy>>enemys;
	for (size_t i = 0; i < num; i++)
	{
		//“G‚ğ¶¬‚µA‰Šú‰»
		std::unique_ptr<Enemy> newEnemy = std::make_unique<Enemy>();
		//newEnemy->Initialize(model_, worldTransform_.translation_, velocity);

		//“G‚ğ“o˜^‚·‚é
		enemys.push_back(std::move(newEnemy));

	}


	printf("\n‚Ç‚ê‚ğUŒ‚‚·‚é?\n");
	while (true)
	{
		printf("1‚©2‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢\n");
		
		scanf_s("%d", &num);
		if (num==1||num==2)
		{
			Enemy::isDead = true;
		}
		else {
			printf("1‚©2ˆÈŠO‚Í“ü—Í‚Å‚«‚Ü‚¹‚ñ\n\n");
		}
		if (Enemy::isDead)
		{
			enemys.remove_if([](std::unique_ptr<Enemy>& enemy) { return Enemy::isDead; });
			Enemy::AllFallDown();
			break;
		}

	}
	


	system("Pause");

	return	0;
}