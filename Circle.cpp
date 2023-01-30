#include "Circle.h"
#include<stdio.h>

void Circle::Size() {
	printf("îºåaÇÕ%f\n", r);
	area = (r * r) * M_PI;
}

void Circle::Draw() {
	printf("â~ÇÃñ êœÇÕ%f\n", area);
}