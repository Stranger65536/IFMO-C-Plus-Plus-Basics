// Course: Programming technologies (C Plus Plus)
// Lab 1. Namespaces.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: Program entry point.

#include "functions.h"
using namespace matrix;

int main() {
	mtrx a, b, c;
	read(a);
	read(b);
	c = mul(a, b);
	print(c);
	c = mul(c, 2);
	print(c);
	return 0;
}