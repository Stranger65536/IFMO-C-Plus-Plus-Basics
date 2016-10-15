// Course: Programming technologies (C Plus Plus)
// Lab 2. References.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: Reference source code file.

#include "reference.h"
#include <stdio.h>

void MaxModul(int * a, int * b){
	*a > *b ? *a %= *b : *b %= *a;
}
void MaxModul(int & a, int & b){
	a > b ? a %= b : b %= a;
}
void Inverse(double * a){
	*a = 1 / *a;
}
void Inverse(double & a){
	a = 1 / a;
}
void Reduce(circle * a, double * b){
	a -> r -= *b;
	a -> r = a -> r < 0 ? 0 : a -> r;
}
void Reduce(circle& a, double& b){
	a.r -= b;
	a.r = a.r < 0 ? 0 : a.r; 
}
void Swap(mtrx * a, int * b, int * c){
	double temp;
	for(int i = 0; i < 3; i++) {
		temp = a -> data[*b][i];
		a -> data[*b][i] = a -> data[*c][i];
		a -> data[*c][i] = temp; 
	}
}
void Swap(mtrx & a, int & b, int & c){
	double temp;
	for(int i = 0; i < 3; i++) {
		temp = a.data[b][i];
		a.data[b][i] = a.data[c][i];
		a.data[c][i] = temp;
	}
}
void print(mtrx *  a) {
	printf("\n%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf\n\n", 
		a->data[0][0], a->data[0][1], a->data[0][2],
		a->data[1][0], a->data[1][1], a->data[1][2],
		a->data[2][0], a->data[2][1], a->data[2][2]);
}
void print(mtrx &  a) {
	printf("\n%lf %lf %lf\n%lf %lf %lf\n%lf %lf %lf\n\n", 
		a.data[0][0], a.data[0][1], a.data[0][2],
		a.data[1][0], a.data[1][1], a.data[1][2],
		a.data[2][0], a.data[2][1], a.data[2][2]);
}