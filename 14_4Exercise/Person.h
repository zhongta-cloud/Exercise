#pragma once
#include<string>
using namespace std;
class Person
{
	private:
		string firstname_;
		string lastname_;
	public:
		Person(const char *f, const char *l);
		Person(string f, string l);
		Person();
		virtual ~Person();
		virtual void Set();
		virtual void Show() const;
	protected:
		void Get();
		void Data() const;

};

