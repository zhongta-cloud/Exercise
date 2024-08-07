#include "Cow.h"
#include<string>
#include<iostream>
using namespace std;
Cow::Cow() {
	hobby = nullptr;
	weight = 0.0;
};
Cow::Cow(const char * nm, const char *ho, double wt) {
	strncpy_s(name, nm, 19);
	int len = strlen(ho);
	hobby = new char[len + 1];
	strcpy_s(hobby,len+1,ho);
	weight = wt;
}
Cow::Cow(const Cow & c ) {
	strncpy_s(name, c.name, 19);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strncpy_s(hobby, len+1, c.hobby, len+1);
	weight = c.weight;
};
Cow::~Cow() {
	delete[] hobby;
};
Cow & Cow::operator=(const Cow &c) {
	if (&c == this)
		return *this;
	strncpy_s(name, c.name, 19);
	delete[] hobby;
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strncpy_s(hobby, len+1, c.hobby, len+1);
	weight = c.weight;
	return *this;
}
void Cow::ShowCow() const {
	cout << "name:" << name << endl;
	cout << "hobby:" << hobby << endl;
	cout << "weight:" << weight << endl;

}