
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream fin1 = ifstream("test.txt", ios_base::in);
	ifstream fin2 = ifstream("test2.txt", ios_base::in);
	ofstream fout = ofstream("text3.txt", ios_base::out);
	if (!fin1.is_open()) {
		cout << "can't open the file test.txt" << endl; exit(-1);
	}
	if (!fin2.is_open()){
		cout << "can't open the file test2.txt" << endl; exit(-1);
	}		
	if (!fout.is_open()) {
		cout << "can't open the file test3.txt" << endl;
		exit(-1);
	}
	char buffer[255];
	while (fin1&&fin2) {
		fin1.getline(buffer, 255);
		fout << buffer << " ";
		fin2.getline(buffer, 255);
		fout << buffer <<endl;
	}

	while (fin1) {
		fin1.getline(buffer, 255);
		fout << buffer << endl;
	}

	while (fin2) {
		fin2.getline(buffer, 255);
		fout << buffer << endl;
	}

	fin1.close();
	fin2.close();
	fout.close();
	cout << "Done." << endl;
}
