#pragma once
#include "Person.h"
#include<string>
using namespace std;
class Gunslinger :
	virtual public Person
{
private:
	int num_gun_;
	double draw_time_;
public:
	Gunslinger(string f, string l, int n=0, double d=0.0);
	Gunslinger(Person & p,int n=0,double d=0.0);
	Gunslinger(int n,double d);
	Gunslinger();
	virtual ~Gunslinger();
	double Draw()const;
	virtual void Show()const;
	virtual void Set();
protected:
	void Get();
	void Data() const;
};

