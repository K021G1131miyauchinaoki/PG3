#pragma once
#include<stdio.h>
#include<time.h>
#include<Windows.h>

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

	static int GetNum() { return num; }
private:
	static void (Enemy::* activeTable[])();
	void	Timeout();
	static int num;
};


