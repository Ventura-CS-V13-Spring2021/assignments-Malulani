#include <iostream>
#include <fstream>

using namespace std;

int main()
{
ifstream student("student.txt");
string name;
float score1, score2;
int count=0;

while (student >> name >> score1 >> score2)
{
cout << "\nStudent Name: " << name << "\tScore1: " << score1 << "\tScore2:" << score2;
float sum, average;
sum = score1 + score2;
average = sum / 2;
cout << "\tSum: " << sum << "\tAverage: " << average<<endl;

if (average > 80)
count++;
}
cout << "\n-----\n";
cout << "\nNumber of Students having average greater than 80 are " << count;
return 0;
}
