#pragma once
#include<stdio.h>

class Enemy
{
protected:
public:
	Enemy() {
		num++;
		printf("�G%d�����ꂽ\n", num);
	}
	~Enemy() {
		num--;
	}
	static int num;
	static bool isDead;
private:
};


