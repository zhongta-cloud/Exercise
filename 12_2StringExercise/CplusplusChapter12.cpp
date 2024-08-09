// CplusplusChapter12.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"String1.h"
using namespace std;
int main()
{
	


	String1 s1(" and I am a C++ student.");
	String1 s2 = "Please enter your name: ";
	String1 s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is  " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.StringUp();
	cout << "The string\n" << s2 << "\ncontains " << s2.Has('A')
		<< " 'A' characters in it.\n";
	s1 = "red";
	String1 rgb[3] = { String1(s1), String1("green"), String1("blue") };
	cout << "Enter the name of a primary coler for mixing light: ";
	String1 ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.StringLow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Try again!\n";
	}
	cout << "Bye\n";
	return 0;
	
}


