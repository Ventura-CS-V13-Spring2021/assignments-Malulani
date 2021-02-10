#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const int rateA = 15.00;
  const int rateB = 12.00;
  const int rateC = 9.00;

  int seatA;
  int seatB;
  int seatC;

  cin >> seatA >> seatB >> seatC;

  double totalA;
  double totalB;
  double totalC;
  double total_amount;

  totalA = seatA * rateA;
  totalB = seatB * rateB;
  totalC = seatC *rateC;

  total_amount = totalA + totalB + totalC;

  cout << total_amount << endl;
}
