// Course: Programming technologies (C Plus Plus)
// Lab 4. Classes.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: PrintWriter source code file.

#include "PrintWriter.h"
#include <cstring>

PrintWriter::PrintWriter() {
	filename = "";
	opened = false;
	file = NULL;
}
PrintWriter::PrintWriter(char * filename) {
	this -> filename = filename;
	file = fopen(filename, "w");
	opened = file;
}
int PrintWriter::open(char * filename) {
	if (opened) {
		fflush(file);
		fclose(file);
	}
	this -> filename = filename;
	file = fopen(filename, "w");
	opened = file;
	if (opened) return 0;
	else return -1;
}
int PrintWriter::close() {
	filename = "";
	file = NULL;
	opened = false;
	if (opened) return fclose(file);
	else return 0;
}
string PrintWriter::getName() {
	return filename;
}
bool PrintWriter::isOpen() {
	return opened;
}
int PrintWriter::print(char * input) {
	if (this -> opened) return fprintf(file, "%s", input);
	else return -2;
}
int PrintWriter::println(char * input) {
	if (this -> opened) return fprintf(file, "%s\n", input);
	else return -2;
}
int PrintWriter::print(char input) {
	if (this -> opened) return fprintf(file, "%d", input);
	else return -2;
}
int PrintWriter::println(char input) {
	if (this -> opened) return fprintf(file, "%d\n", input);
	else return -2;
}
int PrintWriter::print(unsigned char input) {
	if (this -> opened) return fprintf(file, "%u", input);
	else return -2;
}
int PrintWriter::println(unsigned char input) {
	if (this -> opened) return fprintf(file, "%u\n", input);
	else return -2;
}
int PrintWriter::print(int input) {
	if (this -> opened) return fprintf(file, "%d", input);
	else return -2;
}
int PrintWriter::println(int input) {
	if (this -> opened) return fprintf(file, "%d\n", input);
	else return -2;
}
int PrintWriter::print(unsigned int input) {
	if (this -> opened) return fprintf(file, "%u", input);
	else return -2;
}
int PrintWriter::println(unsigned int input) {
	if (this -> opened) return fprintf(file, "%u\n", input);
	else return -2;
}
int PrintWriter::print(short input) {
	if (this -> opened) return fprintf(file, "%d", input);
	else return -2;
}
int PrintWriter::println(short input) {
	if (this -> opened) return fprintf(file, "%d\n", input);
	else return -2;
}
int PrintWriter::print(unsigned short input) {
	if (this -> opened) return fprintf(file, "%u", input);
	else return -2;
}
int PrintWriter::println(unsigned short input) {
	if (this -> opened) return fprintf(file, "%u\n", input);
	else return -2;
}
int PrintWriter::print(long input) {
	if (this -> opened) return fprintf(file, "%ld", input);
	else return -2;
}
int PrintWriter::println(long input) {
	if (this -> opened) return fprintf(file, "%ld\n", input);
	else return -2;
}
int PrintWriter::print(unsigned long input) {
	if (this -> opened) return fprintf(file, "%lu", input);
	else return -2;
}
int PrintWriter::println(unsigned long input) {
	if (this -> opened) return fprintf(file, "%lu\n", input);
	else return -2;
}
int PrintWriter::print(long long input) {
	if (this -> opened) return fprintf(file, "%lld", input);
	else return -2;
}
int PrintWriter::println(long long input) {
	if (this -> opened) return fprintf(file, "%lld\n", input);
	else return -2;
}
int PrintWriter::print(unsigned long long input) {
	if (this -> opened) return fprintf(file, "%llu", input);
	else return -2;
}
int PrintWriter::println(unsigned long long input) {
	if (this -> opened) return fprintf(file, "%llu\n", input);
	else return -2;
}
int PrintWriter::print(float input) {
	if (this -> opened) return fprintf(file, "%f", input);
	else return -2;
}
int PrintWriter::println(float input) {
	if (this -> opened) return fprintf(file, "%f\n", input);
	else return -2;
}
int PrintWriter::print(double input) {
	if (this -> opened) return fprintf(file, "%lf", input);
	else return -2;
}
int PrintWriter::println(double input) {
	if (this -> opened) return fprintf(file, "%lf\n", input);
	else return -2;
}
void PrintWriter::ShowError(int ErrorCode) {
	if (ErrorCode == -1) printf("%s\n", "File could not be created.");
	else if (ErrorCode == -2) printf("%s\n", "There is no file to write in.");
	else if (ErrorCode == 0) printf("%s\n", "This is not an error.");
	else if (ErrorCode < 0) printf("%s\n", "Error while writing.");
}
void PrintWriter::Flush() {
	fflush(file);
}