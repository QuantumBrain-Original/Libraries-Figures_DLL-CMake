#include "sRectangularTriangles.h"

RectangularTriangle::RectangularTriangle(int sideA, int sideB, int sideC, int angleA, int angleB) :
	Triangle(sideA, sideB, sideC, angleA, angleB, 90)
{
	sides_count = 3;
}