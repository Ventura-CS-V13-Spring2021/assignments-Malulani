#include <iostream>
#include <fstream>
using namespace std;

int getRdNumber();
int findMin(int, int, int);
int findMax(int, int, int);
int getDifference(int, int);
void writeFile(int);

int main()
{
int num1, num2, num3,max,min,diff;
bool flag = true;
srand(time(0));
while (flag == true) 
{
num1 = getRdNumber();
num2 = getRdNumber();
num3 = getRdNumber();

max = findMax(num1, num2, num3);
min = findMin(num1, num2, num3);

diff = max - min;
cout << "Num 01: " << num1 << "\tNum 02: " << num2 << "\tNum 03: " << num3 << "\tMax: " << max << "\tMin: " << min << "\tDifference: " << diff << endl;

if (diff > 3)
writeFile(diff);
else
{
flag = false;
return 0;
}

}
return 0;
}

int getRdNumber()
{
int num= (rand() % 9) + 1;
return num;
}

int findMin(int n1, int n2, int n3)
{
if (n1 < n2 && n1 < n3)
return n1;
if (n2 < n1 && n2 < n3)
return n2;
if (n3 < n1 && n3 < n2)
return n3;

}

int findMax(int n1, int n2, int n3)
{
if (n1 > n2 && n1 > n3)
return n1;
if (n2 > n1 && n2 > n3)
return n2;
if (n3 > n1 && n3 > n2)
return n3;

}

int getDifference(int num1, int num2)
{
int diff = abs(num1 = num2);
return diff;
}

void writeFile(int diff)
{
ofstream question3;
question3.open("question3.txt",ios::app); 
question3 << diff <<" ";

}