#include <iostream>

using namespace std;

inline int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 4, b = 5;

    int result = add(a, b);
    
    cout << "The result is: " << result << endl;

    return 0;
}