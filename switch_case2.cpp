/*
In this we learn about "default".

The "default" statement is just like the "case" statement
except that there is no value to test.

"default" provide the equivalent of an "else" statement for the
"switch" statement. 
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
        default:
            cout << "\nYou chose " << choice << endl;
    }
    return 0;
    
}
