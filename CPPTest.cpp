// CPPTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<fstream>
#include <iostream>
#include<string>
#include<cstring>
#include<cmath>

#include"Vector.h"
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace VECTOR;
using namespace std;
int main() {
	srand(time(0));

	fstream out("1.txt");
	if (!out.is_open()) {
		cout << "can't open the file." << endl;
		exit(0);
	}
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps=0;
	double target;
	double dstep;
	cout << "Enter target distance and steps:";
	cin >> target;
	cin >> dstep;
	while (result.magval() < target) {
		out << steps << ":" << result<<endl;
		direction = rand() % 360;
		step.reset(dstep, direction, Vector::POL);
		result = result + step;
		steps++;
	}

	out << "After " << steps << " steps,the subject has the following location:" << endl;
	result.rect_mode();
	out << result << endl;
	out << "or" << endl;
	result.polor_mode();
	out << result << endl;
	out << "Average outward distance per step = " << result.magval() / steps;
}