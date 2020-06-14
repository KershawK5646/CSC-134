// CSC-134
// M3HW1
// Kyler Kershaw
// 06/14/20

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

string makeLower(string passedString){
  string userString;
  userString = passedString;

  // Set user string to lower for eval.
  transform(userString.begin(), userString.end(), userString.begin(), ::tolower);

  return userString;
}

// Question 1.
void question1(){
  // Chatbot prompt

  string userString;

  // Prompt user for input
  cout << "Hello, I'm a C++ program!" << endl;
  cout << "Do you like me? Please type yes or no." << endl;
  // Collect input from user.
  cin >> userString;

  // Set user string to lower for eval.
  transform(userString.begin(), userString.end(), userString.begin(), ::tolower); 
  
  if (userString == "yes"){
    cout << "That’s great! I’m sure we’ll get along." << endl;
  }else if (userString == "no"){
    cout << "Well, maybe you’ll learn to like me later." << endl;
  }else {
    cout <<"If you’re not sure... that’s OK. " << endl;
  }
}


// Question 2
void question2(){
  // Reciept calculator

  // Declare & Asign variables
  double mealPrice;
  double taxRate = 0.08;
  double taxCost;
  double tipAmount;
  double totalPrice;
  int mealtype;
  int tipRate = 15;

  // Set output formatting
  cout << setprecision(2) << fixed << showpoint;

  // Get the price of the meal from the user.
  cout << "Enter the price of your meal please: (eg. 15.99)" << endl;
  cin >> mealPrice;

  // Find if meal was dine in or takeaway
  cout << "Enter 1 if meal was dine in or Enter 2 if meal was takeaway: "<< endl;
  cin >> mealtype;

  if (mealtype == 1){
    tipAmount = mealPrice * 0.15;
  }else{
    tipAmount = 0;
  }


  // Perform calculations
  taxCost = mealPrice * taxRate;
  totalPrice = mealPrice + taxCost + tipAmount;

  // Display results
  cout << "Subtotal: " << mealPrice << endl;
  cout << "Tip amount: " << tipAmount << endl;
  cout << "Tax Owed: " << taxCost << endl;
  cout << "Total: " << totalPrice << endl;
}


void question3(){
  // Text based game.
  string userString;
  
  // Prompt user
  cout << "Hey you, you’re finally awake. You were trying to cross the border right? \nWalked right into that Imperial ambush same as us and that thief over there.\nNow you find yourself in some spoopy hallway..."<<endl;
  cout << "You're in the center of the hallway with two directions to go...\nRight...or Left?" << endl;

  // Get direction from user// Set user string to lower for eval.
  cin >> userString;
  // Make user String lowercase for eval
  makeLower(userString);

  if (userString == "left"){
    cout << "Walking along the hotel hallway, you get a sense the building isn't quite up to code...\nSuddenly, the floor gives out and you fall into a massive pit of spikes...\nLike...\nHUGE spikes...\nShockingly large spikes."<<endl;
    cout << "You get the ded" << endl;
  }else{
    cout << "You come across some open doors a bit down the hall...\nDo you look or keep walking..? \n(Look/Walk)"<< endl;
    
    cin >> userString;
    makeLower(userString);

    if(userString == "look"){
      cout << "In a shocking turn of events, the seemingly haunted hotel has a ghost in it!\nWho'da thunk it. Anyway you get you some hauntin. \nAnd some dead. Tis a shame..." << endl;
    }else{
      cout << "You see a turn approaching...As you think to youself...\n'Hey! There's a turn aproaching!' you hear something shuffling behind you...\nDo you turn and look or run?\n(Turn/Run)"<<endl;

      cin >> userString;
      makeLower(userString);
      
      if (userString == "turn"){
        cout << "As you twist around to see what's causing the noise, you notice that down the hall both members of LMFAO (God remember them?? 2012 was weird man) are there (Get it? Because I said shuffling earlier ha ha sorry). They begin to ominously shuffle your direction...\nThey party too hard for you too keep up with...\nThe sheer amount of cardio from shuffling and gallons of alcohal they force feed the party put everyone into cardiac arrest immedietly...\nSome say that to this day...within those halls on late evenings, one can hear the faint pounding of 4 on the floor electro beats echoing through the halls..."<< endl;
      }else{
        cout << "So...You decided to run...Good choice!" << endl;
        cout << "As you're sprinting down the hallway you behin to hear a rhythmic pounding as though your heart and feet are moving in time...\nit gets louder and louder as you get further and further down the hall...\nyou notice it's coming from behind you!\nApproaching the end of the hall, you notice there's a door cracked open at the end and a window to the left...\nWhich do you take? (Door/Window)"<< endl;

        cin >> userString;
        makeLower(userString);
        if (userString == "door"){
          cout << "You sprint full speed into the door hoping to break through the frame and into the freedom beyond it only to find that the door is actually a highly detailed painting.\nAs you sit there and admire the craftsmanship that's clearly gone into this mural, you notice that the rhythmic sound you'd heard earlier was actually music...Pounding electro begins to fill the room..."<< endl;
          cout << "As you twist around to see what's causing the noise, you notice that down the hall both members of LMFAO (God remember them?? 2012 was weird man) are there (Get it? Because I said shuffling earlier ha ha sorry). They begin to ominously shuffle your direction...\nThey party too hard for you too keep up with...\nThe sheer amount of cardio from shuffling and gallons of alcohal they force feed the party put everyone into cardiac arrest immedietly...\nSome say that to this day...within those halls on late evenings, one can hear the faint pounding of 4 on the floor electro beats echoing through the halls..."<< endl;
        }else{
          cout << "YEET" << endl;
          cout <<"You make a dive out the window like it's some kind a action movie or somethin.\nSadly, this is not a movie set nor is this hotel a one story motel. It is infact a holiday in and you were on the 3rd floor.\nWhile diving through the air, you notice the pool below...Maybe things will be ok afterall!\nSploosh, you enter the water and emerge only to find out that you're now crowned the king (or queen) of cannonballs. Nice job dude!"<< endl;
        }
      }
    }
  }
}


// Question 4.
void question4(){
  // Variables
  int random1;
  int random2;
  int userEntry;
  int answer;

  srand (time(NULL));
  random1 = rand() % 10;
  random2 = rand() % 10;
  answer = random1 + random2;

  cout << "What is "<< random1 << " plus " << random2 << "?"<< endl;
  cin >> userEntry;

  if (userEntry == answer){
    cout<< "Correct!"<< endl;
  }else{
    cout<< "Incorrect. The answer was: " << answer<< endl; 
  }

}


// Main
int main() {
  question1();
  cout<<"\n \n \n "<<endl;
  question2();
  cout<<"\n \n \n "<<endl;
  question3();
  cout<<"\n \n \n "<<endl;
  question4();
}