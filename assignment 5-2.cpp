#include<iostream>
using namespace std;
void makeArray(int n[], int N);
void printArray(int n[], int N);
void findminmax(int n[], int N);

int main()
{
	const int N = 10;
	int numbers[N];
	makeArray(numbers, N);
	printArray(numbers, N);
	findminmax(numbers, N);

	return 0;
}

void makeArray(int n[], int N)
{
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		n[i] = rand() % 100;
	}
}
void printArray(int n[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << n[i] << " ";
	}
	cout << endl;
}
void findminmax(int n[], int N)
{
	int min = n[0], max = n[0];
	for (int i = 0; i < N; i++)
	{
		if (n[i] > max)
		{
			max = n[i];
		}
		if (n[i] < min)
		{
			min = n[i];
		}
	}
	cout << "Maximum : " << max;
	cout << endl;
	cout << "Minimum : " << min;
}
