#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;
    cin >> number;

    if (number < 0){
        cout << "The number is negative.";
    } else if (number == 0){
        cout << "The number is zero.";
    } else{
        cout << "The number is positive.";
    }
}
