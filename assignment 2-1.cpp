#include<iostream>
using namespace std;
int main()
{
	int largest, num;
	cout << "Enter the first number : ";
	cin >> largest;
	cout << "Enter the second number : ";
	cin >> num;
	if (num > largest)
	{
		largest = num;
	}
	cout << "Enter the third number : ";
	cin >> num;
	if (num > largest)
	{
		largest = num;
	}
	cout << "Largest number : " << largest;
	return 0;
}
