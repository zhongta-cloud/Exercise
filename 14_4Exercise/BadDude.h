#pragma once
#include"Gunslinger.h"
#include"PokerPlayer.h"
#include<string>
using namespace std;
class BadDude:public Gunslinger,public PokerPlayer
{
	public:
		BadDude(string f,string l,int n,double d);
		BadDude();
		double Gdraw();
		int Cdraw();
		virtual void Show();
};

