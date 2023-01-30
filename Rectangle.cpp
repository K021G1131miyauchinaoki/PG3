#include "Rectangle.h"
#include<stdio.h>

void Rectangle::Size() {
	printf("•‚Í%f‚‚³‚Í%f\n", w,h);
	area = (w * h);
}

void Rectangle::Draw() {
	printf("‹éŒ`‚Ì–ÊÏ‚Í%f\n", area);
}