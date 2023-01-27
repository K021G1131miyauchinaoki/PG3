#include "Enemy.h"
#include<stdio.h>

void (Enemy::* Enemy::activeTable[])() = {
	&Enemy::Access,		 //—£’E
	&Enemy::Shoot,		 //ËŒ‚
	&Enemy::Elimination //—£’E
};

void Enemy::Update() {
	activeTable[num];
}

void Enemy::Access() {
	printf("“G‚ª‹ß‚Ã‚¢‚Ä‚«‚½\n\n");
	num++;
}

void Enemy::Shoot() {
	printf("“G‚Ìƒr[ƒ€ËŒ‚\n\n");
	num++;
}
void Enemy::Elimination() {
	printf("“G‚Í—£’E‚µ‚½\n\n");
	num = 0;
}