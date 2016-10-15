// Course: Programming technologies (C Plus Plus)
// Lab 4. Classes.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: Menu source code file.

#include "Menu.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include "PrintWriter.h"

void Menu::decimal() {
	printf("\n");
	printf("Enter a value.\n");
	char * value = new char[256]; 
	int err; char c = 0;
	do {
		scanf("%s", value);
		try {
			throw atoi(value); 
		}
		catch (int res) {
			if (res != 0) {
				err = pw.print(res);
				if (err > 0) cout << "Succesfully wrote." << endl;
				else pw.ShowError(err);
				delete(value); return;
			} else {
				printf("%s\n", "You entered an incorrect value or value contains zero. Is value a zero?(Y/n)");
				c = getch();
				if (c == 13 || c == 'y' || c == 'Y' || c == 'í' || c == 'Í') {
					err = pw.print(res);
					if (err > 0) cout << "Succesfully wrote." << endl;
					else pw.ShowError(err);
					delete(value); return;
				} else printf("Please try again.\n");
			}
		}
	} while (c != 13 && c != 'y' && c != 'Y');
	delete(value);
}
void Menu::floatPoint() {
	printf("\n");
	printf("Enter a value.\n");
	char * value = new char[256]; 
	int err; char c;
	do {
		scanf("%s", value);
		try {
			throw atof(value); 
		}
		catch (double res) {
			if (res != 0L) {
				err = pw.print(res); pw.Flush();
				if (err > 0) cout << "Succesfully wrote." << endl;
				else pw.ShowError(err);
				delete(value); return;
			}
			else {
				printf("%s\n", "You entered an incorrect value or value contains zero. Is value a zero?(Y/n)");
				c = getch();
				if (c == 13 || c == 'y' || c == 'Y') {  
					err = pw.print(res); pw.Flush();
					if (err > 0) cout << "Succesfully wrote." << endl;
					else pw.ShowError(err);
					delete(value); return;
				}
				else printf("Please try again.\n");
			}
		}
	} while (c != 13 && c != 'y' && c != 'Y' && c != 'í' && c != 'Í');
	delete(value);
}
void Menu::write() {
	char c;
	printf("\n");
	printf("1. Write an integer.\n");
	printf("2. Write the float-point number.\n");
	printf("3. Write a string.\n");
	printf("0. Back to menu.\n");
	do {
		c = getch();
		switch(c) {
			case 49  : {decimal(); break;};
			case 50  : {floatPoint(); break;};
			case 51  : {
				printf("\n");
				printf("Please enter a string. Notice: less than 256 characters.\n");
				char * temp = new char[256]; 
				scanf("%255s", temp);
				int err = pw.print(temp); pw.Flush();
				delete(temp);
				if (err > 0) cout << "Succesfully wrote." << endl;
				else pw.ShowError(err);
				break;
			};
			case 97  : {decimal(); break;};
			case 98  : {floatPoint(); break;};
			case 99  : {
				printf("\n");
				printf("Please enter a string. Notice: less than 256 characters.\n");
				char * temp = new char[256]; 
				scanf("%255s", temp);
				int err = pw.print(temp); pw.Flush();
				delete(temp);
				if (err > 0) cout << "Succesfully wrote." << endl;
				else pw.ShowError(err);
				break;
			};
	    };
	} while (c != 48 && c != 49 && c != 50 && c != 51 && c != 96 && c != 97 && c != 98 && c != 99); 
}
Menu::Menu() {
	char c;
	printf("%s\n", "CLI for file Printwriter program. Author V.A. Trofimov.");
	do {
		printf("\n");
		printf("1. Assign and open a file.\n");
		printf("2. Show the file name and path.\n");
		printf("3. Show the file status.\n");
		printf("4. Close a file.\n");
		printf("5. Write something to file.\n");
		printf("0. Exit.\n");
		do {
			c = getch();
			switch(c) {
				case 49  : {openFile(); break;}
				case 50  : {getName(); break;}
				case 51  : {isOpen(); break;}
				case 52  : {closeFile(); break;}
				case 53  : {write(); break;}
				case 97  : {openFile(); break;}
				case 98  : {getName(); break;}
				case 99  : {isOpen(); break;}
				case 100 : {closeFile(); break;}
				case 101 : {write(); break;}
			};
		} while (c != 49 && c != 50 && c != 51 && c != 52 && c != 53 && c != 96 &&
				 c != 97 && c != 98 && c != 99 && c != 100 && c != 101 && c != 48 ); 
	} while (c != 48 && c != 96);
}
void Menu::openFile() {
	printf("\n");
	printf("Please enter the full path to the target file or just a filename. Notice: less than 256 characters.\n");
	char * temp = new char[256];
	scanf("%255s", temp);
	int err = pw.open(temp);
	delete(temp);
	if (err == 0) cout << endl << "File succesfully opened." << endl;
	else pw.ShowError(err);
}
void Menu::closeFile() {
	printf("\n");
	if (opened()) {
		int err = pw.close();
		if (err == 0) cout << "File succsesfully closed." << endl;
		else pw.ShowError(err);
	} else cout << "No File - no closing." << endl;
}
void Menu::getName() {
	printf("\n");
	cout << ((pw.getName().compare("") == 0) ? "File have not name or path." : pw.getName()) << endl;
}
void Menu::isOpen() {
	printf("\n");
	cout << ((pw.isOpen()) ? "File is open." : "File is not open.") << endl;
}
bool Menu::opened() {
	return pw.isOpen();
}