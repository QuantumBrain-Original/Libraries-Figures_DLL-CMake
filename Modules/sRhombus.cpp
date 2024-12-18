#include "sRhombus.h"

Rhombus::Rhombus(int sideA, int angleA, int angleB) :
	Parallelogram(sideA, sideA, angleA, angleB)
{
	sides_count = 4;
}
