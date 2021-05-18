#include "Student.h"

#include<iostream>
#include<string>

using namespace std;

Student::Student()
{
	name = "abc";
	numClasses = 0;
	classList[0] = "";
}

Student::~Student()
{
	delete[] classList;
}

void Student::inputValues()
{
	cout << "Enter the name of student";
	cin >> name;
	cout << "Enter the number of classes, student enroll in : ";
	cin >> numClasses;
	cout << "Enter the course name one by one";
	for (int i = 0; i < numClasses; i++)
	{
		cout << "Course No " << i + 1;
		cin >> classList[i];
	}
}
void Student::setName(string n)
{
	name = n;
}

string Student::getName()
{
	return name;
}

void Student::setNumClasses(int v)
{
	numClasses = v;
}

void Student::output()
{
	cout << "Name : " << name << endl;
	cout << "Classes in which " << name << ", Enroll in" << endl;
	for (int i = 0; i < numClasses; i++)
	{
		cout << classList[i] << endl;
	}

}

void Student::reset()
{
	numClasses = 0;
	for (int i = 0; i < numClasses; i++)
	{
		classList[i] = "";
	}
}

int Student::getNumClasses()
{
	return numClasses;
}
