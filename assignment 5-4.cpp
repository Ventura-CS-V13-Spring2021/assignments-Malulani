#include<iostream>
using namespace std;

int maxIndux(int sumOfRows[])
{
	int largestIndux = 0;
	for (int i = 0; i < 6; i++)
	{

		if (sumOfRows[i] > sumOfRows[largestIndux])
		{
			largestIndux = i;
		}
	}

	return largestIndux;
}

void findMaxSum(int result[], int numbers[][5])
{
	int sum = 0, sumOfRows[6], induxOfLargestRow;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sum = sum + numbers[i][j];
		}
		sumOfRows[i] = sum;
		sum = 0;
	}
	induxOfLargestRow = maxIndux(sumOfRows);
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[induxOfLargestRow][i] << ", ";
	}

}

int main()
{
	const int NUM_ROW = 6;
	const int NUM_COLS = 5;
	const int SIZE = 5;
	int result[SIZE] = { 0 };
	int numbers[NUM_ROW][NUM_COLS] = {
		{2,7,9,6,4 },
		{6,1,8,10,4 },
		{4,3,7,2,9 },
		{9,9,0,3,1 },
		{8,8,7,8,9 },
		{1,2,1,2,3 }
	};
	findMaxSum(result, numbers);
	return 0;
}