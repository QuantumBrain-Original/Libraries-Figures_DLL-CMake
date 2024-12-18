#include "sIsoscelesTriangles.h"

IsoscelesTriangle::IsoscelesTriangle(int sideA, int sideB, int angleA, int angleB) :
	Triangle(sideA, sideB, sideA, angleA, angleB, angleA)
{
	sides_count = 3;
}
