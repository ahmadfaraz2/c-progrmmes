/*
Theme:
    This program works by randomly picking a number from
    1 to 100.
    The user must guess the number, and the program tells
    the user whether the number is too high, too low, or 
    the right one.
    When the user guess the number, the program exits,
    telling the user how many guesses it took to get the 
    right number.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    cout << "Welcome to the number guessing game!!! \n"
        << "I have picked a number between 1 and 100. \n \n";

    srand((unsigned int)time(0));

    int numPicked = rand() % (100 - 1 + 1) + 1; //stores the random number
    int guess = 0; //Stores the number the user guessed
    int guessNum; //Stores the number of guesses

    for (guessNum = 0; guess != numPicked; guessNum++)
    {
        cout << "What would you like to guess? \n";
        cin >> guess;
        if (guess < numPicked)
        {
            cout << "\nYou guessed too low!!!\n \n";
        }
        else if (guess > numPicked)
        {
            cout << "\nYou guessed too high!!!\n \n";
        }
    }
    cout << "\nYou guessed it!!! \nIt took you "
        << guessNum << " guesses.";

    return 0;    
}


/*

modify this program so player 1 able to pick two number instead of hardcoding it.

Hint: 
     int numPicked = rand() % (highNum - lowNum + 1) + lowNum;
*/