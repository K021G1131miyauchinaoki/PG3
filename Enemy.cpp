#include "Enemy.h"
#include<stdio.h>

int Enemy::num = 0;

void (Enemy::* Enemy::activeTable[])() = {
	&Enemy::Access,		 //—£’E
	&Enemy::Shoot,		 //ËŒ‚
	&Enemy::Elimination //—£’E
};

void	Enemy::Timeout() {
	Sleep(1 * 1000);
	(this->*activeTable[num])();
}
void Enemy::Update() {
	Timeout();
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
	num++;
}