// Course: Programming technologies (C Plus Plus)
// Lab 2. References.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: Program entry point.

#include "reference.h"
#include <iostream>
using namespace std;

int main(){
	int * a = (int*)malloc(sizeof(int)); *a = 2;
	int * b = (int*)malloc(sizeof(int)); *b = 5;
	MaxModul(a, b);
	cout << *a << " " << *b << endl;
	//
	int temp1, temp2;
	int & ar = temp1 = 2;
	int & br = temp2 = 5;
	MaxModul(ar, br);
	cout << ar << " " << br << endl;
	//
	double * c = (double*)malloc(sizeof(double)); *c = 2;
	Inverse(c);
	cout << *c << endl;
	double temp3;
	double & cr = temp3 = 2;
	Inverse(cr);
	cout << cr << endl;
	//
	circle * d = (circle*)malloc(sizeof(circle)); 
	d -> x = 0; d -> y = 0; d -> r = 4; *c = 2;
	Reduce(d, c);
	cout << d -> r << endl;
	//
	circle temp4; temp4.x = temp4.y = 0; temp4.r = 4;
	circle & e = temp4; cr = 2;
	Reduce(e, cr);
	cout << e.r << endl;
	//
	mtrx * f = (mtrx*)malloc(sizeof(mtrx));
	f->data[0][0] = 0; f->data[0][1] = 0; f->data[0][2] = 0;
	f->data[1][0] = 1; f->data[1][1] = 1; f->data[1][2] = 1;
	f->data[2][0] = 2; f->data[2][1] = 2; f->data[2][2] = 2;
	*a = 0; *b = 2;
	Swap(f, a, b);
	print(f);
	//
	mtrx g; 
	g.data[0][0] = 0; g.data[0][1] = 0; g.data[0][2] = 0;
	g.data[1][0] = 1; g.data[1][1] = 1; g.data[1][2] = 1;
	g.data[2][0] = 2; g.data[2][1] = 2; g.data[2][3] = 2;
	mtrx & gr = g; ar = 0; br = 2;
	Swap(gr, ar, br);
	print(gr);
	return 0;
}