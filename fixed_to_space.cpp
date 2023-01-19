#include <iostream>
using namespace std;

int main() {
    int num, digit;

    cout << "Enter a 3-digit integer: ";
    cin >> num;

    // Extracting each digit from the number
    // First spaceing first number by whitespace
    digit = num / 100;
    cout << digit << " ";
    num = num % 100;

    // Now spaceing second number by whitespace
    digit = num / 10;
    cout << digit << " ";
    num = num % 10;

    // Displaying numbers by space
    digit = num;
    cout << digit << endl;

    return 0;
}
