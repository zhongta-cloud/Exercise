#pragma once
#include "Port.h"
#include<iostream>
using namespace std;
class VintagePort :
	public Port
{
private:
	char * nickname;
	int year;
public:
	VintagePort();
	VintagePort(const char *br,int b,const char *nn,int y);
	VintagePort(const VintagePort & vp);
	~VintagePort() { delete[] nickname; }
	VintagePort & operator=(const VintagePort & vp);
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const VintagePort & vp);
};

