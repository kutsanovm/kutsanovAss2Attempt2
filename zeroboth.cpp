#include <iostream>

using namespace std;

/* Implement a void function called zeroBoth that has two call-by- reference
parameters, both of which are variables of type int, and sets the values of both variables to 0.

*/
void zeroBoth(int x, int y)
{
  x = 0;
  y = 0;

  cout << x << ", " << y << endl;
}

int main()
{
  int val;
  int val2;

  cout << "Enter first value: ";
  cin >> val;
  cout << endl;

  cout << "Enter second value: ";
  cin >> val2;

  zeroBoth(val, val2);
}
