// Programming Exercise 14.4
//            Person
//           /      \
// Gunslinger        PokerPlayer
//           \      /
//            BadDude

#include <iostream>
#include"tvfm.h"



int main() {
	
	using std::cout;
	Tv s42;
	cout << "Initial setting for 42\" Tv:\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\nAdjusted settings for 42\"Tv:\n";
	s42.settings();

	Remote grey;
	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\n42\" settings after using remote:\n";
	s42.settings();
	grey.set_remote_mode(s42);
	grey.show_remote_mode();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\n58\" settings:\n";
	s58.settings();

	s58.show_remote_mode(grey);

	return 0;


}
	
