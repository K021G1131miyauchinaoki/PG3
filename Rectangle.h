#pragma once
#include"IShape.h"

class Rectangle:public IShape
{
public:
	void Size()override;
	void Draw()override;
private:
	float w = 5.0f;
	float h = 6.0f;
	float area;
};

