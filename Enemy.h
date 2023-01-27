#pragma once
#include<stdio.h>

class Enemy
{
public:
	//Ú‹ß
	void Access();
	//ËŒ‚
	void Shoot();
	//—£’E
	void Elimination();
	//XV
	void Update();

private:
	static void (Enemy::* activeTable[])();
	//static void Settimeout();
	int num = 0;
};


