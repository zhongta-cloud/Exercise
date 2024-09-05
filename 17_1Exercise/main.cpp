
#include <iostream>

using namespace std;
int main()
{
	cout << "input the string:" << endl;
	char ch;
	int count = 0;
	while (cin.peek() != '#') {
		cin.get(ch);
		count++;
	}

	cout << "the count is " << count << endl;
}
