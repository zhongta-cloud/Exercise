#pragma once
#include<string>
#include"Pair.h"
#include<valarray>
using namespace std;

class Wine:private string,private Pair<valarray<int>,valarray<int>>
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	int number;
public:

	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	void GetBottles();
	int sum()const;
	string Label()const;
	void Show();
};

