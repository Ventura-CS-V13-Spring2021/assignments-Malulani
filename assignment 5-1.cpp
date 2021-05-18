#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	const int N = 10;
	int numbers[N], sum = 0, avg;
	for (int i = 0; i < N; i++)
	{
		srand(time(0));
		numbers[i] = rand();
	}
	for (int i = 0; i < N; i++)
	{
		sum = sum + numbers[i];
	}
	avg = sum / N;
	cout << "Sum : " << sum;
	cout << endl;
	cout << "Average : " << avg;
	return 0;
}
