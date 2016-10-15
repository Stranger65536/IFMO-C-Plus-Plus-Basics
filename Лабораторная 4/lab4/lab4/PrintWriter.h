// Course: Programming technologies (C Plus Plus)
// Lab 4. Classes.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: PrintWriter header file.

#pragma once
#include <string>
using namespace std;

class PrintWriter {
private:
	 string filename;
	 bool opened;
	 FILE * file;
public:
	PrintWriter();
	PrintWriter(char * filename);
	int open(char * filename);
	int close();
	string getName();
	bool isOpen();
	void Flush();
	int print(char * input);
	int println(char * input);
	int print(char input);
	int println(char input);
	int print(unsigned char input);
	int println(unsigned char input);
	int print(int input);
	int println(int input);
	int print(unsigned int input);
	int println(unsigned int input);
	int print(short input);
	int println(short input);
	int print(unsigned short input);
	int println(unsigned short input);
	int print(long input);
	int println(long input);
	int print(unsigned long input);
	int println(unsigned long input);
	int print(long long input);
	int println(long long input);
	int print(unsigned long long input);
	int println(unsigned long long input);
	int print(float input);
	int println(float input);
	int print(double input);
	int println(double input);
	void ShowError(int ErrorCode);
};