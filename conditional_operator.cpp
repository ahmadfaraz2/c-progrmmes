/*
Conditional Operators are different than If else 
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a , b;
    int soldiers = 5;
    int tanks = 10;
    int max = (b>a) ? b : a;
    int min = (b<a) ? b : a;

    cout << "The largest value is: " << max << endl;
    cout << "The smallest value is: " << min << endl;

    return 0;
}