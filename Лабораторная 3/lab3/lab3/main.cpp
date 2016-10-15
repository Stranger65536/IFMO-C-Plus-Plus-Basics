// Course: Programming technologies (C Plus Plus) 
// Lab 3. Overload. 
// Student: Trofimov V.A. Group: 1511 
// Teacher: Povishev V.V. 
// Created 21.02.2013 Modified: 22.02.2013 
// Description: Program entry point.

#include "squarestack.h"
#include <iostream>
using namespace std;

int main() {
	Square a, b;
	a.x = 0; a.y = 0; a.size = 2;
	a.angle = 0;
	b.x = 2; b.y = 2; b.size = 2;
	b.angle = 120;
	cout << operator == (a, b) << endl;
	operator * (a, 2);
	cout << a.size << endl;
	Vector c;
	c.x = 2; c.y = 2;
	b = b + c;
	cout << b.x << " " << b.y << endl;
	//
	Stack stack(3);
	stack.Push(1);
	stack << 2;
	operator << (stack, 3);
	stack.Print();
	int n;
	stack >> n;
	cout << n << " ";
	cout << stack.Pop() << " ";
	cout << stack.Pop();
	return 0;
}