#include <iostream>
#include <string>

using namespace std;

int main(){
    /*Basically sizeof() operator tells the size a vriable can store in bytes.
    Here is the example*/

    //Syntax:
    //       sizeof(identifier);

    double aDouble;
    cout << "The size of a double is " << sizeof(aDouble) << endl; // 8

    // You can use in that way
    cout << "The size of 2 integers is " << 2 * sizeof(int) << endl;
}