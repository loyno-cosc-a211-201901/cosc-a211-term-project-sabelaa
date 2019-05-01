// Program Name: Who wants to be a millionare?
// Purpose: This is a game that gives money to the player if they answered a list of hard questions.
//Author: Isabella Nieto
//Date: May 1, 2019

#include <cstdlib>
#include <iostream>
using namespace std;


void main_menu();
void one_hundred_section();
void three_hundred_section();
void five_hundred_section();
void ten_thousand_section();
void one_thousand_section ();
void three_thousand_section ();
void five_thousand_section();
void ten_thousand_section();
void thirty_thousand_section();
void fifty_thousand_section();
void one_hundred_thousand_section ();
void two_hundred_thousand_section ();
void four_hundred_thousand_section ();
void eight_hundred_thousand_section ();
void one_million_dollar_section ();


bool used_public_clue= false;
bool used_call_clue=false;
bool used_fifty_fifty=false;


int main()
  {

    int answer;
    string again;

    do {

    cout<< "Welcome to Who wants to be a millionare?" << "\n" << endl;
    main_menu ();

    cin >> answer;
    cout<< "   "<< endl;

    if (answer == 1 ){

      cout <<"Good Luck!"<< "\n" << endl;

      one_hundred_section ();
     }

     else {

       cout <<"Goody bye!";

       return 0;

     }

    cout << "Do you want to play again? (Press Yes or No)" << "\n" <<endl;
    cin >> again;
    cout << " " << endl;

  } while (again== "Yes" || again == "yes");

}


void main_menu() {

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
  cout<< "Are you ready to start? (Write 1 for yes, and 2 for no)"<< "\n" << endl;

}

void one_hundred_section () {

   string answer_one_hundred_section;

    cout << "A person who doesn't like a particular activity might say, it's not my cup of..." << endl;
 		cout << "a. Tea"  << endl;
 		cout << "b. Joe "  << endl;
 		cout << "c. Soup"  << endl;
 		cout << "d. Grog"  << "\n" << endl;
    cin >> answer_one_hundred_section;


     if (answer_one_hundred_section == "a"){

     cout << "Congratulations, you just earn 100 dollars!" << endl;
     three_hundred_section ();

    }

   else {

     cout <<"You lost, the correct answer is a. Tea" << endl;

   }
}


void three_hundred_section () {

  string answer_three_hundred_section;

  cout << "What is the capital of Australia?" << "\n" << endl;
  cout << "a. Candebra"  << endl;
  cout << "b. Canberra "  << endl;
  cout << "c. Sydney"  << endl;
  cout << "d. Melbourne"  << "\n" << endl;
  cin >> answer_three_hundred_section;

  //sleep_for_ms(TIME_TO_ANSWER);

  if (answer_three_hundred_section == "b"){

  cout << "Congratulations, you just earn 300 dollars!" << endl;
  five_hundred_section ();

 }

else {

  cout <<"You lost, the correct answer is b. Camberra" << "\n" << endl;

   }
}

void five_hundred_section () {

  string answer_five_hundred_section;

    cout << "In Shrek, what animal is the main character's best friend?" << "\n" << endl;
		cout << "a. Donkey"  << endl;
		cout << "b. Cat"  << endl;
		cout << "c. Dragon"  << endl;
		cout << "d. Prince Charming"  << "\n" << endl;
    cin >> answer_five_hundred_section;

    //sleep_for_ms(TIME_TO_ANSWER);

  if (answer_five_hundred_section == "a"){

  cout << "Congratulations, you just earn 500 dollars!" << endl;
  one_thousand_section ();

 }

else {

  cout <<"You lost, the correct answer is a. Donkey" << endl;

   }
}

void one_thousand_section () {

  string answer_one_thousand_section;

    cout << "Which of these is a position in baseball?" << "\n" << endl;
		cout << "a. Running Back"  << endl;
		cout << "b. Goalie"  << endl;
		cout << "c. Right Field"  << endl;
		cout << "d. Left Guard"  << "\n" << endl;
    cin >> answer_one_thousand_section;


  if (answer_one_thousand_section == "c"){

    cout << "Congratulations, you just earn 1,000 dollars!" << "\n" << endl;
    cout << "Now you can use the clues! Press p for the"<< endl;
    cout << "public clue, press cc for the call hint, and" << endl;
    cout << " press 50 in order to get the 50/50 hint" << "\n" << endl;

  three_thousand_section ();

 }

else {

    cout <<"You lost, the correct answer is c. Right Field" << "\n" << endl;

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

  if (used_public_clue){

      cout <<"You already used that hint" << endl;

  }

  else{

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a. 19%  b. 25 c. 36% d. 20%" << endl;
      cout <<"What is the answer?";
      cin >> answer_three_thousand_section;

      used_public_clue=true;

      if (answer_three_thousand_section == "c" ){

         cout << "Congratulations, you just earn 3,000 dollars!" << endl;
        ten_thousand_section();

      }

      else

      cout <<"You lost, the correct answer is c. Light" << endl;

  }
}

else if (answer_three_thousand_section == "cc"){

       string call_hint;

         if (used_call_clue){

           cout <<"You already used that hint" << endl;

         }

         else{

       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"It's definetly answer c" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_three_thousand_section;

       used_call_clue=true;

       if (answer_three_thousand_section == "c" ){

          cout << "Congratulations, you just earn 3,000 dollars!" << endl;
         ten_thousand_section();

       }

       else

       cout <<"You lost, the correct answer is c. Light" << "\n" << endl;

    }

  }

else if (answer_three_thousand_section == "50") {

  if (used_fifty_fifty){

    cout <<"You already used that hint" << endl;

  }

  else{

      cout << "b. Sound"  << endl;
      cout << "c. Light"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_three_thousand_section;

      used_fifty_fifty=true;

      if (answer_three_thousand_section == "c" ){

         cout << "Congratulations, you just earn 3,000 dollars!" << endl;
         ten_thousand_section();

      }

      else

        cout <<"You lost, the correct answer is c. Light" << "\n" << endl;

    }

}

else {

      cout <<"You lost, the correct answer is c. Light" << "\n" << endl;

   }
}

void five_thousand_section () {

  string answer_five_thousand_section;

      cout << "In which language would someone say Ismi Tim" << "\n" << endl;
  		cout << "a. Hindi"  << endl;
  		cout << "b. Spanish"  << endl;
  		cout << "c. Arabic"  << endl;
  		cout << "d. Chinese"  << "\n" << endl;
      cin >> answer_five_thousand_section;


  if (answer_five_thousand_section == "c"){

      cout << "Congratulations, you just earn 5,000 dollars!" << endl;
      ten_thousand_section();

 }

else if (answer_five_thousand_section == "p") {

  if (used_public_clue){

      cout <<"You already used that hint" << endl;
  }

  else{

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a. 30%  b. 15% c. 45% d. 10%" << endl;
      cout <<"What is the answer?";
      cin >> answer_five_thousand_section;

      used_public_clue=true;

      if (answer_five_thousand_section == "c" ){

         cout << "Congratulations, you just earn 5,000 dollars!" << endl;
        ten_thousand_section();

      }

      else

      cout <<"You lost, the correct answer is c. Arabic" << "\n" << endl;

  }

}

else if (answer_five_thousand_section == "cc" ){

       string call_hint;

       if (used_call_clue){

         cout <<"You already used that hint" << endl;

       }

       else{

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I think is c, I'm not sure" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_five_thousand_section;

       used_call_clue=true;

       if (answer_five_thousand_section == "c" ){

          cout << "Congratulations, you just earn 5,000 dollars!" << endl;
         ten_thousand_section();

       }

       else

       cout <<"You lost, the correct answer is c. Arabic" << "\n" << endl;

  }
}

else if (answer_five_thousand_section == "50") {

  if (used_fifty_fifty){

    cout <<"You already used that hint" << endl;

  }

  else{

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "a. Hindi"  << endl;
      cout << "c. Arabic"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_five_thousand_section;

      used_fifty_fifty=true;

    if (answer_five_thousand_section == "c" ){

      cout << "Congratulations, you just earn 5,000 dollars!" << endl;
      ten_thousand_section();

      }

      else

      cout <<"You lost, the correct answer is c. Arabic" << "\n" << endl;

    }
}

else {

     cout <<"You lost, the correct answer is c. Arabic" << "\n" << endl;

   }
}

void ten_thousand_section() {

  string answer_ten_thousand_section;

      cout << "The 2008 movie Twilight is based on a book by what author?" << "\n" << endl;
  		cout << "a. Sarah Strohmeyer"  << endl;
  		cout << "b. Carla Meyer"  << endl;
  		cout << "c. Anne Rice"  << endl;
  		cout << "d. Stephenie Meyer"  << "\n" << endl;
      cin >> answer_ten_thousand_section;

  if (answer_ten_thousand_section == "d"){

      cout << "Congratulations, you just earn 10,000 dollars!" << endl;
      thirty_thousand_section();

 }

else if (answer_ten_thousand_section == "p") {

  if (used_public_clue){

      cout <<"You already used that hint" << endl;

  }

  else{

     cout<<"You just selected the public hint" << "\n" << endl;
     cout << "a.23 %  b.8 % c. 34 % d. 35%" << endl;
     cout <<"What is the answer?";
     cin >> answer_ten_thousand_section;

     used_public_clue=true;

      if (answer_ten_thousand_section == "d" ){

         cout << "Congratulations, you just earn 10,000 dollars!" << endl;
        thirty_thousand_section();

      }

      else

      cout <<"You lost, the correct answer is d. Stephenie Meyer" << endl;

  }
}

else if (answer_ten_thousand_section == "cc"){

       double call_hint;

       if (used_call_clue){

         cout <<"You already used that hint" << endl;

       }

       else{

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I love this book! Definitely answer d" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_ten_thousand_section;

       used_call_clue=true;

       if (answer_ten_thousand_section == "d" ){

          cout << "Congratulations, you just earn 10,000 dollars!" << endl;
         thirty_thousand_section();

       }

       else

          cout <<"You lost, the correct answer is d.Stephenie Meyer" << endl;
  }
}

else if (answer_ten_thousand_section == "50") {

  if (used_fifty_fifty){

    cout <<"You already used that hint" << endl;

  }

  else{

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "c. Anne Rice "  << endl;
      cout << "d. Stephenie Meyer"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_ten_thousand_section;

      used_fifty_fifty=true;

      if (answer_ten_thousand_section == "d" ){

        cout << "Congratulations, you just earn 10,000 dollars!" << endl;
        thirty_thousand_section();

      }

      else

         cout <<"You lost, the correct answer is d. Stephenie Meyer" <<  endl;

    }
}

else {

        cout <<"You lost, the correct answer is d. Stephenie Meyer" << endl;

   }
}

void thirty_thousand_section() {

  string answer_thirty_thousand_section;

      cout << "What was the evil Cyborg model in Terminator 2?" << "\n" << endl;
  		cout << "a. T-1000"  << endl;
  		cout << "b. St-45"  << endl;
  		cout << "c. Willy-6"  << endl;
  		cout << "d. T-500"  << "\n" << endl;
      cin >> answer_thirty_thousand_section;

  if (answer_thirty_thousand_section == "a"){

      cout << "Congratulations, you just earn 30,000 dollars!" << endl;
      fifty_thousand_section();
 }

else if (answer_thirty_thousand_section == "p") {

  if (used_public_clue){

      cout <<"You already used that hint" << endl;

  }

  else{

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.60 %  b.25 % c. 10 % d. 5%" << endl;
      cout <<"What is the answer?";
      cin >> answer_thirty_thousand_section;

      used_public_clue=true;

      if (answer_thirty_thousand_section == "a" ){

        cout << "Congratulations, you just earn 30,000 dollars!" << endl;
        fifty_thousand_section();

      }

      else

      cout <<"You lost, the correct answer is a. T-1000" << endl;

  }
}

else if (answer_thirty_thousand_section == "cc"){

  if (used_call_clue){

       cout <<"You already used that hint" << endl;

  }

  else{

       double call_hint;

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       cout <<"I haven't watched the movie, but a sounds correct" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_thirty_thousand_section;

       used_call_clue=true;

       if (answer_thirty_thousand_section == "a" ){

         cout << "Congratulations, you just earn 30,000 dollars!" << endl;
         fifty_thousand_section();

       }

       else

       cout <<"You lost, the correct answer is a. T-1000" << endl;

  }
}

else if (answer_thirty_thousand_section == "50") {

  if (used_fifty_fifty){

    cout <<"You already used that hint" << endl;

  }

  else{

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "a. T-1000"  << endl;
      cout << "b. St-45"   << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_thirty_thousand_section;

      used_fifty_fifty=true;

      if (answer_thirty_thousand_section == "a" ){

        cout << "Congratulations, you just earn 30,000 dollars!" << endl;
        fifty_thousand_section();

      }

      else

      cout <<"You lost, the correct answer is a. T-1000" << endl;

    }
  }


else {

     cout <<"You lost, the correct answer is a. T-1000" << "\n" << endl;

   }
}

void fifty_thousand_section () {

  string answer_fifty_thousand_section;

      cout << "Which of the following presidents was never married?" << "\n" << endl;
  		cout << "a. William Henry Harrison"  << endl;
  		cout << "b. James Buchaman"  << endl;
  		cout << "c. Bill Clinton"  << endl;
  		cout << "d. John Adams"  << "\n" << endl;
      cin >> answer_fifty_thousand_section;

  if (answer_fifty_thousand_section == "d"){

      cout << "Congratulations, you just earn 50,000 dollars!" << endl;
      one_hundred_thousand_section ();

 }

else if (answer_fifty_thousand_section == "p") {

  if (used_public_clue){

    cout <<"You already used that hint" << endl;

  }

  else{

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.25 %  b.21 % c. 20% d. 35%" << endl;
      cout <<"What is the answer?";
      cin >> answer_fifty_thousand_section;

      used_public_clue=true;

        if (answer_fifty_thousand_section == "d" ){

        cout << "Congratulations, you just earn 50,000 dollars!" << endl;
        one_hundred_thousand_section();

      }

      else


      cout <<"You lost, the correct answer is d. John Adams" << endl;

  }
}

else if (answer_fifty_thousand_section == "cc"){

       double call_hint;

  if (used_call_clue){

      cout <<"You already used that hint" << endl;

       }

   else{

      cout<<"You just selected the call hint" << "\n" << endl;
      cout << "Who do you wanna call?  ";
      cin >> call_hint;

       cout <<"I'm not sure, maybe d" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_fifty_thousand_section;

       used_call_clue=true;

       if (answer_fifty_thousand_section == "d" ){

       cout << "Congratulations, you just earn 50,000 dollars!" << endl;
       one_hundred_thousand_section();

     }

     else

     cout <<"You lost, the correct answer is d. John Adams" << endl;

  }

}

else if (answer_fifty_thousand_section == "50") {

  if (used_fifty_fifty){

    cout <<"You already used that hint" << endl;

  }

  else{

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "b. James Buchaman" << endl;
      cout << "d. John Adams"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_fifty_thousand_section;

      used_fifty_fifty=true;

        if (answer_fifty_thousand_section == "d" ){

        cout << "Congratulations, you just earn 50,000 dollars!" << endl;
        one_hundred_thousand_section();

      }

      else

      cout <<"You lost, the correct answer is d. John Adams" << endl;

    }
}

else {

      cout <<"You lost, the correct answer is d. John Adams" << "\n" << endl;

   }
}


void one_hundred_thousand_section () {

  string answer_one_hundred_thousand_section;

      cout << "Denmark has which type of government?" << "\n" << endl;
  		cout << "a. Republic"  << endl;
  		cout << "b. Democracy"  << endl;
  		cout << "c. Confederation of States"  << endl;
  		cout << "d. Kingdom"  << "\n" << endl;
      cin >> answer_one_hundred_thousand_section;

  if (answer_one_hundred_thousand_section == "d"){

      cout << "Congratulations, you just earn 100,000 dollars!" << endl;
      two_hundred_thousand_section();

 }

else if (answer_one_hundred_thousand_section== "p") {

  if (used_public_clue){

    cout <<"you already used that hint" << endl;

  }

  else{

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.20 %  b.11 % c. 34% d. 35%" << endl;
      cout <<"What is the answer?";
      cin >> answer_one_hundred_thousand_section;

      used_public_clue=true;

      if (answer_one_hundred_thousand_section == "d" ){

      cout << "Congratulations, you just earn 100,000 dollars!" << endl;
      fifty_thousand_section();

    }

    else

     cout <<"You lost, the correct answer is d. Kingdom" << endl;

  }
}

else if (answer_one_hundred_thousand_section == "cc"){

       double call_hint;

       if (used_call_clue){

         cout <<"you already used that hint" << endl;

       }

       else{

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       used_call_clue=true;

       cout <<"I'm not sure, maybe d" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_one_hundred_thousand_section;

    if (answer_one_hundred_thousand_section == "d" ){

      cout << "Congratulations, you just earn 100,000 dollars!" << endl;
      fifty_thousand_section();

    }

    else

    cout <<"You lost, the correct answer is d. Kingdom " << endl;

  }
}

else if (answer_one_hundred_thousand_section == "50") {

  if (used_fifty_fifty){

    cout <<"you already used that hint" << endl;

  }

  else{

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "c. Confederation of States" << endl;
      cout << "d. Kingdom"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_one_hundred_thousand_section;

      used_fifty_fifty=true;

      if (answer_one_hundred_thousand_section == "d" ){

      cout << "Congratulations, you just earn 100,000 dollars!" << endl;
      fifty_thousand_section();

    }

    else

      cout <<"You lost, the correct answer is d. Kingdom " << endl;

    }
}

else {

  cout <<"You lost, the correct answer is d. Kingdom" << "\n" << endl;

   }
}

void two_hundred_thousand_section () {

  string answer_two_hundred_thousand_section;

      cout << "What is a more formal way to greet someone in Polish?" << "\n" << endl;
  		cout << "a. Dobranoc"  << endl;
  		cout << "b. Dzien dobry"  << endl;
  		cout << "c. Przepraszam"  << endl;
  		cout << "d. Do widzenia"  << "\n" << endl;
      cin >> answer_two_hundred_thousand_section;

  if (answer_two_hundred_thousand_section == "b"){

      cout << "Congratulations, you just earn 200,000 dollars!" << endl;
      four_hundred_thousand_section ();

 }

else if (answer_two_hundred_thousand_section == "p") {

  if (used_public_clue){

    cout <<"you already used that hint" << endl;

  }

  else{

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.20 %  b.35 % c. 34% d. 11%" << endl;
      cout <<"What is the answer?";
      cin >> answer_two_hundred_thousand_section;
      used_public_clue=true;

      if (answer_two_hundred_thousand_section == "b" ){

      cout << "Congratulations, you just earn 200,000 dollars!" << endl;
      fifty_thousand_section();

    }

    else

    cout <<"You lost, the correct answer is b. Dzien dobry " << endl;

  }
}

else if (answer_two_hundred_thousand_section == "cc"){

       double call_hint;

       if (used_call_clue){

         cout <<"you already used that hint" << endl;

       }

       else{

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       used_call_clue=true;

       cout <<"I'm not sure, maybe b" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_two_hundred_thousand_section;

       if (answer_two_hundred_thousand_section == "b" ){

       cout << "Congratulations, you just earn 200,000 dollars!" << endl;
       fifty_thousand_section();

     }

       else

       cout <<"You lost, the correct answer is b. Dzien dobry " << endl;

  }
}

else if (answer_two_hundred_thousand_section == "50") {

  if (used_fifty_fifty){

    cout <<"you already used that hint" << endl;

  }

  else{

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "b. Dzien dobry" << endl;
      cout << "c. Przepraszam" << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_two_hundred_thousand_section;

      used_fifty_fifty=true;

      if (answer_two_hundred_thousand_section == "b" ){

      cout << "Congratulations, you just earn 200,000 dollars!" << endl;
      fifty_thousand_section();

    }

      else

      cout <<"You lost, the correct answer is b. Dzien dobry " << endl;

    }
}

else {

      cout <<"You lost, the correct answer is b. Dzien dobry" << "\n" << endl;
   }
}

void four_hundred_thousand_section () {

  string answer_four_hundred_thousand_section;

      cout << "In Greek mythology Clotho, Lachesis, and Atropos were what famed trio?" << "\n" << endl;
  		cout << "a. Graea, Servants of the Gorgons "  << endl;
  		cout << "b. Erinyes Or Furies "  << endl;
  		cout << "c. Moirae Or Fates"  << endl;
  		cout << "d. Harpies"  << "\n" << endl;
      cin >> answer_four_hundred_thousand_section;

  if (answer_four_hundred_thousand_section == "c"){

      cout << "Congratulations, you just earn 400,000 dollars!" << endl;
      eight_hundred_thousand_section ();

 }

else if (answer_four_hundred_thousand_section == "p") {

  if (used_public_clue){

    cout <<"you already used that hint" << endl;

  }

  else{

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.20 %  b.11 % c. 35% d. 34%" << endl;
      cout <<"What is the answer?";
      cin >> answer_four_hundred_thousand_section;

      used_public_clue=true;

      if (answer_four_hundred_thousand_section == "c" ){

      cout << "Congratulations, you just earn 400,000 dollars!" << endl;
      fifty_thousand_section();

    }

      else

      cout <<"You lost, the correct answer is c.  Moirae Or Fates" << endl;

  }
}

else if (answer_four_hundred_thousand_section == "cc"){

       double call_hint;

       if (used_call_clue){

         cout <<"you already used that hint" << endl;

       }

       else{

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       used_call_clue=true;

       cout <<"I'm not sure, maybe c" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_four_hundred_thousand_section;

       if (answer_four_hundred_thousand_section == "c" ){

       cout << "Congratulations, you just earn 400,000 dollars!" << endl;
       fifty_thousand_section();

     }

       else

       cout <<"You lost, the correct answer is c.  Moirae Or Fates" << endl;

  }
}

else if (answer_four_hundred_thousand_section == "50") {

  if (used_fifty_fifty){

    cout <<"you already used that hint" << endl;

  }

  else{

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "a. Graea, Servants of the Gorgons" << endl;
      cout << "c. Moira or Fates"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_four_hundred_thousand_section;

      used_fifty_fifty=true;

      if (answer_four_hundred_thousand_section == "c" ){

      cout << "Congratulations, you just earn 400,000 dollars!" << endl;
      fifty_thousand_section();

    }

      else

      cout <<"You lost, the correct answer is c.  Moirae Or Fates" << endl;

    }
}

else {

      cout <<"You lost, the correct answer is c. Moira or Fates" << "\n" << endl;

   }
}

void eight_hundred_thousand_section () {

  string answer_eight_hundred_thousand_section;

      cout << "Who was the history muse in Greek mythology?" << "\n" << endl;
  		cout << "a. Clio "  << endl;
  		cout << "b. Polyhymnia "  << endl;
  		cout << "c. Calliope"  << endl;
  		cout << "d. Erato"  << "\n" << endl;
      cin >> answer_eight_hundred_thousand_section;

  if (answer_eight_hundred_thousand_section == "a"){

      cout << "Congratulations, you just earn 800,000 dollars!" << endl;
      cout << "one more questions and you'll win 1 million dollars!" << "\n" << endl;
      one_million_dollar_section ();

 }

else if (answer_eight_hundred_thousand_section == "p") {

  if (used_public_clue){

      cout <<"you already used that hint" << endl;

  }

  else{

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.35 %  b.11 % c. 20% d. 34%" << endl;
      cout <<"What is the answer?";
      cin >> answer_eight_hundred_thousand_section;

      used_public_clue=true;

      if (answer_eight_hundred_thousand_section == "a" ){

      cout << "Congratulations, you just earn 800,000 dollars!" << endl;
      fifty_thousand_section();

    }

      else

      cout <<"You lost, the correct answer is a. Clio" << endl;

  }
}

else if (answer_eight_hundred_thousand_section == "cc"){

       double call_hint;

    if (used_call_clue){

       cout <<"you already used that hint" << endl;

       }

    else{

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       used_call_clue=true;

       cout <<"I'm not sure, maybe a" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_eight_hundred_thousand_section;

       if (answer_eight_hundred_thousand_section == "a" ){

       cout << "Congratulations, you just earn 800,000 dollars!" << endl;
       fifty_thousand_section();

     }

       else

       cout <<"You lost, the correct answer is a. Clio" << endl;
  }
}

else if (answer_eight_hundred_thousand_section == "50") {

  if (used_fifty_fifty){

    cout <<"you already used that hint" << endl;

  }

  else{

      cout<<"You just selected the 50/50 hint" << "\n" << endl;
      cout << "a. Clio" << endl;
      cout << "b. Polyhymnia"  << endl;
      cout <<"What is the answer?" << endl;
      cin >> answer_eight_hundred_thousand_section;

      used_fifty_fifty=true;

      if (answer_eight_hundred_thousand_section == "a" ){

      cout << "Congratulations, you just earn 800,000 dollars!" << endl;
      fifty_thousand_section();

    }

      else

      cout <<"You lost, the correct answer is a. Clio" << endl;

    }
}

else {

      cout <<"You lost, the correct answer is a. Clio" << "\n" << endl;

   }
}

void one_million_dollar_section () {

  string answer_one_million_dollar_section;

      cout << "What year did McCarthy begin his anti-communist witch hunt?" << "\n" << endl;
  		cout << "a. 1904 "  << endl;
  		cout << "b. 1931 "  << endl;
  		cout << "c. 1950"  << endl;
  		cout << "d. 1953"  << "\n" << endl;
      cin >> answer_one_million_dollar_section;

  if (answer_one_million_dollar_section == "c"){

      cout << "CONGRATULATIONS!!! YOU WON 1 MILLION DOLLARS!!!" << endl;
      cout << "You are very smart!!!!!!!!!!" << endl;

 }

else if (answer_one_million_dollar_section == "p") {

  if (used_public_clue){

    cout <<"you already used that hint" << endl;

  }

  else{

      cout<<"You just selected the public hint" << "\n" << endl;
      cout << "a.20 %  b.11 % c. 35% d. 34%" << endl;

      used_public_clue=true;

      cout <<"What is the answer?";
      cin >> answer_one_million_dollar_section;

       if (answer_one_million_dollar_section == "c" ){

         cout << "CONGRATULATIONS!!! YOU WON 1 MILLION DOLLARS!!!" << endl;
         cout << "You are very smart!!!!!!!!!!" << endl;

     }

       else

        cout <<"You lost, the correct answer is c. 1950" << endl;

  }
}

else if (answer_one_million_dollar_section == "cc"){

       double call_hint;

       if (used_call_clue){

         cout <<"you already used that hint" << endl;

       }

       else{

       cout<<"You just selected the call hint" << "\n" << endl;
       cout << "Who do you wanna call?  ";
       cin >> call_hint;

       used_call_clue=true;

       cout <<"I'm not sure, maybe c" << endl;
       cout <<"What is the answer?" << endl;
       cin >> answer_one_million_dollar_section;

       if (answer_one_million_dollar_section == "c" ){

         cout << "CONGRATULATIONS!!! YOU WON 1 MILLION DOLLARS!!!" << endl;

     }

       else

         cout <<"You lost, the correct answer is c. 1950" << endl;

         used_call_clue=true;
  }
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

      if (answer_one_million_dollar_section == "c" ){

        cout << "CONGRATULATIONS!!! YOU WON 1 MILLION DOLLARS!!!" << endl;

    }

      else

        cout <<"You lost, the correct answer is c. 1950" << endl;

      }

        cout <<"What is the answer?" << endl;
        cin >> answer_one_million_dollar_section;
  }

else {

      cout <<"You lost, the correct answer is c. 1950" << "\n" << endl;

   }
}
