#pragma once
#include "sParallelograms.h"

class Rectangles : public Parallelogram // Прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
{
	public:
		Rectangles(int sideA = 0, int sideB = 0);
};
