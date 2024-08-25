#pragma once
#include<iostream>
class Tv;

class Remote{
	public:
		enum State {Off,On};
		enum { MinVal, MaxVal = 20 };
		enum {Antenna,Cable};
		enum {TV,DVD};
		static enum{ Normal, Interactive };
private:
	int mode;
	int remote_mode;
	
public:
	friend class Tv;
	Remote(int m = TV):mode(m) {}
	bool volup(Tv &t);
	bool voldown(Tv &t);
	void onoff(Tv &t);
	void chanup(Tv &t);
	void chandown(Tv &t);
	void set_mode(Tv &t);
	void set_input(Tv &t);
	void set_chan(Tv &t, int c);
	void set_remote_mode(Tv &t);
	void show_remote_mode()const;
};

class Tv {
	public:
		friend class Remote;
		friend void Remote::set_chan(Tv &t, int c);
		enum State { Off, On };
		enum { MinVal, MaxVal = 20 };
		enum { Antenna, Cable };
		enum { TV, DVD };
	Tv(int s=Off,int mc=125):state(s),volume(5),
		maxchannel(mc),channel(2),mode(Cable),input(TV){}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings()const;
	void set_remote_mode(Remote& r);
	void show_remote_mode(Remote& r) const;
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};

inline bool Remote::volup(Tv &t) { return t.volup(); }
inline bool Remote::voldown(Tv &t) { return t.voldown(); }
inline void Remote::onoff(Tv &t) { t.onoff(); }
inline void Remote::chanup(Tv &t) { t.chanup(); }
inline void Remote::chandown(Tv &t) { t.chandown(); }
inline void Remote::set_mode(Tv &t) { t.set_mode(); }
inline void Remote::set_input(Tv &t) { t.set_input(); }
inline void Remote::set_chan(Tv &t,int c) { t.channel = c; }

inline void Tv::set_remote_mode(Remote& r) {
	r.set_remote_mode(*this);
}

inline void Tv::show_remote_mode(Remote& r) const {
	std::cout << "Remote mode = "
		<< (r.remote_mode == Remote::Normal ? "Normal" : "Interactive")
		<< std::endl;
}