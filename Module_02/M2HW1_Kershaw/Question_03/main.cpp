// CSC 134
// M2LAB1
// Kyler Kershaw
// 06/06/2020
#include <iostream>
using namespace std;


int main() {
  // Declare constants
  const int SLICES_PER_PERSON =3;

  // Declare variables
  int numOfPizzas;
  int numOfSlicesPerPizza;
  int numOfGuests;
  int totalNumOfSlices;
  int remainingSlices;

  // GET VALUES
  // Ask the user how many pizzas they ordered
  cout << "Enter the number of pizzas ordered: \n" << endl;
  cin >> numOfPizzas;
  // Ask the user how many slices are on one pizzas
  cout << "Enter the number of slices on each pizza: \n" << endl;
  cin >> numOfSlicesPerPizza;
  // Ask the user how many guests are coming
  cout << "Enter the number of guests coming: \n" << endl;
  cin >> numOfGuests;
  
  
  // Calculations
  totalNumOfSlices = numOfSlicesPerPizza * numOfPizzas;
  remainingSlices = totalNumOfSlices - (numOfGuests * 3);
  
  
  // Display results
  cout << "The number of left over slices of pizza is: " << remainingSlices << endl;
  

  return 0;
}