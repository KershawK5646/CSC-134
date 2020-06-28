// CSC-134
// M4LAB
// Kyler Kershaw
// 06/20/20
#include <iostream>
using namespace std;
int main() {
  int width;
  int height;

  
  cout << "Please enter the height of the rectangle: "<< endl;
  cin >> height;
  cout << "Please enter the width of the rectangle: "<< endl;
  cin >> width;

  //cout<< height<< width<< endl;

  for(int j=0; j < height; j++){
    for(int i=0; i < width; i++){
      cout << "*" << " ";
    }
    cout << endl;
  }
  
}