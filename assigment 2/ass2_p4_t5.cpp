#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;
    int i = 1;

    cout << "Enter the number: ";
    cin >> number;

    for (; i <= number; i++){
        if (i % 7 == 0 && i % 9 == 0){
            cout << "First number: " << i;
            break;
        }
    }
    if (i % 7 != 0 || i % 9 != 0){
        cout << "\nNo number found";
    }
}