// CSC 134
// M1HW1
// Kyler Kershaw
// 05/29/2020

#include <iostream>
using namespace std;

int main() {
  // This program will store information on the movie Wall-E and
  // read that information to the user.

  // Title of the movie
  string movieName = "Wall-E";
  // Year the movie released
  int releaseYear = 2008;
  // How much the movie made
  double boxOfficeGross = 223.8;
  // Movie description
  string description = "\"In the distant future, a small waste-collecting robot inadvertently embarks on a space journey that will ultimately decide the fate of mankind.\"";

  // Display data about the movie to the user.
  cout << "The movie " << movieName << " Was a box office hit grossing $" << 
  boxOfficeGross << " million dollars in " << releaseYear << " When it released!" << endl;

  cout << "IMDb describes" << movieName << " as "<<description;
}