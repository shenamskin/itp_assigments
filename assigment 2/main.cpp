// =====================================
// Assignment 2  Iteration Statements
// Student: Your Name
// Group: XXXX
// =====================================

#include <iostream>
#include <string>
using namespace std;

// Task 1
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

// Task 2
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

// Task 3
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

// Task 4
int main(){
    int number;

    cin >> number;

    for (int i = 1; i <= 10; i++){
        cout << "\n" << number << " * " << i << " = " << number * i;
    }
}

// Task 5
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

// Task 6
int main(){
    int number;

    cin >> number;

    if(number < 0){
        cout << "invalid number";
        return 0;
    }

    for (int i = 0; i <= number; i++){
        if(i % 3 == 0){
            continue;
        }
        cout << i << " ";
    }
    
}