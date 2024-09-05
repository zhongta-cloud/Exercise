
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("test.txt", ios_base::out);
	cout << "input text:";
	char buffer[255];
	while (cin)
	{
		cin.getline(buffer, 255);
		fout << buffer<<endl;
	}

	fout.close();
}
