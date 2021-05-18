#include "Student.h"

Student::Student()
{

}

Student::Student(string stname, int idnum, DOB date, Address addr)
{
	sname = stname;
	id = idnum;
	dob.setDOB(date.getMonth(), date.getDay(), date.getYear());
	address.setAddress(addr.getStreet(), addr.getState(), addr.getZip());
}

int Student::getID() const
{
	return id;
}

string Student::getSname() const
{
	return sname;
}

DOB Student::getDOB() const
{
	return dob;
}

Address Student::getAddress() const
{
	return address;
}

void Student::setSname(string name)
{
	sname = name;
}

void Student::setID(int num)
{
	id = num;
}

void Student::setDOB(DOB db)
{
	dob.setDOB(db.getMonth(), db.getDay(), db.getYear());
}

void Student::setAddress(Address addr)
{
	address.setAddress(addr.getStreet(), addr.getState(), addr.getZip());
}

void Student::printStudent()
{
	cout << "\nStudent Name: " << sname;
	cout << "\nStudent Id: " << id;
	dob.printDate();
	address.printAddress();
}