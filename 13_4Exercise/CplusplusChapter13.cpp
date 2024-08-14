// CplusplusChapter12.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Port.h"
#include"VintagePort.h"
using namespace std;
int main()
{
	VintagePort vp;
	vp.Show();
	VintagePort vp2("How are you", 20, "fine", 1988);
	vp2.Show();
	vp = vp2;
	vp.Show();
	cout << vp << endl;
}




