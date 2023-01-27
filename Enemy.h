#pragma once
#include<stdio.h>

class Enemy
{
protected:
public:
	Enemy() {
		num++;
		printf("“G%d‚ªŒ»‚ê‚½\n", num);
	}
	~Enemy() {
		num--;
	}
	static int GetNum() { return num; }
	static void AllFallDown();
	static int num;
	static bool isDead;
private:
};


