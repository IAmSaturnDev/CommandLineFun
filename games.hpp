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