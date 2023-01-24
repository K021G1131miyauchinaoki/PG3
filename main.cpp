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
		//敵を生成し、初期化
		std::unique_ptr<Enemy> newEnemy = std::make_unique<Enemy>();
		//newEnemy->Initialize(model_, worldTransform_.translation_, velocity);

		//敵を登録する
		enemys.push_back(std::move(newEnemy));

	}


	printf("\nどれを攻撃する?\n");
	while (true)
	{
		printf("1か2を選択してください\n");
		
		scanf_s("%d", &num);
		if (num==1||num==2)
		{
			Enemy::isDead = true;
		}
		else {
			printf("1か2以外は入力できません\n\n");
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