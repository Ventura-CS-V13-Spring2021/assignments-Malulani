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
	}

  void input()
	{
		int num;
		cout<<"Enter Student Name: ";
		cin>>name;
		do
		{
			cout << "\nEnter the number of classes, student enroll in : ";
			cin >> num;
		}while(num<=0);
		
		numClasses = num;
		classList = new string[numClasses];
		for (int i = 0; i < numClasses; i++)
		{
			cout << "Course No " << i + 1<<" : ";
			cin >> classList[i];
		}
	}

	void output()
	{
    cout << "Name : " << name << endl;
		cout << "Classes in which " << name << ", Enrolled!" << endl;
		for (int i = 0; i < numClasses; i++)
		{
			cout << classList[i] << endl;
		}

	}

	void reset()
	{
		numClasses = 0;
		delete[] classList;
	}

  Student operator=(const Student& rhs)
	{
		this->reset();
		name = rhs.name;
		numClasses = rhs.numClasses;
		classList = new string[numClasses];
		for (int i = 0; i < numClasses; i++)
		{
			classList[i] = rhs.classList[i];
		}
		return *this;
	}

	void setName(string n)