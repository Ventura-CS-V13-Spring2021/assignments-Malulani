#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	char selection;
	cout << "Enter your choice among A, B, C\n";
	cin >> selection;
	switch (selection)
	{
	case 'A':case 'a':
		cout << "Your choice is A\n";
		break;
	case 'B':case 'b':
		cout << "Your choice is B\n";
		break;
	case 'C':case 'c':
		cout << "Your choice is C\n";
		break;
	default:
		cout << "Not a good choice\n";
		break;
	}
	return 0;
}
