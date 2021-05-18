#include "IntegerArray.h"
#include <iostream>
using namespace std;

int IntegerArray::getLenght() const
{
    return lenght;
}

int IntegerArray::getLastelm() const
{
    return numbers[lenght - 1];
}

void IntegerArray::printAll() const
{
    for (int i = 0; i < lenght; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void IntegerArray::fillUp()
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        numbers[i] = rand() % 101;
    }
    lenght = N;
}

void IntegerArray::sortAsc()
{
    int temp;
    for (int i = 0; i < lenght; i++)
    {
        for (int j = i + 1; j < lenght; j++)
        {
            if (numbers[j] < numbers[i])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

void IntegerArray::removeLastelm()
{
    lenght--;
}

void IntegerArray::appendElement(int v)
{
    numbers[lenght] = v;
    lenght++;
}
