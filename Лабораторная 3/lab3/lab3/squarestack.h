// Course: Programming technologies (C Plus Plus) 
// Lab 3. Overload. 
// Student: Trofimov V.A. Group: 1511 
// Teacher: Povishev V.V. 
// Created 21.02.2013 Modified: 22.02.2013 
// Description: Squarestack header file.

#pragma once
#include <iostream>

class Vector {
public:
	double x, y;
};

class Square {
	friend bool operator == (const Square & left, const Square & right);
	friend bool operator != (const Square & left, const Square & right);
	friend bool operator < (const Square & left, const Square & right);
	friend bool operator > (const Square & left, const Square & right);
	friend Square operator * (Square & left, const double & right);
	friend Square operator * (const double & left, Square & right);
	friend Square operator + (Square & left, const Vector & right);
	friend Square operator + (const Vector & left, Square & right);
public:
	double x, y;
	double size;
	double angle;
};

class Stack {
	friend int operator >> (Stack & n, int & value);
	friend int operator << (Stack & n, const int value);
private:
	struct data {
		int value;
		data * next; 
	};
	int size;
	int capacity;
	data * last;
public:
	Stack(int capacity);
	bool isEmpty();
	bool isFull();
	int GetSize();
	int SetCapacity(const int a);
	int Push(const int a);
	int Pop();
	void Print();
};