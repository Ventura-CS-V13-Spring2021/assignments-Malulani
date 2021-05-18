#ifndef STUDENT_H
#define STUDENT_H

#include "Address.h"
#include "DOB.h"
 
class Student
{
	string sname;
	int id;
	DOB dob;
	Address address;
public:
	Student();
	Student(string stname, int idnum, DOB date, Address addr);
	int getID() const;
	string getSname() const;
	DOB getDOB() const;
	Address getAddress() const;
	void setSname(string name);
	void setID(int num);
	void setDOB(DOB db);
	void setAddress(Address addr);
	void printStudent();
};


#endif // !STUDENT_H


