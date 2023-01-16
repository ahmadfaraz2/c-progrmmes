#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    cout << "Welcome to the weapon store, noble knight."
        << " Come to equip the army again?\n"
        << "What is you name? :";
    cin >> name;
    
    cout << "Well then, Sir " << name 
        << ", let's get shopping\n";

    typedef double d;
    d gold = 50.0;
    int silver = 8;
    const d SILVERPERGOLD = 6.7;
    const d BROADSWORDCOST = 3.6;
    unsigned short broadswords;
    cout << "You have " << gold << " gold pieces and "
        << silver << " silver." << "\nThat is equal to ";
    gold +=silver / SILVERPERGOLD;
    cout << gold << " gold.\n";
    cout << "How many broadswords would you like to buy? :"
        << " (3.6 gold each)";

    cin >> broadswords;
    gold = gold - broadswords * BROADSWORDCOST;

    cout << "\nThank You. You have " << gold << " left.\n";
    silver = (int)(gold - (int)gold) * SILVERPERGOLD;
    gold = (double)((int)(gold));

    cout << "That is equal to " << gold << " gold and "
        << silver << " silver. \n"
        << "Thank you for shopping at the Weapon Store. "
        << "Have a nice day, Sir " << name <<".\n";

    return 0;            
}
