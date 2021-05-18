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
    {
			cout << "Enter the course name: ";
			cin >> classList[i];
		}
	}

	Student(Student& rhs)
	{
		name = rhs.name;
    numClasses = rhs.numClasses;
		classList = new string[numClasses];
		for (int i = 0; i < numClasses; i++)
		{
			classList[i] = rhs.classList[i]; 
		}