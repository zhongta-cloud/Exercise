#include "Wine.h"
#include"Pair.h"
#include<iostream>
#include<valarray>
using namespace std;
Wine::Wine(const char *l, int y, const int yr[], const int bot[]) :string(l), number(y)
, PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}



void Wine::Show() {
	cout << "Wine: " << (const string &)*this << endl;
	cout << "\tYear" << "\tBottles" << endl;
	for (int i = 0; i < number; i++) {
		cout <<"\t"<<PairArray::first()[i] << "\t" << PairArray::second()[i] << endl;
	}
}

Wine::Wine(const char *l, int y) :string(l),number(y),PairArray(ArrayInt(y),ArrayInt(y)) {}

void Wine::GetBottles() {
	cout <<"Enter " <<(const string&)*this<<" Data for " <<number<<" year(s):"<< endl;
	for (int i = 0; i < number; i++) {
		cout << "Enter year: ";
		cin >> PairArray::first()[i];
		cout << "Enter bottles for that year :";
		cin >> PairArray::second()[i];

	}

}

int Wine::sum() const{
	
		int sum = PairArray::second().sum();
	return sum;
}

string Wine::Label() const{
	return (const string &)*this;
}