#include "Classic.h"
#include"Cd.h"
#include<iostream>
#include<string>
using namespace std;
Classic::Classic(const char * pw,const char * s1, const char * s2,int n, double x):Cd(s1, s2, n, x){
	
	int len = strlen(pw);
	primary_work = new char[len + 1];
	strcpy_s(primary_work,len+1, pw);;
}
Classic::Classic(const Classic & c):Cd(c) {
	int len = strlen(c.primary_work);
	primary_work = new char[len + 1];
	strcpy_s(primary_work, len + 1, c.primary_work);;
}

Classic::Classic() : Cd() {
	primary_work = new char[1];
}
void Classic::Report() const {
	Cd::Report();
	cout << "primary work:" << primary_work << endl;
}

Classic & Classic::operator =(const Classic & d) {
	if (&d == this)
		return *this;
	Cd::operator=(d);
	delete[] primary_work;
	int len = strlen(d.primary_work);
	primary_work = new char[len + 1];
	strcpy_s(primary_work, len + 1, d.primary_work);
	return *this;
}

Classic::~Classic(){
	delete[] primary_work;
};