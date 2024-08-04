#include "Vector.h"
#include<cmath>
#include<iostream>
using namespace std;
namespace VECTOR {
	void Vector::set_mag() {
		mag = sqrt(x*x + y * y);
	}
	void  Vector::set_ang() {
		if (x < 1e-10 || y < 1e-10)
			ang = 0;
		else
			ang = atan2(y, x);
	}
	void Vector::set_x() {
		x = mag * cos(ang);
	}
	void Vector::set_y() {
		y = mag * sin(ang);
	}
	Vector::Vector() {
		x = y = mag = ang = 0.0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form) {
		mode = form;
		if (form == RECT) {
			x = n1;
			y = n2;
			set_mag();
			set_ang();

		}
		else if (form == POL) {
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else {
			cout << "Incorrect 3rd argument to Vector()" << endl;
			cout << "vector set to 0" << endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}
	void Vector::reset(double n1, double n2, Mode form) {
		mode = form;
		if (form == RECT) {
			x = n1;
			y = n2;
			set_mag();
			set_ang();

		}
		else if (form == POL) {
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else {
			cout << "Incorrect 3rd argument to Vector()" << endl;
			cout << "vector set to 0" << endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}
	Vector::~Vector() {}
	void Vector::polor_mode() {
		mode = POL;
	}
	void Vector::rect_mode() {
		mode = RECT;
	}
	Vector Vector::operator +(const Vector &b) const {
		return Vector(x + b.x, y+ b.y);
	}
	Vector Vector::operator -(const Vector &b) const {
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator *(double n) const {
		return Vector(x*n, y*n);
	}
	Vector operator*(double n, const Vector &a) {
		return a * n;
	}
	ostream & operator <<(std::ostream &os, const Vector &v) {
		if (v.mode == Vector::RECT) {
			os << "(x,y)=(" << v.x << "," << v.y << ")";
		}
		else if (v.mode == Vector::POL) {
			os << "(m,a)=(" << v.mag << "," << v.ang << ")";
		}
		else {
			os << "Vector object mode is invalid";
		}

		return os;
	}
}
