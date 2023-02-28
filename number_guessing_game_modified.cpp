#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    int minNum, maxNum;
    cout << "Welcome to number guessing game!!! \n";

    cout << "Picked a Low number: ";
    cin >> minNum;

    cout << "Picked a High number: ";
    cin >> maxNum;

    cout << "Player 1) have picked a number between " << minNum << " and " << maxNum << endl;

    srand((unsigned int)time(0));

    //rand() % (max - min + 1) + min;
    int pickedNum = rand() % (maxNum - minNum + 1) + minNum;
    int guess = 0;
    int guessNum;

    for (guessNum = 0; guess != pickedNum; guessNum++)
    {
        cout << "What would you like to guess? \n";
        cin >> guess;

        if (guess < pickedNum)
        {
            cout << "\nYou guessed too low!!\n \n";
        }
        else if (guess > pickedNum)
        {
            cout << "\nYou guessed too high!!\n \n";
        }
    }

    cout << "\nYou guessed it!!! \nIt took you "
        << guessNum << " guesses";
        
    return 0;
}