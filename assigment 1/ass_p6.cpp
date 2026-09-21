#include <iostream>
#include <string>
using namespace std;

int main(){
    string username;
    string pwd;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> pwd;

    if (username == "admin"){
        if (pwd == "12345"){
            cout << "Login successful!";
        } else{
            cout << "Incorrect password.";
        }
    } else{
        cout << "Incorrect username.";
    }
}