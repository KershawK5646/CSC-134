// CSC-134
// M3T2
// Kyler Kershaw
// 06/11/2020

#include <iostream>
using namespace std;


double getRectangleArea(){
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

    return area;

}

int main() {
  // Intro
  cout << "This program will have you enter the information for 2 rectangles and calculate their area. It will then tell you if rectangle 1 or 2 is larger or if the areas are the same!" << endl;
  
  // Variables
  double area1;
  double area2;

  // Get the first rectangle info from user.
  area1 = getRectangleArea();

  // Get the second rectangle info from the user.
  area2 = getRectangleArea();

  if (area1 > area2){
    cout << "Rectangle 1 has the lager area coming to: " << area1 <<"square inches!" << endl; 
  }
  else if (area2 > area1){
    cout << "Rectangle 2 has the lager area coming to: " << area2 <<"square inches!" << endl;
  }
  else {
    cout << "Both rectangles have the same area at: " << area1 << "square inches!" << endl;
  }
}