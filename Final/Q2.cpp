#include <iostream>
using namespace std;

class Student {
	string name;
	int numClasses;
	string* classList;
public:
	Student() : name(), numClasses(0), classList(NULL) {};
	
	Student(string n, int num)
	{
		name = n;
		numClasses = num;
		classList = new string[num];
		for (int i = 0; i < numClasses; i++)