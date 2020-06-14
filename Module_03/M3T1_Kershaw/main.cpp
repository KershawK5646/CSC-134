// CSC-134
// M3T1
// Kyler Kershaw
// 06/11/2020

#include <iostream>
using namespace std;


void rectangleFunction(){
  /*
  This function asks the user for the length and width of a rectangle
  then uses that data to calculate the total area of the rectangle.
  The function then displays their entered values and the total area
  in square inches.
  */
  // Variables
    double length;
    double width;
    double area;
    
    // Intro
    cout << "I will calculate the area of 2 rectangles." << endl;
    
    // Prompt user for Length
    cout << "Enter the length of the rectangle in inches. (eg. 25.0)" << endl;
    cin >> length;

    // Prompt user for Width
    cout << "Enter the width of the rectangle in inches. (eg. 25.0)" << endl;
    cin >> width;

    // Calculate area
    area = length * width;

    // Display results

    cout << "Entered length: " << length << endl;
    cout << "Entered width: " << width << endl;


    cout << "The total area of your rectangle is: " << area << "square inches!" << endl;

}

int main() {
  // This is the main function.
  char userInput;
  // Assign bool value to control menu loop
  bool goAgain = true;

  // While set to do calculations, do calculations.
  while (goAgain == true){
    // Call the rectangle function.
    rectangleFunction();

    cout << "Would you like to go again? (y/n)" << endl;
    cin >> userInput;

    if (userInput == 'y' || userInput == 'Y'){
      goAgain = true;
    }
    else{
      cout << "Goodbye." << endl;
      goAgain = false;
    }
  }
}