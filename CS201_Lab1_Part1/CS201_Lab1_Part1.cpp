// CS201Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    //There is a logic error in this program. 
    //Correct this error, test your changes, and commit the changes
    int guess = 0, solution = 15;
    char answer = 'y';
    cout << "Would you like to play? ";
    cin >> answer;
    while (answer != 'n') {
        cout << "Enter your guess between 0 & 50: ";
        cin >> guess;
        if (guess > solution) {
            cout << "sorry - your guess is too big\n";
        }
        else
            cout << "sorry - your guess is too low\n";

        cout << "Guess again? ";
        cin >> answer;

    }
}