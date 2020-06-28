// CSC-134
// M4T1
// Kyler Kershaw
// 06/20/20
#include <iostream>
using namespace std;

void question1(){
  int number = 0;

  while (number<5){
    cout << "Hello\n";
    number++;
  }
  cout << "That's all!\n";
}

void question2(){
  const int MIN_NUMBER=1,
            MAX_NUMBER=10;

  int num = MIN_NUMBER;
  cout << "Number Number Squared\n";
  cout << "-------------------------\n";
  while(num <= MAX_NUMBER){
    cout << num << "\t\t" << (num * num) << endl;
    num++;
  }
}

int main() {
  question1();
  question2();
}