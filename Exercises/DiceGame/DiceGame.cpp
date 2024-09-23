// DiceGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    bool isPlaying = 1; int playerChoose;
    while(isPlaying){
        cout << "Hello please guess a number on 6 side dice \n";
        cin >> playerChoose;

        int rollDice;
        rollDice = 1 + rand() % 6;
        if (playerChoose == rollDice) {
            cout << "Good Guess Cheers! \n";
            cout << "Type 1 if you want to play again 0 otherwise \n";
            cin >> isPlaying;
        }
        else {
            cout << "Sorry ;( \n";
            cout << "Type 1 if you want to play again 0 otherwise \n";
            cin >> isPlaying;
        }
    
    
    }
    
}

