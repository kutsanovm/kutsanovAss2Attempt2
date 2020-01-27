#include <iostream>

using namespace std;

/* Write a program that will read up to ten nonnegative integers into an
array called numberArray and then write the integers back to the screen
(console output). For this exercise you need not use any functions.

*/

int main()
{
  int total;
  cout << "How many  integers are you going to input? " << endl;
  cin >> total;

  int userInt;

  int numberArray[total];

  for (int i = 0; i < total; ++i)
  {
    cout << "Enter a positive integer: ";
    cin >> userInt;

    if (userInt > -1 )
    {
      numberArray[i] = userInt;
    }
  }

  cout << endl;
  cout << "Your inputs: ";
  for (int i = 0; i < total; ++i)
  {
    cout <<numberArray[i] << " ";
  }

  cout << endl;

  return 0;
}
