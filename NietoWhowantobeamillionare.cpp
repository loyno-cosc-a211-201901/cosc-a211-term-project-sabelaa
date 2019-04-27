// Program Name: Who wants to be a millionare
// Purpose: This is a game that gives money to the player if they answered a list of hard questions.
//Author: Isabella Nieto
//Date: February 1, 2019

#include <cstdlib>
#include "sleep_for_ms.cpp"
#include <iostream>
using namespace std;

const int MILLISECONDS_PER_SECOND=1000;
const int TIME_TO_ANSWER=30*MILLISECONDS_PER_SECOND;
const int Yes='1';
const int No='2';

void main_menu ();
void one_hundred_section();
void three_hundred_section ();
void five_hundred_section ();
void one_thousand_section ();
void three_thousand_section ();
void five_thousand_section ();
void one_hundred_thousand_section ();
void four_hundred_thousand_section ();
void eight_hundred_thousand_section ();
void one_million_dollar_section ();


bool used_public_clue= false;
bool used_call_clue=false;
bool used_fifty_fifty=false;

bool taken_one_hint=false;

int main()
  {

    cout<< "Welcome to Who wants to be a millionare?" << endl;
    main_menu ();
    return 0;
}


void main_menu (int answer) {

  cout<< "The game consists of answering a list of questions " << endl;
  cout<< "in order to gain certain amounts of money, from 100" << endl;
  cout<< "dollars to 1 million dollars." << endl;
  cout<< "For this you'll be given a question each round with four" << endl;
  cout<< "answers. If you choose the correct answer you'll gain 100" << endl;
  cout<< "dollars and pass to the next rounds until you win" << endl;
  cout<< "1 million dollars. If you fail you'll lose all your money. "<< endl;
  cout<< "You will be given three clues, the public clue, the "<< endl;
  cout<< "phone call clue, and the 50/50 clue."<<  "\n" << endl;
  cout<< "With the public clue you can ask the public for the correct "<< endl;
  cout<< "answer. With the call clue you can make a call and ask"<< endl;
  cout<< "a person for the answer, and the 50/50 clue is that two "<< endl;
  cout<< "of the four options will be eliminated, leaving you with two"<< endl;
  cout<< "options to guess for the right answer." <<  "\n" << endl;
  cout <<"Remember! You can only use this hints after the 1000 dollars"<< endl;
  cout<< "and you'll be able to use them only once or else the game ends"<< "\n" << endl;
  cout<< "Are you ready to start? (Write Yes, or No)"<< "\n" << endl;
  cin >> answer;
  cout<< "   "<< endl;

  if (answer == 1 ){

    cout <<"Good Luck!"<<"\n" << endl;

    one_hundred_section ();
   }

   else {

     cout <<"Goody bye!";
     // return 0;

   }
}

   void one_hundred_section () {

   int answer_one_hundred_section;

    cout << "A person who doesn't like a particular activity might say, it's not my cup of..." << endl;
 		cout << "a. Tea"  << endl;
 		cout << "b. Joe "  << endl;
 		cout << "c. Soup"  << endl;
 		cout << "d. Grog"  << "\n" << endl;
    // cout <<"The answer is: " <<answer_one_hundred_section;

    sleep_for_ms(TIME_TO_ANSWER);

    cin >> answer_one_hundred_section;


     if (answer_one_hundred_section == 'a'){

     cout << "Congratulations, you just earn 100 dollars!" << endl;
     three_hundred_section ();

    }

   else {

     cout <<"You lost, the correct answer is a. Tea" << "\n" << endl;
     // return 0;
   }
}

void three_hundred_section () {

  int answer_three_hundred_section;

  cout << "What is the capital of Australia?" << "\n" << endl;
  cout << "a. Candebra"  << endl;
  cout << "b. Canberra "  << endl;
  cout << "c. Sydney"  << endl;
  cout << "d. Melbourne"  << "\n" << endl;
  cin >> answer_three_hundred_section;

  if (answer_three_hundred_section == 'b'){

  cout << "Congratulations, you just earn 300 dollars!" << endl;
  five_hundred_section ();

 }

else {

  cout <<"You lost, the correct answer is b. Camberra" << "\n" << endl;
  // return 0;
   }
}

void five_hundred_section () {

  int answer_five_hundred_section;

    cout << "In Shrek, what doe Shrek say ogres are like?" << "\n" << endl;
		cout << "a. Onions"  << endl;
		cout << "b. Lettuce"  << endl;
		cout << "c. Apples"  << endl;
		cout << "d. Cake"  << "\n" << endl;
    cin >> answer_five_hundred_section;

  if (answer_five_hundred_section == 'a'){

  cout << "Congratulations, you just earn 500 dollars!" << endl;
  one_thousand_section ();

 }

else {

  cout <<"You lost, the correct answer is a. Onions" << "\n" << endl;
  // return 0;
   }
}

void one_thousand_section () {

  int answer_one_thousand_section;

    cout << "Which of these is a player’s position in baseball?" << "\n" << endl;
		cout << "a. Running Back"  << endl;
		cout << "b. Goalie"  << endl;
		cout << "c. Right Field"  << endl;
		cout << "d. Left Guard"  << "\n" << endl;
    cin >> answer_one_thousand_section;

  if (answer_one_thousand_section == 'c'){

    cout << "Congratulations, you just earn 1,000 dollars!" << "\n" << endl;
    cout << "Now you can use the clues! Press p for the"<< endl;
    cout << "public clue, press cc for the call hint, and" << endl;
    cout << " press 50 in order to get the 50/50 hint" << "\n" << endl;

  three_thousand_section ();

 }

else {

    cout <<"You lost, the correct answer is c. Right Field" << "\n" << endl;
  // return 0;
   }
}

void three_thousand_section () {

  string answer_three_thousand_section;

      cout << "Breaking the barrier of the speed of  _____ produces the sonic boom" << "\n" << endl;
  		cout << "a. Jupiter"  << endl;
  		cout << "b. Sound"  << endl;
  		cout << "c. Light"  << endl;
  		cout << "d. Radiation"  << "\n" << endl;
      cin >> answer_three_thousand_section;

  if (answer_three_thousand_section == "c"){

      cout << "Congratulations, you just earn 3,000 dollars!" << endl;
      five_thousand_section ();

 }

else if (answer_three_thousand_section == "p") {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a. 19%  b. 25 c. 36% d. 20%" << endl;
      cout <<"What is the answer?";
      cin >> answer_three_thousand_section;

  }

else if (answer_three_thousand_section == "cc"){

       double call_hint;
       // if (used_call_clue){
       //
       // co
       //
       //
       // }

       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"It's definetly answer c" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_three_thousand_section;

  }

else if (answer_three_thousand_section == "50") {

      cout << "b. Sound"  << endl;
      cout << "c. Light"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_three_thousand_section;

    }


else {

  cout <<"You lost, the correct answer is c. Light" << "\n" << endl;
  // return 0;
   }
}

void five_thousand_section (int) {

  int answer_five_thousand_section;

      cout << "In which language would someone say Ismi Tim" << "\n" << endl;
  		cout << "a. Hindi"  << endl;
  		cout << "b. Spanish"  << endl;
  		cout << "c. Arabic"  << endl;
  		cout << "d. Chinese"  << "\n" << endl;
      cin >> answer_five_thousand_section;

  if (answer_five_thousand_section == 'c'){

      cout << "Congratulations, you just earn 5,000 dollars!" << endl;
      ten_thousand_section ();

 }

else if (answer_three_thousand_section == 'p') {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a. 30%  b. 15% c. 45% d. 10%" << endl;
      cout <<"What is the answer?";
      cin >> answer_five_thousand_section;

  }

else if (answer_five_thousand_section == "cc" ){

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I think is c, I'm not sure" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_five_thousand_section;

  }

else if (answer_five_thousand_section == "50") {

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "a. Hindi"  << endl;
      cout << "c. Arabic"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_five_thousand_section;

    }


else {

  cout <<"You lost, the correct answer is c. Arabic" << "\n" << endl;
  // return 0;
   }
}

void ten_thousand_section (int) {

  int answer_ten_thousand_section;

      cout << "The 2008 movie Twilight is based on a book by what author?" << "\n" << endl;
  		cout << "a. Sarah Strohmeyer"  << endl;
  		cout << "b. Carla Meyer"  << endl;
  		cout << "c. Anne Rice"  << endl;
  		cout << "d. Stephenie Meyer"  << "\n" << endl;
      cin >> answer_five_thousand_section;

  if (answer_five_thousand_section == 'd'){

      cout << "Congratulations, you just earn 10,000 dollars!" << endl;
      thirty_thousand_section ();

 }

else if (answer_ten_thousand_section == 'p') {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.23 %  b.8 % c. 34 % d. 35%" << endl;
      cout <<"What is the answer?";
      cin >> answer_ten_thousand_section;

  }

else if (answer_ten_thousand_section == "cc"){

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I love this book! Definitely answer d" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_ten_thousand_section;

  }

else if (answer_ten_thousand_section == "50") {

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "c. Anne Rice "  << endl;
      cout << "d. Stephenie Meyer"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_five_thousand_section;

    }


else {

  cout <<"You lost, the correct answer is d. Stephenie Meyer" << "\n" << endl;
  // return 0;
   }
}

void thirty_thousand_section (int) {

  int answer_thirty_thousand_section;

      cout << "What was the evil Cyborg model in Terminator 2?" << "\n" << endl;
  		cout << "a. T-1000"  << endl;
  		cout << "b. St-45"  << endl;
  		cout << "c. Willy-6"  << endl;
  		cout << "d. T-500"  << "\n" << endl;
      cin >> answer_five_thousand_section;

  if (answer_five_thousand_section == 'a'){

      cout << "Congratulations, you just earn 30,000 dollars!" << endl;
      fifty_thousand_section ();

 }

else if (answer_thirty_thousand_section == 'p') {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.60 %  b.25 % c. 10 % d. 5%" << endl;
      cout <<"What is the answer?";
      cin >> answer_ten_thousand_section;

  }

else if (answer_thirty_thousand_section == "cc"){

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I haven't watched the movie, but the a sounds correct" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_thirty_thousand_section;


  }

else if (answer_thirty_thousand_section == "50") {

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "a. T-1000"  << endl;
      cout << "b. St-45"   << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_thirty_thousand_section;

    }


else {

  cout <<"You lost, the correct answer is a. T-1000" << "\n" << endl;
  // return 0;
   }
}

void fifty_thousand_section (int) {

  int answer_thirty_thousand_section;

      cout << "Which of the following presidents was never married?" << "\n" << endl;
  		cout << "a. William Henry Harrison"  << endl;
  		cout << "b. James Buchaman"  << endl;
  		cout << "c. Bill Clinton"  << endl;
  		cout << "d. John Adams"  << "\n" << endl;
      cin >> answer_five_thousand_section;

  if (answer_five_thousand_section == 'd'){

      cout << "Congratulations, you just earn 50,000 dollars!" << endl;
      fifty_thousand_section ();

 }

else if (answer_fifty_thousand_section == 'p') {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.25 %  b.21 % c. 20% d. 35%" << endl;
      cout <<"What is the answer?";
      cin >> answer_ten_thousand_section;

  }

else if (answer_fifty_thousand_section == "cc"){

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I'm not sure, maybe d" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_fifty_thousand_section;


  }

else if (answer_fifty_thousand_section == "50") {

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "b. James Buchaman" << endl;
      cout << "d. John Adams"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_fifty_thousand_section;

    }


else {

  cout <<"You lost, the correct answer is d. John Adams" << "\n" << endl;
  // return 0;
   }
}


void one_hundred_thousand_section (int) {

  int answer_one_hundred_thousand_section;

      cout << "Denmark has which type of government?" << "\n" << endl;
  		cout << "a. Republic"  << endl;
  		cout << "b. Democracy"  << endl;
  		cout << "c. Confederation of States"  << endl;
  		cout << "d. Kingdom"  << "\n" << endl;
      cin >> answer_five_thousand_section;

  if (answer_five_thousand_section == 'd'){

      cout << "Congratulations, you just earn 200,000 dollars!" << endl;
      two_hundred_thousand_section ();

 }

else if (answer_fifty_thousand_section == 'p') {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.20 %  b.11 % c. 34% d. 35%" << endl;
      cout <<"What is the answer?";
      cin >> answer_ten_thousand_section;

  }

else if (answer_thirty_thousand_section == "cc"){

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I'm not sure, maybe d" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_five_thousand_section;


  }

else if (answer_five_thousand_section == "50") {

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "c. Confederation of States" << endl;
      cout << "d. Kingdom"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_five_thousand_section;

    }


else {

  cout <<"You lost, the correct answer is d. Kingdom" << "\n" << endl;
  // return 0;
   }
}

void two_hundred_thousand_section (int) {

  int answer_two_hundred_thousand_section;

      cout << "What is a more formal way to greet someone in Polish?" << "\n" << endl;
  		cout << "a. Dobranoc"  << endl;
  		cout << "b. Dzien dobry"  << endl;
  		cout << "c. Przepraszam"  << endl;
  		cout << "d. Do widzenia"  << "\n" << endl;
      cin >> answer_five_thousand_section;

  if (answer_five_thousand_section == 'b'){

      cout << "Congratulations, you just earn 400,000 dollars!" << endl;
      four_hundred_thousand_section ();

 }

else if (answer_fifty_thousand_section == 'p') {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.20 %  b.35 % c. 34% d. 11%" << endl;
      cout <<"What is the answer?";
      cin >> answer_ten_thousand_section;

  }

else if (answer_thirty_thousand_section == "cc"){

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I'm not sure, maybe b" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_five_thousand_section;


  }

else if (answer_five_thousand_section == "50") {

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "b. Dzien dobry" << endl;
      cout << "c. Przepraszam" << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_five_thousand_section;

    }


else {

  cout <<"You lost, the correct answer is b. Dzien dobry" << "\n" << endl;
  // return 0;
   }
}

void four_hundred_thousand_section (int) {

  int answer_four_hundred_thousand_section;

      cout << "In Greek mythology Clotho, Lachesis, and Atropos were what famed trio?" << "\n" << endl;
  		cout << "a. Graea, Servants of the Gorgons "  << endl;
  		cout << "b. Erinyes Or Furies "  << endl;
  		cout << "c.  Moirae Or Fates"  << endl;
  		cout << "d. Harpies"  << "\n" << endl;
      cin >> answer_four_hundred_thousand_section;

  if (answer_five_thousand_section == 'c'){

      cout << "Congratulations, you just earn 400,000 dollars!" << endl;
      eight_hundred_thousand_section ();

 }

else if (answer_fifty_thousand_section == 'p') {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.20 %  b.11 % c. 35% d. 34%" << endl;
      cout <<"What is the answer?";
      cin >> answer_ten_thousand_section;

  }

else if (answer_thirty_thousand_section == "cc"){

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I'm not sure, maybe c" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_five_thousand_section;


  }

else if (answer_four_hundred_thousand_section == "50") {

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "a. Graea, Servants of the Gorgons" << endl;
      cout << "c. Moira or Fates"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_four_hundred_thousand_section;

    }


else {

  cout <<"You lost, the correct answer is c. Moira or Fates" << "\n" << endl;
  // return 0;
   }
}

void eight_hundred_thousand_section (int) {

  int answer_eight_hundred_thousand_section;

      cout << "Who was the history muse in Greek mythology?" << "\n" << endl;
  		cout << "a. Clio "  << endl;
  		cout << "b. Polyhymnia "  << endl;
  		cout << "c.  Calliope"  << endl;
  		cout << "d. Erato"  << "\n" << endl;
      cin >> answer_eight_hundred_thousand_section;

  if (answer_eight_hundred_thousand_section == 'c'){

      cout << "Congratulations, you just earn 800,000 dollars!" << endl;
      cout << "one more questions and you'll win 1 million dollars!" << "\n" << endl;
      one_million_dollar_section ();

 }

else if (answer_eight_hundred_thousand_section == 'p') {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.35 %  b.11 % c. 20% d. 34%" << endl;
      cout <<"What is the answer?";
      cin >> answer_ten_thousand_section;

  }

else if (answer_thirty_thousand_section == "cc"){

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I'm not sure, maybe a" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_five_thousand_section;


  }

else if (answer_eight_hundred_thousand_section == "50") {

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "a. Clio" << endl;
      cout << "b. Polyhymnia"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_eight_hundred_thousand_section;

    }


else {

  cout <<"You lost, the correct answer is a. Clio" << "\n" << endl;
  // return 0;
   }
}

void one_million_dollar_section (int) {

  int answer_one_million_dollar_section;

      cout << "What year did McCarthy begin his anti-communist witch hunt?" << "\n" << endl;
  		cout << "a. 1904 "  << endl;
  		cout << "b. 1931 "  << endl;
  		cout << "c. 1950"  << endl;
  		cout << "d. 1953"  << "\n" << endl;
      cin >> answer_eight_hundred_thousand_section;
s
  if (answer_one_million_dollar_section == 'c'){

      cout << "CONGRATULATIONS!!! YOU WON 1 MILLION DOLLARS!!!" << endl;
      cout << "You are very smart" << endl;

 }

else if (answer_one_million_dollar_section == 'p') {

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.20 %  b.11 % c. 35% d. 34%" << endl;
      cout <<"What is the answer?";
      cin >> answer_ten_thousand_section;

  }

else if (answer_one_million_dollar_section == "cc"){

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I'm not sure, maybe c" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_five_thousand_section;


  }

else if (answer_one_million_dollar_section == "50") {

      if (used_fifty_fifty){

        cout <<"you already used that hint" << endl;

      }

      else{

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "c. 1950" << endl;
      cout << "d. 1953"  << endl;

      used_fifty_fifty=true;

      }

      cout <<"What is the answer?" << endl;
      cin >> answer_eight_hundred_thousand_section;

  }


else {

  cout <<"You lost, the correct answer is c. 1950" << "\n" << endl;
  // return 0;
   }
}

bool used_public_clue(){

    if ()



}
