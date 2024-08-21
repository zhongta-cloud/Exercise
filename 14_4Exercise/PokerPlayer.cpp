#include "PokerPlayer.h"
#include<string>
#include <stdlib.h>
#include <time.h> 
using namespace std;
PokerPlayer::PokerPlayer(string f, string l) :Person(f, l) {};

PokerPlayer::PokerPlayer(Person& p) :Person(p) {};

PokerPlayer::PokerPlayer() :Person() {};

PokerPlayer::~PokerPlayer() {};

int PokerPlayer::Draw() const {
	srand((unsigned)time(NULL));
	return rand() % 52+1;
}
