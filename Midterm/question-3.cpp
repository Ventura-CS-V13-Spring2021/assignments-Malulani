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