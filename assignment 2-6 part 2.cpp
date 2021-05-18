#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream file("file.txt");
	int num, count = 0, sum = 0, max = 0, min = 0;
	double average = 0;
	if (!file)
	{
		cout << "File could not be opened! Error";
		exit(0);
	}
	cout << "Numbers in file are :";
	file >> num;
	min = num;
	while (file >> num)
	{
		cout << num << " , ";
		sum = sum + num;
		count++;

		if (num > max)
			max = num;

		if (num < min)
			min = num;
	}
	average = sum / count;
	cout << "\n\nTotal Numbers read are: " << count << endl;
	cout << "Summition of all integers: " << sum << endl;
	cout << "Maximum Value: " << max << endl;
	cout << "Minimum Value: " << min << endl;
	cout << "Averag Value: " << average << endl;
	return 0;
}