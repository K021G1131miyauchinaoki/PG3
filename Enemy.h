#pragma once
#include<stdio.h>

class Enemy
{
public:
	//�ڋ�
	void Access();
	//�ˌ�
	void Shoot();
	//���E
	void Elimination();
	//�X�V
	void Update();

private:
	static void (Enemy::* activeTable[])();
	int num = 0;
};


