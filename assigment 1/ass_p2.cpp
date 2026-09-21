#include <iostream>
#include <string>
using namespace std;

int main(){
    int first_num;
    int second_num;

    cout << "Enter first number: ";
    cin >> first_num;
    cout << "Enter second number: ";
    cin >> second_num;

    int addition = first_num + second_num;
    int substraction = first_num - second_num;
    int multiplication = first_num * second_num;

    if (second_num == 0){
        cout << "Number cant be zero";
    } else{
        double division = double(first_num) / double(second_num);
        int remainder = first_num % second_num;

        cout << "\nAddition: " << addition;
        cout << "\nSubtraction: " << substraction;
        cout << "\nMultiplication: " << multiplication;
        cout << "\nDivision: " << division;
        cout << "\nRemainder: " << remainder;
    }
}