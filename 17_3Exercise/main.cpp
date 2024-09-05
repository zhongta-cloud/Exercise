
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	cout << "input filename to read:";
	string str1;
	getline(cin,str1);
	cout << "input filename to write:";
	string str2;
	getline(cin, str2);
	ifstream fin;
	fin.open(str1.c_str(),ios_base::in);
	if (!fin.is_open())
		cout << "can't open the file" << str1<<endl;
	ofstream fout;
	fout.open(str2.c_str(),ios_base::out);
	if (!fout.is_open())
		cout << "can't open the file " << str2 << endl;

	char buffer[255];
	while (!fin.eof()) {
		fin.getline(buffer, 255);
		fout << buffer << endl;
	}

	fin.close();
	fout.close();
}
