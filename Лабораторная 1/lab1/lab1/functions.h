// Course: Programming technologies (C Plus Plus)
// Lab 1. Namespaces.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: Functions header file.

#pragma once
#include "declarations.h"

namespace matrix {
	mtrx fill(mtrx & a, double value);
	mtrx cpy(const mtrx & a);
	mtrx mul(const mtrx & a, double b);
	mtrx mul(const mtrx & a, const mtrx & b); 
	int print(const mtrx & a);
	int read(mtrx & a);
}