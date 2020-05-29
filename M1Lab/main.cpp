// CSC 134
// M1LAB
// Kyler Kershaw
// 05/29/2020

#include <iostream>
using namespace std;

int main() {
// This program will simulate an apple orchard.
// The owner’s name
string name = "Kyler";
// number of apples owned
int apples = 100;
// price per apple
double pricePerApple = 0.25;

// calculate the total price of the apples
double totalPrice = apples*pricePerApple;

// print all the information about the orchard
// TODO
cout << "Welcome to " << name;
cout << "’s apple orchard." << endl;
cout << "We have " << apples << "in stock!" << endl;
cout << "Each apple is $" << pricePerApple << "." << endl;
cout << "If you'd like to buy them all, it'd cost $" << totalPrice << "." << endl;
}
