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
	{
		name = n;
	}

	string getName()
	{
		return name;
	}

	void setNumClasses(int v)
	{
		if(v<0)
		{
		 	reset();	
		}
		else
		{ 
			reset();
			numClasses = v;
			classList = new string[numClasses]; 
			cout<<"For Student "<<name<<endl;
			for (int i = 0; i < numClasses; i++)
			{
				cout << "Enter Course No " << i + 1<<" : ";
				cin >> classList[i];
			}
		}
	}
  int getNumClasses()
	{
		return numClasses;
	}
	
	~Student()
	{ 
		numClasses=0;
		name="";
		delete[] classList;
	}
};

int main()
{
	Student s;
	s.setName("Mr.James");
	s.setNumClasses(3);
	s.output();
	//Copy Constructor check
	Student copy(s);
	s.reset();
	//to check the that copy is completely different object
	s.~Student();
	copy.output();