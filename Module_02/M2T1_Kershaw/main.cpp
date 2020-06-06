// CSC 134
// M2T1
// Kyler Kershaw
// 06/06/2020
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
  /*This program will take the price of a meal ($5.99) and print out a reciept.
  
  Will include:
  Price before tax
  Amount of tax
  Total including tax
  */

  /*PSUDOCODE
  Declare Variables
  Assing price
  Perform calculations
  display results
  */

  // Declare & Asign variables
  double mealPrice = 5.99;
  double taxRate = 0.08;
  double taxCost;
  double totalPrice;

  // Perform calculations
  taxCost = mealPrice * taxRate;
  totalPrice = mealPrice + taxCost;

  // Display results
  cout << "Subtotal: " << mealPrice << endl;
  cout << "Tax Owed: " << setprecision(2) << taxCost << endl;
  cout << "Total: " << setprecision(2) << totalPrice << endl;
}