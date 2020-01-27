#include <iostream>

using namespace std;
/* Write a program that will read in a length in feet and inches and output the
equivalent length in meters and centimeters. Use at least three functions: one for
user input, one or more for calculating, and one for output(console). Include a loop
that lets the user repeat this computation for new input values until the user
says he or she wants to end the program (user has to type exit). There are 0.3048
meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
*/


double convertM(int f, int i)
{
  int meter = 0;
  int totalInches = i + (f * 12);
  double cm = (double)totalInches * 2.54;
  while ((cm - 100) > 0)
  {
    meter++;
    cm = cm - 100;
  }

  return meter;
}

double convertCM(int f, int i)
{
  int meter = 0;
  int totalInches = i + (f * 12);
  double cm = (double)totalInches * 2.54;
  while ((cm - 100) > 0)
  {
    //meter++;
    cm = cm - 100;
  }
  //cm = 100 - cm ;
  return cm;
}

void printConversion(int f, int i)
{
  cout << f << " feet, " << i << " inches converts to " << convertM(f, i) << " meter(s) and " << convertCM(f, i) << " centimeters." << endl;
}

int main()
{
  int feet = 0;
  int inches = 0;
  cout << "Enter '-1' to exit the program: " << endl;

  while (true)
  {
    cout << "Enter the feet: ";
    cin >> feet;

    if (feet == -1)
    {
      break;
    }

    cout << "Enter the inches: ";
    cin >> inches;


    printConversion(feet, inches);
  }
}
