/*

A multiplication table using nested for loop

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "A multiplication table:\n"
        << "1\t2\t3\t4\t5\t6\t7\t8\t9\n"
        << "----------------------------------------------------------------" << endl;

    for (int count = 1; count < 10; count++)
    {
        cout << count << "| ";
        for (int index = 1; index < 10; index++)
        {
            cout << count * index << "\t";
        }
        cout << "\n";
    }
    return 0;    
}