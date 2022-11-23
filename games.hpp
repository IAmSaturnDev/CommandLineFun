#include <cstdlib>
#include <iostream>
#include <random>

using namespace std;

void randomNumGame() {
  int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 100 + 1;

	do {
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);
    
}

void helloWorld() {
  cout << "Hello world!\n";
}

void buddy() {
  string name;
  string answer;
  cout << "Hello whats your name? "; cin >> name;
  cout << "Hello, " << name << "!\n";
  cout << "I AM YOUR FRIEND AND YOU WILL BE MY FRIEND.\n";
  while (true) {
    cout << "DO YOU AGREE (y/n) "; cin >> answer;

    if (answer == "y") {
      cout << "Yay!!\n";
      break;
    }

    if (answer == "n") {
      int anger = 0;
      
      while (true) {
        cout << "BIG MISTAKE\n\n";
        anger++;

        if (anger < 200) {
          break;

          cout << "THATS IT.\n";
          cout << "IF YOU DONT AGREE TO BE MY FRIEND...\n";
          cout << "I WILL KILL YOU\n\n";
          string FINAL;
          cout << "DO YOU AGREE? THIS IS YOUR LAST CHANCE.\n";
          cin >> FINAL;

          if (FINAL == "y") {
            cout << "GOOD\n";
            cout << "I WILL LET YOU GO.\n";
            cout << "On one condition...\n";

            string huh;

            cout << "Am I a good friend? ";

            cin >> huh;

            if (huh == "y") {
              cout << "Awww thanks I will now let you go.\n\n";
            }

            if (huh == "n") {
              cout << "THATS IT.\n";

              while (true) {
                cout << "I AM DONE WITH YOU!!!!\n\n";
              }
            }
          if (FINAL == "n") {
            cout << "GOOD NIGHT.\n";

            while (true) {
              cout << "SWEAT DREAMS\n";
            }
          }
          }
        }
      }
    }
  }
}


void favNum() {
  int num;
  cout << "What is your favorite number: "; cin >> num;

  for (int i = 0; i < num; i++) {
    cout << i << endl;
  }
}


void repeat() {
  string repeatedWord;

  cin >> repeatedWord;

  cout << repeatedWord << endl;
}