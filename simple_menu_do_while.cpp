/*
The do while loop is like the while loop, except that the condition
is tested after the iteration is finished. In this way,
the loop will always execute at least once.
*/



#include <iostream>

using namespace std;

int main()
{
    cout << "Your party is Adventuring "
        << "through hills outside of Que'll \n"
        << "when suddenly you are ambushed by rogues!!! \n \n";

    int response = 0;

    do
    {
        cout << "What action would you like to take? \n"
            << " 1) Attack the evil rogues!!! \n"
            << " 2) Run from the onslaught \n"
            << " 3) Try to talk to rogues \n";

        cin >> response;    
    }
    while (response < 1 || response > 3);

    if (response == 1)
    {
        cout << "The battle drags into night "
            << "and by sunset no one knows \n"
            << "who is sitll alive!\n";
    }
    else if (response == 2)
    {
        cout << "You run from the rogues into "
            << "the trees never to see them again.\n";
    }
    else 
    {
        cout << "You try talking to them "
            << "but they seem unlikely to listen. \n"
            << "They take all your money "
            << "and depart happy and you poor.\n ";
    }
    return 0;

}
