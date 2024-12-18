#pragma once
#include "sFigures.h"

class Triangle : public Figure // фигуры с 3 углами
{
	protected:
		unsigned int a, b, c, A, B, C;
	public:
		void print_output() override;

		Triangle(int sideA = 0, int sideB = 0, int sideC = 0, int angleA = 0, int angleB = 0, int angleC = 0);
};
