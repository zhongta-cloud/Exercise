#include "Gunslinger.h"
#include<iostream>
#include<string>
using namespace std;
Gunslinger::Gunslinger(string f, string l, int n, double d)
	:Person(f, l), num_gun_(n), draw_time_(d) {};

Gunslinger::Gunslinger(Person & p, int n, double d)
	:Person(p), num_gun_(n), draw_time_(d) {};
	
Gunslinger::Gunslinger(int n, double d)
	:Person(), num_gun_(n), draw_time_(d) {};

Gunslinger::Gunslinger() :Person(), num_gun_(0), draw_time_(0.0) {};

Gunslinger::~Gunslinger() {};

double Gunslinger::Draw()const {
	return draw_time_;
}

void Gunslinger::Show() const{
	Data();
}

void Gunslinger::Set() {
	Get();
}

void Gunslinger::Get() {
	Person::Get();
	cout << "input Draw time:";
	cin >> draw_time_;

	cout << "input number of gun:";
	cin >> num_gun_;

	while (cin.get() != '\n')
		continue;

}

void Gunslinger::Data() const {
	Person::Data();
	cout << "Draw time: " << draw_time_ << endl;
	cout << "Number of gun: " << num_gun_ << endl;
}
