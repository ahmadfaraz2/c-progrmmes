#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Enter Rows: ";
    cin >> rows;

    for(int i=rows; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==1 || i==rows || j==i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}