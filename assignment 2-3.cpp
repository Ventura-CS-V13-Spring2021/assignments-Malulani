#include<iostream>
using namespace std;
int main()
{
	int character = 65;
	while (character != 90)
	{
		if (character % 5 == 0 && character != 65)
		{
			cout << endl;
		}
		cout << char(character) << " ";
		character++;
	}
	return 0;
}
