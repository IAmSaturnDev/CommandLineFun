#include <iostream>
#include "games.hpp"

using namespace std;

void games() {
  cout << "Games: hello, random, yeetfuel, friend, exit, num, repeat" << endl;
}


int main() {
    string game;
    while (true) {
        cout << "Enter game: "; cin >> game;

        if (game == "hello") {
          helloWorld();
        }

        if (game == "random") {
          randomNumGame();
        }

        if (game == "yeetfuel") {
          cout << "Yeetfuel!\n";
        }

        if (game == "friend") {
          buddy();
        }

        if (game == "exit") {
          break;
        }
        if (game == "games") {
          games();
        }

        if (game == "num") {
          favNum();
        }

        if (game == "repeat") {
          repeat();
        }
    }
    
}

// hello world!!