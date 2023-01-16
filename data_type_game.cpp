#include <iostream>
#include <string>

using namespace std;

int main(){
    int intWarriors;
    double doubleWarriors;
    float floatWarriors;

    cout << "The village of elves is being attacked by dragons. ";
    cout << "In order to save them, you must create each kind of "
        << "data type warrior to defend the elven city. \n\n";
    cout << "How many int warriors do you want send out? :";
    cin >> intWarriors;

    cout << "\nLuckily, eacht int warrior has strength of "<<
    sizeof(intWarriors) << ", \nwhich almost defeats the "<< 
    "blue dargons.\n";

    cout << "\nQuick! How many double warriors should we send? :";
    cin >> doubleWarriors;
    cout << "\n" << doubleWarriors;
    cout << " double warriors attack the last few blue dragons. \n"
        << "They kill " << sizeof(doubleWarriors) << " blue dragons."
        << "All of the blue dragons are now dead. \n\n";
    cout << "How many float warriors do you send out? :";
    cin >> floatWarriors;
    cout << "\nEach of the "<< floatWarriors << " float warriors shoots ";
    cout << sizeof(floatWarriors) << " arrows.\n";
    cout << "This is just enough to kill the green dragons.\n";
    cout << "Congratulations, you have saved the elves!\n";

    return 0;
}