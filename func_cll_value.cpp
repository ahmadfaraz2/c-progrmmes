#include <iostream>

using namespace std;

void square(int x)
    {
        x = x * x;
        cout << "The square of the number is: " << x << endl;
    }

int main()
{
    int num = 5;
    square(num);
    cout << "The original number is still: " << num << endl;

    return 0;
}