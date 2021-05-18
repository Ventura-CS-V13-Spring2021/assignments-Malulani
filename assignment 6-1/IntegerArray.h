#ifndef INTEGER_ARRAY_H
#define INTEGER_ARRAY_H
#include <iostream>
using namespace std;

class IntegerArray
{
public:
	int getLenght()const;
	int getLastelm()const;
	void printAll(void)const;
	void fillUp(void);
	void sortAsc(void);
	void removeLastelm(void);
	void appendElement(int v);

private:
	static const int N = 10;
	int numbers[N];
	int lenght = 0;

};

#endif // !INTEGER_ARRAY_H
