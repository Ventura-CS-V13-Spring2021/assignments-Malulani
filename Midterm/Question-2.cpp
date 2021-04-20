#include <iostream>
#include <fstream>

using namespace std;

int getNum();
int isGreater(int num1,int num2);

int main()
{
srand(time(0)); 
ofstream numbers;
numbers.open("numbers.txt");
int N = 10;
int number=0;
int num[10];

for (int i = 1; i < 10; i++)
{
num[i] = getNum();
number = num[i-1];
if (isGreater(num[i],number))
{
numbers << num[i];
numbers << " ";
}