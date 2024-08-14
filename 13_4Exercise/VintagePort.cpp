#include "VintagePort.h"
#include<iostream>
#include<string>
using namespace std;
VintagePort::VintagePort() :Port("none","vintage",0) {
	nickname = new char[1];
	nickname[0] = 0;
	year = 0;
}
VintagePort::VintagePort(const char *br, int b, const char *nn, int y):Port(br,"vintage",b) {
	int len=strlen(nn);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp):Port(vp) {
	int len = strlen(vp.nickname);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, vp.nickname);
	year = vp.year;
}
VintagePort & VintagePort::operator=(const VintagePort & vp) {
	if (&vp == this)
		return *this;
	Port::operator=(vp);
	delete[] nickname;
	int len = strlen(vp.nickname);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, vp.nickname);
	year = vp.year;
	return *this;

}
void VintagePort::Show() const {
	Port::Show();
	cout <<"nickname:"<<nickname << endl;
	cout << "year:" << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp) {
	os << (Port)vp;
	os << "," << vp.nickname << "," << vp.year << endl;
	return os;
}

