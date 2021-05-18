#include<iostream>
using namespace std;

int main()
{
	int startingNumber, endingNumber;
	bool flag = true;
	cout << "Give the Starting number : ";
	cin >> startingNumber;
	cout << "Give the Ending Number : ";
	cin >> endingNumber;
	for (int i = startingNumber; i <= endingNumber; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag == true)
		{
			cout << i << " ";
		}
		else
		{
			flag = true;
		}
	}
	return 0;
}