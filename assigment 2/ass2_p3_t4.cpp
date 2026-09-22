#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;

    cin >> number;

    for (int i = 1; i <= 10; i++){
        cout << "\n" << number << " * " << i << " = " << number * i;
    }
}