// Calculate and display the size of all fundamental types.
#include <iostream>
#include <string>

using namespace std;

int main(){
    int numbers;
    short int short_numbers;
    long int long_numbers;

    float floating_numbers;
    double large_float_numbers;

    string sqnce_of_characters;
    char single_characters;


    cout << "The size of 'int' datatype is: " << sizeof(numbers) << endl;
    cout << "The size of 'short' datatype is: " << sizeof(short_numbers) << endl;
    cout << "The size of 'long' datatype is: " << sizeof(long_numbers) << endl;

    cout << "The size of 'float' datatype is: " << sizeof(floating_numbers) << endl;
    cout << "The size of 'double' datatye is: " << sizeof(large_float_numbers) << endl;

    cout << "The number of bytes 'string' datatype store is: " << sizeof(sqnce_of_characters) << endl;
    cout << "The number of bytes 'char' datatype store is: " << sizeof(single_characters) << endl;

    return 0;

}