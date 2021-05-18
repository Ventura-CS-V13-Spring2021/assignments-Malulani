#include "IntegerArray.h"

int main()
{
    IntegerArray N;

    N.fillUp();
    N.printAll();
    cout << "Current lenght is : " << N.getLenght() << endl;

    cout << "After sorting\n";
    N.sortAsc();
    N.printAll();

    cout << "Removing the last element : ";
    N.removeLastelm();
    cout << "Current lenght is : " << N.getLenght() << endl;
    N.printAll();

    cout << "Append the element : ";
    N.appendElement(100);
    cout << "Current lenght is : " << N.getLenght() << endl;
    N.printAll();

    return 0;
}