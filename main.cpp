#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include"IShape.h"
#include"Circle.h"
#include"Rectangle.h"

int	main() {
	
	IShape* iShape[2];

	iShape[0] = new	Circle;
	iShape[1] = new	Rectangle;

	for (int i = 0; i < 2; i++)
	{
		iShape[i]->Size();
		iShape[i]->Draw();
	}

	for (int i = 0; i < 2; i++)
	{
		delete	iShape[i];
	}
	system("Pause");

	return	0;
}