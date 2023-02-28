/*

--------------for loop concepts and working-------------

Syntax:
    for (initialization, condition, expression)
    {
        controlledStatements;
    }

The order in which things are executed in the
for loop:
    1) Execute "initalization" statement
    2) Test the "condition"
    3) Execute "controlledStatements"
    4) Execute "expression"



--> Note that placing and "expression (count++)"" at the end
    of "controlledStatements" is equivalent to placing it
    in the "expression"

*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    for (int count = 0; count < 10; count++)
    {
        cout << count << endl;
    }
    return 0;
}