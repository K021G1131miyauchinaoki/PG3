#include "Test.h"
#include<stdio.h>

Test* Test::GetInstance() {
	static	Test instance;
	printf("�C���X�^���X���擾���܂���");
	return &instance;
}
Test::Test() {}
Test::~Test() {}