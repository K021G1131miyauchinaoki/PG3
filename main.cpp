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
		//�G�𐶐����A������
		std::unique_ptr<Enemy> newEnemy = std::make_unique<Enemy>();
		//newEnemy->Initialize(model_, worldTransform_.translation_, velocity);

		//�G��o�^����
		enemys.push_back(std::move(newEnemy));

	}


	printf("\n�ǂ���U������?\n");
	while (true)
	{
		printf("1����%d��I�����Ă�������\n", Enemy::num);
		
		scanf_s("%d", &num);
		if (num>=1&&num<=Enemy::num)
		{
			Enemy::isDead = true;
		}
		else {
			printf("1����%d�ȊO�͓��͂ł��܂���\n\n",Enemy::num);
		}
		if (Enemy::isDead)
		{
			enemys.remove_if([](std::unique_ptr<Enemy>& enemy) { return Enemy::isDead; });
			printf("���ׂĂ̓G�͍폜���ꂽ\n");
			break;
		}

	}
	


	system("Pause");

	return	0;
}