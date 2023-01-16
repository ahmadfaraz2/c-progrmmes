//calculates the area and circumference of a circle
#include <iostream>
#include <string>

using namespace std;

int main(){

    //typedef enables you to create a new name for a data_type.
    typedef double d;

    const d pi = 3.141592;
    d radius, circumference, area;
    cout << "Welcome to circle creator!" << endl;
    cout << "What would you like the radius of the circle to be? :";
    cin >> radius;

    area = pi * radius * radius;
    circumference = pi * (radius * 2);

    cout << "The area of the circle is: " << area << endl;
    cout << "The cicumference of the circle is: "<< circumference << endl;
    cout << "Thank you for playing the circle creation game!" << endl;
    return 0;

}