#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    int num1, num2;

    cout << "Enter your name: ";
    cin >> name;
	cout << "------Sum of two numbers--------"<< endl;

    cout << "Enter a first number: ";
    cin >> num1;
    cout << "Enter a second number: ";
    cin >> num2;

    cout << "Hi, " << name << " \n";
    cout << "Sum of two number: " << num1 + num2;

    return 0;
}
