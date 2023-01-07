#include <iostream>
#include <string>

using namespace std;

int main(){

    string reg_username, lgn_username;
    int reg_password, lgn_password;

    cout << "-----------------Welcome to our Website---------------" << endl;
    cout << "Register Here"<< endl;

    cout << "Your Username: ";
    cin >> reg_username;

    cout << "Your Password: ";
    cin >> reg_password;

    cout << "Now Login to website."<< endl;

    cout << "Enter username: ";
    cin >> lgn_username;

    cout << "Enter password: ";
    cin >> lgn_password;


    if (reg_username == lgn_username && reg_password == lgn_password){
        cout << "You are successfully loged in.";
    }
    else {
        cout  << "Invalid Information";
    }
    

    return 0;
}