#include "Enemy.h"
#include<stdio.h>

int Enemy::num = 0;

void (Enemy::* Enemy::activeTable[])() = {
	&Enemy::Access,		 //���E
	&Enemy::Shoot,		 //�ˌ�
	&Enemy::Elimination //���E
};

void	Enemy::Timeout() {
	Sleep(1 * 1000);
	(this->*activeTable[num])();
}
void Enemy::Update() {
	Timeout();
}

void Enemy::Access() {
	printf("�G���߂Â��Ă���\n\n");
	num++;
}

void Enemy::Shoot() {
	printf("�G�̃r�[���ˌ�\n\n");
	num++;
}
void Enemy::Elimination() {
	printf("�G�͗��E����\n\n");
	num++;
}