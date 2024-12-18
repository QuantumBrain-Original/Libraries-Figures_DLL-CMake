#include <iostream>
#include "sTriangles.h"

void Triangle::print_output() //override
{
	if (sides_count == 3)
	{
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
	}
}

Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) :
	a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC)
{
	sides_count = 3;
}