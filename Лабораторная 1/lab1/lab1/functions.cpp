// Course: Programming technologies (C Plus Plus)
// Lab 1. Namespaces.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: Functions source code file.

#include "functions.h"
#include <stdio.h>
using namespace matrix;

mtrx matrix::fill(mtrx & a, double value) {
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			a.data[i][j] = value;
	return a;
}
mtrx matrix::cpy(const mtrx & a) {
	mtrx temp;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			temp.data[i][j] = a.data[i][j];
	return temp;
}
mtrx matrix::mul(const mtrx & a, double b) {
	mtrx temp = cpy(a);
	for (int i = 0; i < size; i++) 
		for (int j = 0; j < size; j++)
			temp.data[i][j] *= b;
	return temp;
}
mtrx matrix::mul(const mtrx & a, const mtrx & b) {
	mtrx temp; fill(temp, 0);
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			for (int k = 0; k < size; k++)
				temp.data[i][j] += a.data[i][k] * b.data[k][j];
	return temp;
}
int matrix::print(const mtrx & a) {
	return printf("\n%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf\n\n", 
		a.data[0][0], a.data[0][1], a.data[0][2],
		a.data[1][0], a.data[1][1], a.data[1][2],
		a.data[2][0], a.data[2][1], a.data[2][2]);
}
int matrix::read(mtrx & a) {
	return scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf", 
		&a.data[0][0], &a.data[0][1], &a.data[0][2],
		&a.data[1][0], &a.data[1][1], &a.data[1][2],
		&a.data[2][0], &a.data[2][1], &a.data[2][2]);
}