#include <iostream>
#include <string>

using namespace std;

int main()
{
    int rows;
    cout << "Enter Rows: ";
    cin >> rows;

    // Loop to go at the next line when inner loop get completed.
    for(int index = 1; index <= rows; index++)
    {
        //loop to print asterisk*
        for (int j = 1; j <= index; j++){
            cout << "* ";
        }
        cout << endl;
    }

    
    return 0;
}