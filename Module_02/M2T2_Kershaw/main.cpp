// CSC 134
// M2T2
// Kyler Kershaw
// 06/06/2020
#include <iostream>
using namespace std;

int main() {
// This program will ask the user for a name, price and quantity of apples to purchase

/*Psudocode
Ask the user for a name
Ask the user how many apples they want
Asl the user for the price per apple
*/

// Declare Variables
string name;
int apples;
double pricePerApple;

// Get user name
cout << "Please enter your name: " << endl;
cin >> name;

// Get number of apples to buy
cout << "How many apples would you like? " << endl;
cin >> apples;

// Get price per apple
cout << "Enter price per apple (Eg. 1.50): " << endl;
cin >> pricePerApple;

// calculate the total price of the apples
double totalPrice = apples*pricePerApple;

// print all the information about the orchard
// TODO
cout << "Welcome " << name << endl;
cout << "We have " << apples << " apples in stock!" << endl;
cout << "Each apple is $" << pricePerApple << "." << endl;
cout << "If you'd like to buy them all, it'd cost $" << totalPrice << "." << endl;
}