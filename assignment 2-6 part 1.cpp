#include <iostream>
#include <fstream>
using namespace std;

int main()
{	
	srand(time(0));
	cout << "How many random numbers do you want to create: ";
	int count;
	cin >> count;
	ofstream file;
	file.open("file.txt");
	for (int i = 0; i < count; i++)
	{
		int num = rand();
		file << num << " ";
	}

	return 0;
}