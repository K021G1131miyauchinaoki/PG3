#include "Enemy.h"
#include<stdio.h>

void (Enemy::* Enemy::activeTable[])() = {
	&Enemy::Access,		 //���E
	&Enemy::Shoot,		 //�ˌ�
	&Enemy::Elimination //���E
};

void Enemy::Update() {
	activeTable[num];
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
	num = 0;
}