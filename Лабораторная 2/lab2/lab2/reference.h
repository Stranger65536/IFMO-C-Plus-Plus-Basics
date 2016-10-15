// Course: Programming technologies (C Plus Plus)
// Lab 2. References.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: Reference header file.

#pragma once

class mtrx {
public: double data[3][3];
};

class circle {
public: double x, y, r;
};

void MaxModul(int * a, int * b);
void MaxModul(int & a, int & b);
void Inverse(double * a);
void Inverse(double & a);
void Reduce(circle * a, double * b);
void Reduce(circle & a, double & b);
void Swap(mtrx * a, int * b, int * c);
void Swap(mtrx & a, int & b, int & c);
void print(mtrx * a);
void print(mtrx & a);