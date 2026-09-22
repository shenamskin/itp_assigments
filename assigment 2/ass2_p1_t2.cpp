#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;
    int i = 0;
    int sum;

    cout << "Enter number: ";
    cin >> number;

    while (number != i){
        i += 1;
        sum += i;
    }

    cout << "Sum: " << sum;
    
}