#include "Wine.h"
#include"Pair.h"
#include<iostream>
#include<valarray>
using namespace std;
Wine::Wine(const char *l, int y, const int yr[], const int bot[]) :label(l), number(y)
,store(ArrayInt(yr,y),ArrayInt(bot,y)){}



void Wine::Show() {
	cout << "Wine: " << label << endl;
	cout << "\tYear" << "\tBottles" << endl;
	for (int i = 0; i < number; i++) {
		cout <<"\t"<<store.first()[i] << "\t" << store.second()[i] << endl;
	}
}

Wine::Wine(const char *l, int y) :label(l), number(y),store(ArrayInt(y),ArrayInt(y)) {}

void Wine::GetBottles() {
	cout <<"Enter " <<label<<" Data for " <<number<<" year(s):"<< endl;
	for (int i = 0; i < number; i++) {
		cout << "Enter year: ";
		cin >>store.first()[i];
		cout << "Enter bottles for that year :";
		cin >> store.second()[i];

	}

}

int Wine::sum() {
	int sum = 0;
	for (int i = 0; i < number; i++) {
		sum += store.second()[i];
	}

	return sum;
}