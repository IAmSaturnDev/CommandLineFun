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

  while (true) {
    cout << "I AM YOUR FRIEND AND YOU WILL BE MY FRIEND OR ELSE.\n\n";
    cout << "DO YOU AGREE (y/n) "; cin >> buddy;

    if (answer == "y") {
      cout << "Yay!!\n";
      break;
    }

    if (answer == "n") {
      while (true) {
        cout << "BIG MISTAKE\n\n";
      }
    }
  }
}