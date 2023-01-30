#pragma once
#include"IShape.h"

#define M_PI        3.14

class Circle :public IShape
{
public:
	void Size()override;
	void Draw()override;

private:
	float r = 5.0f;
	float area;
};