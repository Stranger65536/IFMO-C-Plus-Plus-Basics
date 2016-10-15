// Course: Programming technologies (C Plus Plus)
// Lab 4. Classes.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: Menu header file.

#pragma once
#include "PrintWriter.h"

class Menu {
private:
	PrintWriter pw;
	void decimal();
	void floatPoint();
	bool opened();
public:
	Menu();
	~Menu() {
	}
	void openFile();
	void closeFile();
	void getName();
	void isOpen();
	void write();
};