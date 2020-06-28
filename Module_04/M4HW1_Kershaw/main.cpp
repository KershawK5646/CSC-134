// CSC-134
// M4HW1
// Kyler Kershaw
// 06/20/20
#include <iostream>
using namespace std;

void bronze(){
  // Intro
  cout << "This is the 5 times table!" << endl;
  // Variables
  int firstNum = 5;
  int secondNum;
  int answer;
  // Loop 12 times
  for (int i=1; i<=12; i++ ){
    // Calculate and display the answer
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
  }
}

void silver(){
  // Intro
  cout << "This is a custom times table!" << endl;
  // Variables
  int firstNum;
  int secondNum;
  int answer;

  // Collect numbers from user
  cout << "Enter a number from 1 to 12: "<< endl;
  cin >> firstNum;
  cout << "Enter another number from 1 to 12: "<< endl;
  cin >> secondNum;

  // Loop 12 times
  for (int i=1; i<=secondNum; i++ ){
    // Calculate and display the answer
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
  }
}

void gold(){
  // Intro
  cout << "This is a custom times table!" << endl;
  // Variables
  int firstNum;
  int secondNum;
  int answer;

  // Collect numbers from user
  cout << "Enter a number from 1 to 12: "<< endl;
  cin >> firstNum;

  // Validate number is between 1 and 12.
  while (firstNum > 12 || firstNum<1){
    cout << "Invalid entry. Please enter a number between 1 and 12."<< endl;
    cin >> firstNum;
  }
  
  cout << "Enter another number from 1 to 12: "<< endl;
  cin >> secondNum;
  // Validate number is between 1 and 12.
  while (secondNum > 12 || secondNum<1){
    cout << "Invalid entry. Please enter a number between 1 and 12."<< endl;
    cin >> secondNum;
  }
  // Loop 12 times
  for (int i=1; i<=secondNum; i++ ){
    // Calculate and display the answer
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
  }
}

int main() {
  cout << "BRONZE:" <<endl;
  bronze();
  cout << "SILVER:" <<endl;
  silver();
  cout << "GOLD:" <<endl;
  gold();
}