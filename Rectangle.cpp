#include "Rectangle.h"
#include<stdio.h>

void Rectangle::Size() {
	printf("����%f������%f\n", w,h);
	area = (w * h);
}

void Rectangle::Draw() {
	printf("��`�̖ʐς�%f\n", area);
}