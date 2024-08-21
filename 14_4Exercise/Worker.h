#pragma once
#include<string>
using namespace std;
class Worker
{
	private:
		string fullname;
		long id;
	public:
		Worker(const std::string& s, long n);
		Worker();
		~Worker();
		void Set();
		void Show() const;
};

