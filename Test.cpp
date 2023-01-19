#include "Test.h"
#include<stdio.h>

Test* Test::GetInstance() {
	static	Test instance;
	printf("インスタンスを取得しました");
	return &instance;
}
Test::Test() {}
Test::~Test() {}