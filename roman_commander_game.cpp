#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{

    srand((unsigned int)time(0)); //seed teh random number generator

    string name; //used to store the player's name

    bool end = false;  //used to test if the user chose to quit
    bool lost; //used to test if the user lost the game

    int menu_choice; //stores the user's choice from the menu

    //units that the player starts with 

    int archers = 50;
    int catapults = 25;
    int swordsmen = 100;

    //uints that the Germanians start with (random)
    // random number between 70 and 20
    // rand() % (max - min + 1) + min
    int g_archers = rand() % (70 - 20 + 1) + 20;   // between 70 and 20
    int g_catapults = rand() % (50 - 20 + 1) + 20;  // between 50 and 20  
    int g_swordsmen = rand() % (150 - 50 + 1) + 50; // between 150 and 50

    //stores which numbers correspond to which menu choices
    int archers_menu, catapults_menu, swordsmen_menu;
    int fight_menu;

    cout << "Welcom Adventurer, what is you name?\n";
    cin >> name;

    cout << "\nWell, " << name 
        << " welcome to the Roman Commander Game.\n"
        << "\nYou are the commander of the Roman Army attacking Germania.";


    //main Game loop
    while(!end)
    {
        //variables to store how many units the player sends
        int archers_sent = 0, catapults_sent = 0, swordsmen_sent = 0;

        cout << "\nYou have " << archers << " arhchers, " << catapults
            << " catapultes and " << swordsmen << " swordsmen.\n"
            << "\nGermania has " << g_archers << " archers. "
            << g_catapults << " catapults and " << g_swordsmen
            << " sowrdsmen.\n\n";

        do //prebattle loop
        {
            //keeps track of which menu numbers are being used 
            int i = 1;
            if (archers > 0 && ((archers - archers_sent) != 0))
            {
                archers_menu = i;
                cout << "[" << i << "] Send Archers\n";
                i++;
            }
            else
            {
                archers_menu = 0;
            }

            if (catapults > 0 && ((catapults - catapults_sent) != 0))
            {
                catapults_menu = i;
                cout << "[" << i << "] Send Catapults\n";
                i++;
            }
            else
            {
                catapults_menu = 0;
            }
            
            if (swordsmen > 0 && ((swordsmen - swordsmen_sent) != 0))
            {
                swordsmen_menu = i;
                cout << "[" << i << "] Send Swordsmen\n";
                i++;
            }
            else
            {
                swordsmen_menu = 0;
            }


            fight_menu = i;
            cout << "[" << i << "] Go Fight\n";
            cout << "Enter the choice option : ";
            cin >> menu_choice;

            if (menu_choice == archers_menu)
            {
                do
                {
                    cout << "\nHow many archers would you "
                        << "like to send?\n";
                    cin >> archers_sent;
                }
                while (!(archers_sent > -1 && archers_sent <= archers));
            }
            else if (menu_choice == catapults_menu)
            {
                do {
                    cout << "\nHow many catapults would you "
                        << "like to send?\n";
                    cin >> catapults_sent;
                }
                while (!(catapults_sent > -1 && catapults_sent <= catapults));
            }
            else if (menu_choice == swordsmen_menu)
            {
                do
                {
                    cout << "\nHow many swordsmen would you "
                        << "like to send?\n";
                    cin >> swordsmen_sent;
                }
                while (!(swordsmen_sent > -1 && swordsmen <= swordsmen));
            }

        }
        while (menu_choice != fight_menu); //end pre-battle loop

        cout << "\nEntering Battle....\n";
        int archers_dead, catapults_dead, swordsmen_dead;
        int g_archers_dead, g_catapults_dead, g_swordsmen_dead;


        //each catapult kills 2 archers
        archers_dead = 2 * g_catapults;

        //each swordsman kills 1 catapult
        catapults_dead = g_swordsmen;

        //each archer kills 3 swordsmen
        swordsmen_dead = 3 * g_archers;

        g_archers_dead = 2 * catapults_sent;
        g_catapults_dead = swordsmen_sent;
        g_swordsmen_dead = 3 * archers_sent;


        //makes sure that the number of units does not go below 0.
        archers = (archers_dead < archers) ? archers - archers_dead : 0;
        catapults = (catapults_dead < catapults) ? catapults - catapults_dead : 0;
        swordsmen = (swordsmen_dead < swordsmen) ? swordsmen - swordsmen_dead : 0;


        g_archers = (g_archers_dead < g_archers) ? g_archers - g_archers_dead : 0;
        g_catapults = (g_catapults_dead < g_catapults) ? g_catapults - g_catapults_dead : 0;
        g_swordsmen = (g_swordsmen_dead < g_swordsmen) ? g_swordsmen - g_swordsmen_dead : 0;


        cout << "It was a long battle.\n"
            << "Total:\n"
            << archers_dead << " archers died.\n"
            << catapults_dead << " catapults died.\n"
            << swordsmen_dead << " swordsmen died.\n";    

        //if player's army is dead then they have lost
        if ((archers + catapults + swordsmen) == 0)
        {
            end = lost = true;
        } 
        //if Germanium army is dead, player has won
        else if ((g_archers + g_catapults + g_swordsmen) == 0)
        {
            end = true;
            lost = false;
        }  
    } // end of main game loop 

    //Display appropriate ending message
    if (lost)
    {
        cout << "\nYou lost. Try again next time.\n";
        return 0;
    }
    cout << "\nCongratulaions, you won!!\n";

    return 0;    

}