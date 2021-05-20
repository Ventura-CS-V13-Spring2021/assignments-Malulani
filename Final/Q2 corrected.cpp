#include <iostream>
using namespace std;

int main()
{
	int arr[20] = { -12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12 };

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "\nN\tCount\n";
	int prev = arr[0], count = 1;
	for (int i = 1; i <= 20; i++)
	{
		if (arr[i] == prev)
		{
			count++;
		}
		else
		{
			cout << prev << "\t" << count << endl;
			count = 1;
			prev = arr[i];
		}

	}
	return 0;
}