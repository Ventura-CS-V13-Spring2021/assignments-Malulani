#ifndef ADDRESS_H
#define ADDRESS_H

#include<iostream>
using namespace std;
#include <string>

class Address
{
	string street;
	string state;
	int zip;
public:
	Address();
	Address(string str, string st, int z);
	string getStreet() const;
	string getState() const;
	int getZip() const;
	void printAddress() const;
	void setStreet(string addr);
	void setState(string st);
	void setZip(int z);
	void setAddress(string addr, string st, int z);
};


#endif // !ADDRESS_H


