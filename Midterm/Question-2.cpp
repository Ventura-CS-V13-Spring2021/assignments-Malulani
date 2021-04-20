#include <iostream>
#include <fstream>

using namespace std;

int getNum();
int isGreater(int num1,int num2);

int main()
{
srand(time(0)); //seed for random
ofstream numbers;
numbers.open("numbers.txt");//opening file
int N = 10;
int number=0;//preceding number
int num[10];//array for tracking numbers