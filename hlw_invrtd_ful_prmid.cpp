#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Enter Rows: ";
    cin >> rows;

    //for(int i=1; i<=rows; i++)  
    for(int i=rows; i>=1; i--) //inverted
    {
        for(int j=1; j<=rows-i; j++)
        {
            cout << "  "; 
        }
        for(int k=1; k<=2*i-1; k++)
        {
            if(k==1 || i==rows || k==2*i-1)
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