// CplusplusChapter12.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Cd.h"
#include"Classic.h"
using namespace std;
void Bravo(const Cd & disk);
int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flag,Fantasia in C", "Alfred Breneel", "Philips", 2, 57.17);
	Cd *pcd = &c1;
	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();

	cout << "Using type cd * pointer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "Tesing assignment: ";
	Classic copy;
	copy = c2;
	copy.Report();

	return 0;


}

void Bravo(const Cd & disk) {
	disk.Report();
}


