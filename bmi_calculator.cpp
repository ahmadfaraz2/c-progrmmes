#include <iostream>
#include <string>

using namespace std;

int main(){

    float weight, height, bmi;

    cout << "Enter you weight (in kg): ";
    cin >> weight;

    cout << "Enter you height (in meter): ";
    cin >> height;

    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;

    return 0;
}