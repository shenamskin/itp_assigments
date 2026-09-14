#include <iostream>
#include <string>
using namespace std;

int main(){
    int age;
    int score;

    cout << "Age: ";
    cin >> age;
    cout << "Programming score: ";
    cin >> score;

    if (age >= 18 && score >= 70){
        cout << "You are eligible to participate.";
    } else{
        cout << "You are not eligible to participate.";
    }
}