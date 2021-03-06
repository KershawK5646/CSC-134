// CSC 134
// M2LAB1
// Kyler Kershaw
// 06/06/2020
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Constants for cost and amount charged
  const double COST_PER_CUBIC_FOOT = 0.25;
  const double CHARGE_PER_CUBIC_FOOT = 0.3;

  // Variables
  double length, width, height, volume, cost, charge, profit;

  // Set the desired output formatting for numbers.
  cout << setprecision(2) << fixed << showpoint;

  // Prompt the user for crate dimensions
  cout << "Enter the dimensions of the crate in feet: \n";
  cout << "Length: ";
  cin >> length;
  cout << "Width: ";
  cin >> width;
  cout << "Height: ";
  cin >> height;

  // Calculate the crate's volume, the cost,  the charge, and profit
  volume = length * width * height;
  cost = volume * COST_PER_CUBIC_FOOT;
  charge  = volume * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;

  // Display the calculated data
  cout << "The volume of the crate is: ";
  cout << volume << " cubic feet. \n";
  cout << "Cost ot build: " << cost << endl;
  cout << "Charge to customer: $" << charge << endl;
  cout << "Profit: $" << profit << endl;
  return 0;
}