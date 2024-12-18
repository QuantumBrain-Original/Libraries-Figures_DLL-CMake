#pragma once
#include "sTriangles.h"

class IsoscelesTriangle : public Triangle // Равнобедренный треугольник (стороны a и c равны, углы A и C равны)
{
	public:
		IsoscelesTriangle(int sideA = 0, int sideB = 0, int angleA = 0, int angleB = 0);
};
