/*
To generate random numbers we use two different libraries
 1) ctime
 2) cstdlib

We use srand() (seed random) function and time() function


--> In order to generate a random number between two other 
    numbers, we use this formula:

       >> rand() % (max - min + 1) + min;

For example to genarate a number between 10 and 20, we
use formula like this:

>> int num = rand() % (20 - 10 + 1) + 10;

*/


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    int num = rand() % (30 - 2 + 1) + 2;
    cout << num << endl;

    cout << "---Generation random numbers through for loop----" << endl;

    for (int index = 0; index < 5; index++)
    {
        int ran = rand() % (50 - 20 +1 ) + 20;
        cout << ran << endl;
        //cout << "|   "<< ran << "  |" << endl;
    }

    return 0;
}