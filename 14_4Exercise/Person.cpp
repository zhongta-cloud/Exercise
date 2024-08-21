#include "Person.h"
#include<string>
#include<iostream>
using namespace std;
Person::Person(const char *f, const char *l) {
	firstname_ = f;
	lastname_ = l;
}
Person::Person(string f, string l) {
	firstname_ = f;
	lastname_ = l;
}
Person::Person() :firstname_("no one"), lastname_("no one") {}

Person::~Person() {};
void Person::Show()const {

	Data();
};

void Person::Set() {
	Get();
}

void Person::Get() {
	cout << "input first name: ";
	getline(cin, firstname_);
	cout << "input last name:";
	getline(cin, lastname_);
}

void Person::Data() const {
	cout << "firstname: " << firstname_ << endl;
	cout << "lastname:" << lastname_ << endl;
}
