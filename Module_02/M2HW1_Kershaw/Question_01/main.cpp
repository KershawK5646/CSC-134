// CSC 134
// M2HW1
// Kyler Kershaw
// 06/06/2020
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Declare Variables
  string userName;
  int accountNumber;
  float startingBalance;
  float depositAmount;
  float withdrawlAmount;
  float newBalance1;
  float newBalance2;

  // Generate random number for account number
  accountNumber = rand()%17;
  
  // Set the desired output formatting for numbers.
  cout << setprecision(2) << fixed << showpoint;
  
  
  // Get the name on the account
  cout << "Please enter your name: " << endl;
  getline(cin, userName);

  // Get the starting balance
  cout << "Please enter your account balance (eg. 99.97): " << endl;
  cin >> startingBalance;

  // Get the deposit amount
  cout << "Please enter your deposit amount (eg. 50.00): " << endl;
  cin >> depositAmount;

  // Get the starting balancewithdrawl amount
  cout << "Please enter your withdrawl amount (eg. 50.00): " << endl;
  cin >> withdrawlAmount;

  // Perfomr calculations
  newBalance1 = startingBalance + depositAmount;
  newBalance2 = newBalance1 - withdrawlAmount;

  cout << "Account name: " << userName << endl; 
  cout << "Account number: " << accountNumber << endl;
  cout << "Starting balance: "<< setprecision(2) <<startingBalance << endl;
  cout << "Deposit amount: "<< setprecision(2) <<depositAmount << endl;
  cout << "Running balance: "<< setprecision(2) <<newBalance1 << endl;
  cout << "Withdrawl amount: "<< setprecision(2) <<withdrawlAmount << endl;
  cout << "Final balance: " << setprecision(2) << newBalance2 << endl;


}