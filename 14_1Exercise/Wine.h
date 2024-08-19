#pragma once
#include<string>
#include"Pair.h"
#include<valarray>
using namespace std;

class Wine
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	string label;
	int number;
	PairArray store;
public:

	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	void GetBottles();
	int sum();
	string Label() { return label; }
	void Show();
};

