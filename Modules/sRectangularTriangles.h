#pragma once
#include "sTriangles.h"

class RectangularTriangle : public Triangle // Прямоугольный треугольник (угол C всегда равен 90)
{
	public:
		RectangularTriangle(int sideA = 0, int sideB = 0, int sideC = 0, int angleA = 0, int angleB = 0);
};
