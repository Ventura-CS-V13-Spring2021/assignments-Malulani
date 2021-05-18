#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	Student();
	~Student();

	void setName(string n);
	string getName();
	void setNumClasses(int v);
	void output();
	void reset();
	int getNumClasses();
	void inputValues();

private:
	string name;
	int numClasses;
	string* classList = new string[numClasses];
};

