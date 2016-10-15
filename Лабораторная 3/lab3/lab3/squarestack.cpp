// Course: Programming technologies (C Plus Plus) 
// Lab 3. Overload. 
// Student: Trofimov V.A. Group: 1511 
// Teacher: Povishev V.V. 
// Created 21.02.2013 Modified: 22.02.2013 
// Description: Squarestack source code file.

#include "squarestack.h"

bool operator == (const Square & left, const Square & right) {
	return left.size == right.size;
}
bool operator != (const Square & left, const Square & right) {
	return left.size != right.size;
}
bool operator < (const Square & left, const Square & right) {
	return left.size <= right.size;
}
bool operator > (const Square & left, const Square & right) {
	return left.size > right.size;
}
Square operator * (Square & left, const double & right) {
	left.size *= right;
	return left;
}
Square operator * (const double & left, Square & right) {
	right.size *= left;
	return right;
}
Square operator + (Square & left, const Vector & right) {
	left.x += right.x;
	left.y += right.y;
	return left;
}
Square operator + (const Vector & left, Square & right) {
	right.x += left.x;
	right.y += left.y;
	return right;
}
Stack::Stack(int a) {
	capacity = a > 0 ? a : 1;
	size = 0;
	last = NULL;
}
bool Stack::isEmpty() {
	return size == 0;
}
bool Stack::isFull() {
	return size == capacity;
}
int Stack::GetSize() {
	return size;
}
int Stack::SetCapacity(const int a) {
	return a > 0 ? 0 == (capacity = a) : -1;
}
int Stack::Push(const int a) {
	if (size == capacity) return -1;
	if (last == NULL) {
		data * curr = (data*)malloc(sizeof(data));
		curr -> next = NULL; curr ->value = a;
		last = curr; size = 1; return 0; 
	} else {
		if (capacity - size > 0) {
			data * curr = (data*)malloc(sizeof(data));
			curr -> next = last; last = curr; 
			curr -> value = a; size++; return 0; 
		} return -1;
	}
}
int Stack::Pop() {
	if (size == 0) {
		std::cout << "Stack is empty. Last value is not an element.\n"; 
		return 0;
	} else {
		data * curr = last;
		last = curr -> next; size--;
		int res = curr -> value; free(curr);
		return res;
	}
}
void Stack::Print() {
	if (size == 0) std::cout << "Stack is empty\n"; 
	else {
		data * curr; 
		curr = last;
		do {
			std::cout << curr -> value << " ";
			curr = curr -> next;
		} while (curr != NULL); 
	}
}
int operator >> (Stack & n, int & value) {
	value = n.Pop();
	return value;
}
int operator << (Stack & n, const int value) {
	return n.Push(value);
}