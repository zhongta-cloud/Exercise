#include "Worker.h"
#include<string>
#include<iostream>
using namespace std;
Worker::Worker(const std::string& s, long n) :fullname(s), id(n){};

Worker::Worker():fullname("no one"),id(0L){};

Worker::~Worker() {};

void Worker::Set() {
	cout << "Enter worker's name:";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Worker::Show()const {
	cout << "Name: " << fullname << "\n";
	cout << "Employee ID: " << id << endl;
}