#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Output: " << ((number % 2 == 0) ? "Even" : "Odd");
}