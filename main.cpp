#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<memory>
#include<list>
#include"Enemy.h"

bool Enemy::isDead;
int Enemy::num;

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
		printf("1‚©‚ç%d‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢\n", Enemy::num);
		
		scanf_s("%d", &num);
		if (num>=1&&num<=Enemy::num)
		{
			Enemy::isDead = true;
		}
		else {
			printf("1‚©‚ç%dˆÈŠO‚Í“ü—Í‚Å‚«‚Ü‚¹‚ñ\n\n",Enemy::num);
		}
		if (Enemy::isDead)
		{
			enemys.remove_if([](std::unique_ptr<Enemy>& enemy) { return Enemy::isDead; });
			printf("‚·‚×‚Ä‚Ì“G‚Ííœ‚³‚ê‚½\n");
			break;
		}

	}
	


	system("Pause");

	return	0;
}