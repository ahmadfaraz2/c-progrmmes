#include <iostream>

using namespace std;

//demonstrats what happens when you derefrence a pointer
int main()
{
    int varN = 9;
    int *ptr = &varN;

    cout << "varN value: " << varN << endl;
    cout << "*ptr value: " << *ptr << endl;
    cout << "Address of varN: " << &varN << endl;

    return 0;
}

/*
acha mujy is sy pta kya smg i hai.
pointer ko unique bnany k liy hum * lagty hain
ager hum ny kisi variable ko pointer mai store karwany hai to hum variable sy phly (&) ampersand lga dyn gy.
aur simplte & use kar k us ka address dyk skty hain.
*/