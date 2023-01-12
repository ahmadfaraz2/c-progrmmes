#include <iostream>
#include <string>

using namespace std;

int main(){

    int num1;

    cout << "Enter a Number: ";
    cin >> num1;

    if(num1%2==0){
        cout << num1 << " is even number.";
    }
    else{
        cout << num1 << " is odd number.";
    }

    return 0;



}