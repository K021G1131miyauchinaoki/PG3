#include "Enemy.h"
#include<stdio.h>

int Enemy::num = 0;

void (Enemy::* Enemy::activeTable[])() = {
	&Enemy::Access,		 //離脱
	&Enemy::Shoot,		 //射撃
	&Enemy::Elimination //離脱
};

void	Enemy::Timeout() {
	Sleep(1 * 1000);
	(this->*activeTable[num])();
}
void Enemy::Update() {
	Timeout();
}

void Enemy::Access() {
	printf("敵が近づいてきた\n\n");
	num++;
}

void Enemy::Shoot() {
	printf("敵のビーム射撃\n\n");
	num++;
}
void Enemy::Elimination() {
	printf("敵は離脱した\n\n");
	num++;
}