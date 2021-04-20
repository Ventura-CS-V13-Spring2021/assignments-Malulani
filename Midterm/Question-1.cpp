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
