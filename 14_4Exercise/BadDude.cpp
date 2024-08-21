#include "BadDude.h"
#include<string>
#include<iostream>
using namespace std;
BadDude::BadDude(string f, string l, int n, double d)
	:Person(f,l),Gunslinger(f, l, n, d) {};

BadDude::BadDude():Person(),Gunslinger() {};

double BadDude::Gdraw() {
	return Gunslinger::Draw();
}

int BadDude::Cdraw() {
	return PokerPlayer::Draw();
}

void BadDude::Show() {
	Gunslinger::Show();
	cout << "Bad dude's draw time: " << Gdraw() << endl;
	cout << "The next card drawn:" << Cdraw() << endl;

}