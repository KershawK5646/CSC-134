// CSC-134
// M3LAB2
// Kyler Kershaw
// 06/14/2020

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;



int getChoiceFromUser(){
  // This function prompts the user to enter their choice.
  char userSelection;
  bool selectionValid = false;

  do {
    cout << "Rock, Paper, Scissors, SHOOT!" << endl;
    cout << "Make your selection: \n1. Rock\n2. Paper\n3. Scissors" << endl;
    cin >> userSelection;
    cout << userSelection << endl;

    if ( (userSelection == '1') || (userSelection == '2') || (userSelection == '3') ){
      break;
    }else{
      cout << "Invalid entry. Please make a valid selection" << endl;
    }

  } while ( (userSelection != '1') || (userSelection != '2') || (userSelection != '3') );
  
  // Return the user selection
  return userSelection;
}


// Main
int main() {
  // Variables
  string userSelectedString;
  string computerSelectedString;
  int computerChoice;
  char userSelection;

  // Seed the RNG
  srand (time(NULL));

  // Generate computer selection. Pick random number 1-3 inclusive.
  computerChoice = rand() % 3 + 1;
  
  // Prompt the user to select.
  userSelection = getChoiceFromUser();


  // Switch from user selected number to Strings to display
  if (userSelection == '1'){
    userSelectedString = "Rock";
  }else if (userSelection == '2'){
    userSelectedString = "Paper";
  }else{
    userSelectedString = "Scissors";
  }
    
    // Switch from computer generated number to Strings to display
  if (computerChoice == 1){
    computerSelectedString = "Rock";
  }else if (computerChoice == 2){
    computerSelectedString = "Paper";
  }else{
    computerSelectedString = "Scissors";
  }


  // See who won
  if (
    (userSelection == '1' && computerChoice == 3 )||
    (userSelection == '2' && computerChoice == 1 )||
    (userSelection == '3' && computerChoice == 2) ){
      cout << userSelectedString << " beats " << computerSelectedString << "!!" << endl; 
      cout << "You win!" << endl;
    }else if (
    (userSelection == '1' && computerChoice == 1 )||
    (userSelection == '2' && computerChoice == 2 )||
    (userSelection == '3' && computerChoice == 3) ){
      cout << userSelectedString << " is the same as " << computerSelectedString << endl;
      cout << "It's a draw!";
    }else{
      cout << computerSelectedString << " beats " << userSelectedString << "." << endl;
      cout << "You lost." << endl;
    }


}