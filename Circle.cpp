#include "Circle.h"
#include<stdio.h>

void Circle::Size() {
	printf("���a��%f\n", r);
	area = (r * r) * M_PI;
}

void Circle::Draw() {
	printf("�~�̖ʐς�%f\n", area);
}