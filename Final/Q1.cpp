#include<iostream>
using namespace std;

int getNumDiv(int num);

int main()
{
	const int N=6;
	int arr[N]={1,2,4,6,10,24};
	int maxDivisibles=0;
  int theNum=0;
	
	for(int i=0;i<N;i++)
	{
		int divisibles=getNumDiv(arr[i]);
		if(maxDivisibles<=divisibles)
		{
      maxDivisibles=divisibles;
			theNum=arr[i];
		}
	}
	cout<<"The Number with the greatest Number of Divisibles :"<<theNum;
	return 0;
}

int getNumDiv(int num)