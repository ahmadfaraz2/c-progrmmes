#include <iostream>
#include <string>

using namespace std;

int main(){
    unsigned int unInt = 4294967295;
    signed short aShort = 32767;

    cout << "Unsigned int's value is: " << unInt << endl;
    cout << "Short's value is: " << aShort << endl;

    unInt++; 
    aShort++;

    cout << "\nUnsigned int's new value is: " << unInt << endl;
    cout << "Short's new value is: " << aShort << endl;
    

    return 0;
}