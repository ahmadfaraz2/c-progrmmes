#include <iostream>
#include <string>

using namespace std;

int main(){

    int some_number;
    cout << "Enter a number: ";
    cin >> some_number;

    if(some_number >= 1 && (some_number % 3 == 0)){
        cout << some_number * 2 << endl;
    }
    else if(some_number >= 1 && some_number <= 100 && !(some_number % 3 ==0)){
        cout << some_number * 3 << endl;
    }
    else if(!(some_number >= 1 && some_number <= 100)){
        some_number = some_number * some_number % 3;
    }

    cout << "The final result is "<< some_number << "\n";
    return 0;
}