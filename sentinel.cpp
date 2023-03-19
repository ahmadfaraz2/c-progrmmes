#include <iostream>

using namespace std;

int main()
{
    int sentinel_value = -1;

    int num = 0;

    while (num != sentinel_value)
    {
        cout << "Enter a number (-1 to quite): ";
        cin >> num;

        if (num != sentinel_value)
        {
            cout << "You entered: " << num << endl;
        }
    }

    cout << "Goodbye" << endl;

    return 0;
}