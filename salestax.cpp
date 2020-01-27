#include <iostream>

using namespace std;
/* Implement a function called addTax. The function addTax has two formal
parameters: taxRate, which is the amount of sales tax expressed as a
percent; and cost, which is the cost of an item before tax. The function returns
the value (float) of cost so that it includes sales tax.
*/
float addTax(float taxRate, float cost)
{
  float totalCost = 0;
  taxRate = taxRate / 100;
  float totalTax = taxRate * cost;
  totalCost = totalTax + cost;

  return totalCost;
}

int main()
{
  float price;
  float rate;
  cout << "Enter the price of the item: ";
  cin >> price;
  cout << endl;
  cout << "Enter the tax rate (percentage): ";
  cin >> rate;
  cout << endl;

  cout << "The item's total cost is: $" << addTax(rate, price) << endl;

}
