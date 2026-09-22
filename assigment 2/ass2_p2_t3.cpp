#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;

    cout << "Enter a menu option from 1 to 10\n";

    do {
        cout << "Enter a number: ";
        cin >> number;
    }
    while (number < 1 || number > 10);
    cout << "accepted option: " << number;

}