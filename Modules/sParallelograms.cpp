#include "sParallelograms.h"

Parallelogram::Parallelogram(int sideA, int sideB, int angleA, int angleB) :
	Quadrangle(sideA, sideB, sideA, sideB, angleA, angleB, angleA, angleB)
{
	sides_count = 4;
}
