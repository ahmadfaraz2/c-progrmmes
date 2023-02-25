#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Welcome to the Three Tests of Honour."
        << "\nAn Evil wizard has kidnapped a damsel and "
        << "it is up to you to rescue her."
        << "\nHe says you must pass the three tests of "
        << "honour in his Labyrinth of Doom.";

    bool goldTaken, diamondsTaken, killedByDragon;

    cout << "\n\nYou enter the first room."
        << "\nIt is full of so much gold you can hardly believe it."
        << "\nDo you take the gold (1 for Yes, 0 for No)? ";

    cin >> goldTaken;

    if (goldTaken)
    {
        cout << "\nYou keep the gold. "
            << "but you have failed the first test. "
            << "\nGame Over.\n\n";
    }
    else {
        cout << "Congratulations. "
            << "you have passed the first test of honour!"
            << "\n\nYou move into the second room."
            << " It is full of sparking diamonds"
            << "\nDo you take the diamonds (1 for Yes, 0 for No)? ";
        cin >> diamondsTaken;
        if (diamondsTaken)
        {
            cout << "You take the diamonds, "
                << "but you have failed the second test."
                << "\nYou have proven your greed. "
                << "\nGame Over.\n\n";        
        }
        else {
            cout << "Congratulations, you have "
                << "passed the frist and second test of honour."
                << "\n\nYou enter the third room. "
                << "\nA poor peasant is being attacked "
                << "by a dragon! \nDo you ignore the peasant and "
                << "move on (1 for Yes, 0 for No)? ";
            cin >> killedByDragon;
            if (killedByDragon)
            {
                cout << "\nAs you sneak by, "
                    << "the dragon turns his attention to you."
                    << "\nHe burns you to a crisp "
                    << "with one breath. You are dead."
                    << "\nGame Over.\n\n";    
            }
            else {
                cout << "Congratulations, you "
                    << "have passed all three tests!\n\n"
                    << "You exit th labyrinth and "
                    << "confront the evil wizard.\n\n"
                    << "He tries to turn you into a frog, "
                    << " but you manage to evade.\n"
                    << "Wit one swing of your sword it is over.\n\n"
                    << "You and the damsel live "
                    << "happily ever after.\n\nThe End.\n\n";
            }
        }
    }        
    return 0;

}