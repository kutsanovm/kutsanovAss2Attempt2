#include <iostream>

using namespace std;

/* Write code that will fill the array a (declared below) with numbers typed in
at the keyboard. The numbers will be input five per line, on four lines
(although your solution need not depend on how the input numbers are divided into lines).

*/
int main()
{
  int a[4][5];
  int tempArray[5];
  int ctr = 0;

  while (ctr < 4)
  {
    cout << "Enter 5 integers separated by spaces: ";
    cin >> tempArray[0] >> tempArray[1] >> tempArray[2] >> tempArray[3] >> tempArray[4];

    for (int c = 0; c < 5; ++c)
    {
      a[ctr][c] = tempArray[c];
    }

    ctr++;


    cout << endl;
  }
  // to print the 2d tempArray
  cout << "Your 2D Array: "<< endl;
  for (int r = 0; r < 4; ++r)
  {
    for (int c = 0; c < 5; ++c)
    {
      cout << a[r][c] << " ";
    }
    cout << endl;
  }
  return 0;
}
