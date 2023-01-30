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
		//敵を生成し、初期化
		std::unique_ptr<Enemy> newEnemy = std::make_unique<Enemy>();
		//newEnemy->Initialize(model_, worldTransform_.translation_, velocity);

		//敵を登録する
		enemys.push_back(std::move(newEnemy));

	}


	printf("\nどれを攻撃する?\n");
	while (true)
	{
		printf("1から%dを選択してください\n", Enemy::num);
		
		scanf_s("%d", &num);
		if (num>=1&&num<=Enemy::num)
		{
			Enemy::isDead = true;
		}
		else {
			printf("1から%d以外は入力できません\n\n",Enemy::num);
		}
		if (Enemy::isDead)
		{
			enemys.remove_if([](std::unique_ptr<Enemy>& enemy) { return Enemy::isDead; });
			printf("すべての敵は削除された\n");
			break;
		}

	}
	


	system("Pause");

	return	0;
}