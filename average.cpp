#include <iostream>
#include <string>

using namespace std;

int main(){

    int num1, num2, num3, num4, num5, sum;
    float avg;

    cout << "Enter a first Number: ";
    cin >> num1;

    cout << "Enter a second Number: ";
    cin >> num2;

    cout << "Enter a third Number: ";
    cin >> num3;

    cout << "Enter a forth Number: ";
    cin >> num4;

    cout << "Enter a fifth Number: ";
    cin >> num5;

    sum = (num1 + num2 + num3 + num4 + num5);

    cout << "The sum of Numbers is: " << sum << endl;
    
    avg = sum/5;

    cout << "The Average of given Numbers is: " << avg << endl;

    return 0;

}