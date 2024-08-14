#include "Cd.h"
#include<string>
#include<iostream>
using namespace std;
Cd::Cd() {
	performers[0] = 0;
	label[0] = 0;
	selections = 0;
	playtime = 0.0;
}
Cd::Cd(const char * s1,const char * s2, int n, double x) {
	strcpy_s(performers, 49, s1);
	performers[49] = 0;
	strcpy_s(label, 19, s2);
	label[19] = 0;
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd & d) {
	strcpy_s(performers, 50, d.performers);
	strcpy_s(label, 20, d.label);
	selections = d.selections;
	playtime = d.playtime;
}


void Cd::Report() const {
	cout << "performers:" << performers << endl;
	cout << "label:" << label << endl;
	cout << "selections:" << selections << endl;
	cout << "playtime:" << playtime << endl;

}

Cd & Cd::operator =(const Cd & d) {
	if (&d == this)
		return *this;
	strcpy_s(performers, 50, d.performers);
	strcpy_s(label, 20, d.label);
	selections = d.selections;
	playtime = d.playtime;

	return *this;
}

Cd::~Cd() {}

