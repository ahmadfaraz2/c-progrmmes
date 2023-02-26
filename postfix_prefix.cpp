/*
In this we will learn about postfix and prefix.

Postfix:
    the operation(++) is applied to the operand after it
    is retreived.
Prefix:
    the operation(++) is applied before the value of the
    operand is retreived.      
*/



/*
Here is an Example:

int x = 5;
int y = 6;
int z = y++;  // z = 6, y = 7
z = ++x;  // z = 6, x = 6

*/


#include <iostream>

using namespace std;

int main()
{
    int var1 = 0, var2 = 0;

    cout << var1++ << endl;   // 0
    cout << ++var2;   // 1

    return 0;
}