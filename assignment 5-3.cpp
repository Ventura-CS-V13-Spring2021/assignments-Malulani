#include<iostream>
using namespace std;

void makeArray(double n[], int N);
void printArray(double n[], int N);
void findminmax(double n[], int N);
int  outOfOrder(double n[], int N);

int main()
{
	const int N = 10;
	double numbers[N];
	makeArray(numbers, N);
	printArray(numbers, N);
	findminmax(numbers, N);
	cout << outOfOrder(numbers, N);
	return 0;
}

void makeArray(double n[], int N)
{
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		n[i] = rand() % 100;
	}
}

void printArray(double n[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << n[i] << " ";
	}
	cout << endl;
}

void findminmax(double n[], int N)
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
	cout << endl;
}

int  outOfOrder(double n[], int N)
{
	double firstElement, secondElement;
	for (int i = 0; i < N; i++)
	{
		firstElement = n[i];
		secondElement = n[i + 1];
		if (!(firstElement <= secondElement))
		{
			return (i + 1);
		}

	}
	return -1;
}