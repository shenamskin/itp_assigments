#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;
    int i = 0;

    cout << "enter the number";
    cin >> number;

    if (number < 0){
        cout << "number is negative error";
        return 0;
    }

    while (number != i){
        i += 1;
        cout << "\n" << i;
    }   
}