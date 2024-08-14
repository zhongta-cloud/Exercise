#pragma once
#include "Cd.h"
class Classic :
	public Cd
{
private:
	char * primary_work;
public:
	Classic(const char * pw,const char * s1, const char * s2,int n, double x);
	Classic(const Classic & c);
	Classic();
	virtual ~Classic();
	virtual void Report() const;
	Classic &operator =(const Classic & d);
};

