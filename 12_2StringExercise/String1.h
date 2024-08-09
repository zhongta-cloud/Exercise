#pragma once
#include<iostream>
using namespace std;
class String1
{
private:
	char *str;
	int len;
public:
	String1();
	String1(const char *s);
	String1(const String1 &str);
	~String1();
	String1 operator =(const String1 &s2);
	char & operator[](int i);
	const char & operator[](int i) const;
	void StringLow();
	void StringUp();
	int Has(char c);
	friend ostream & operator <<(ostream &out,String1 & str);
	friend istream & operator>>(istream & in, String1 &str);
	friend bool operator==(const String1 &s1,const String1 & s2);
	friend String1 operator+(const String1 &st1, const String1 &st2);
	friend String1 operator+(const char *, const String1 &);
	friend String1 operator+(const String1 &, const char *);
};

