#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;
    int first;
    int second;

    cout << "===== Calculator ====="
    "\n1. Addition"
    "\n2. Subtraction"
    "\n3. Multiplication"
    "\n4. Division";

    cout << "\nChoose an operation: ";
    cin >> number;

    if (number < 1 || number > 4){
        cout << "Error";
        return 0;
    }

    cout << "Enter first number: ";
    cin >> first;

    cout << "Enter second number: ";
    cin >> second;

    switch (number){
        case 1:
            cout << "\nResult: " << first + second;
            break;
        case 2:
            cout << "\nResult: " << first - second;
            break;
        case 3:
            cout << "\nResult: " << first * second;
            break;
        case 4:
            if (first && second != 0){
                cout << "\nResult: " << double(first) / double(second);
            } else{
                cout << "Error";
            }
            break;
        default:
            cout << "Error";
            break;
    }
}