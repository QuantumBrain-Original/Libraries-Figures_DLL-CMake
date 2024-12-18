#include "sEquilateralTriangles.h"

EquilateralTriangle::EquilateralTriangle(int sideA) : Triangle(sideA, sideA, sideA, 60, 60, 60)
{
	sides_count = 3;
}
