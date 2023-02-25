#include <iostream>
#include <string>

using namespace std;

int main(){
    int buddies;
    int afterBattle;
    string exit;

    cout << "You are a pirate and are walking"
        << " along in the crime filled \n"
        << "city of Havana (in 1789)."
        << "How many of your pirate buddies \n"
        << "do you bring along? (Any number between 11 and 115): ";

    //records the amount of friends you bring along
    cin >> buddies;

    // calculate the amount of pirates left after the battle.
    afterBattle = 1 + buddies - 10;

    cout << "The fallen drop a total of 107 gold coins. \n"
            << "The bounty is split evenly, which works ou to "
            << (107 / afterBattle) << " gold coins \n"
            << "for each survivor. Leaving ";
    cout << (107 % afterBattle) << " unclaimed coins.\n"
            << "How many of you pirates buddies \n"
            << "do you birng along? (Any number between 11 and 115)\n";
    cout << "You and the others argue over who should get the extra \n"
            << "coins. and soon a big drunken brawl breaks out!\n\n";
    cout << "In the end. you are triumphant and "
            << (107 / afterBattle) + (107 % afterBattle)
            << " coins richer!\n\n";
    return 0;

}