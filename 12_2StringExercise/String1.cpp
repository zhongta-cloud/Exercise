#include "String1.h"
#include<ctype.h>
#include<string>
#include<iostream>
using namespace std;
String1::String1() {
	str = new char[1];
	str[0] = 0;
	len = 0;
}
String1::String1(const char *s) {
	len = strlen(s);	
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
}
String1::String1(const String1 &s) {
	len = s.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
}
String1::~String1() {
	delete[] str;
	len = 0;
}



String1 String1::operator =(const String1 &s2) {
	if (&s2 == this)
		return *this;
	delete[] str;
	len = s2.len;
	str = new char[len + 1];
	strncpy_s(str, len+1, s2.str, len+1);

	return *this;
}

char & String1::operator[](int i) {
	return str[i];
}
const char & String1::operator[](int i) const {
	return str[i];
}
void String1::StringLow() {
	for (int i = 0; i <len; i++) {
		str[i]=tolower(str[i]);
	}
}
void String1::StringUp() {
	for (int i = 0; i < len; i++) {
		str[i]=toupper(str[i]);
	}
}
int String1::Has(char c) {
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == c)
			count++;
	}

	return count;
}

ostream & operator << (ostream &out, String1 & str) {
	cout << str.str << endl;
	return out;
}

istream & operator>>(istream & in, String1 &str) {
	char temp[40];
	in.get(temp, 40);
	if (in)
		str = temp;
	while (in&&in.get() != '\n')
		continue;
	return in;
}

bool operator==(const String1 & s1,const String1 & s2) {
	return (strcmp(s1.str, s2.str)==0);
}

String1 operator+(const String1 &st1, const String1 &st2) {
	char *temp=new char[st1.len + st2.len + 1];
	strcpy_s(temp,st1.len+1,st1.str);
	strcat_s(temp, st1.len+st2.len+1, st2.str);
	String1 result=String1(temp);
	delete[] temp;
	cout << result << endl;
	return result;
}
String1 operator+(const char * s1, const String1 &s2) {
	String1 str1(s1);
	return (str1 + s2);
}
String1 operator+(const String1 & s1, const char * s2) {
	String1 str2(s2);
	return (s1 + str2);
}
