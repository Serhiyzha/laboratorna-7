#include "pch.h"
#include "algebra.h"
#include <cmath>

algebra::algebra()
{
	a = 0; 
	b = 0; 
	c = 0; 
	d = 0;
}
void algebra::setValues(double aV, double bV, double cV, double dV)
{
	a = aV;
	b = bV;
	c = cV;
	d = dV;
}

double algebra::Root(double x)
{
	if (x < 0)
	{
		throw 1;
	}
	return sqrt(x);
}

double algebra::Result()
{
	double root = Root(41 - d);
	double znam = root - (b * a) + c;

	if (znam == 0)
	{
		throw 2;
	}
	return (a * b / 4 - 1) / znam;
}