#pragma once
#include "Person.h"
#include<string>
using namespace std;
class PokerPlayer :
	virtual public Person
{
	public:
	PokerPlayer(string f, string l);
	PokerPlayer(Person& person);
	PokerPlayer();
	virtual ~PokerPlayer();
	int Draw() const;
};

