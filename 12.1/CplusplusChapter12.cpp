// CplusplusChapter12.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Cow.h"

int main()
{
	Cow c1;
	Cow c2("Zhang", "Swimming", 30);
	c2.ShowCow();
	c1 = c2;
	c1.ShowCow();
	Cow c3("Wang", "Football", 50);
	Cow c4(c3);
	c3.ShowCow();
	c4.ShowCow();
	
}

