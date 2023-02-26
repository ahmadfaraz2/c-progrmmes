/*
In this we are expoloring what happen If we use "break"
or empty our "case" statements.

Try it.
*/

#include <iostream>

using namespace std;

int main()
{

    int choice;
    cout << "Please enter a number: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        case 2:
        case 3:
            cout << "You chose 1, 2, or 3.\n";
            break;
        case 4:
            cout << "You chose 4!\n";
        case 5:
            cout << "You chose 4 or 5.\n";
            break;        
    }

    return 0;
}