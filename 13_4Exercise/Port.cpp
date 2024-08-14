#include "Port.h"
#include<iostream>
#include<string>
using namespace std;
Port::Port(const char * br, const char * st, int b) {
	int len = strlen(br);
	brand = new char[len + 1];
	strcpy_s(brand, len + 1, br);
	strcpy_s(style, 20, st);
	bottles = b;
}

Port::Port(const Port &p) {
	int len = strlen(p.brand);
	brand = new char[len + 1];
	strcpy_s(brand, len + 1, p.brand);
	strcpy_s(style, 20, p.style);
	bottles = p.bottles;
}
Port & Port::operator =(const Port & p) {
	if (this==&p)
		return *this;
	delete[] brand;
	int len = strlen(p.brand);
	brand = new char[len + 1];
	strcpy_s(brand, len + 1, p.brand);
	strcpy_s(style, 20, p.style);
	bottles = p.bottles;
	return *this;
}

Port & Port::operator +=(int b) {
	bottles += b;
	return *this;

}
Port & Port::operator -=(int b) {
	bottles -= b;
	return *this;
}
void Port::Show()const {
	cout << "Brand:" << brand<<endl;
	cout << "Kind:" << style << endl;
	cout << "Bottles:" << bottles << endl;
}

 ostream & operator <<(ostream & os, const Port & p) {
	 os << p.brand << "," << p.style << "," << p.bottles;
	 return os;
}