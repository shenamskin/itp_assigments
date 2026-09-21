#include <iostream>
#include <string>
using namespace std;

int main(){
    int age;
    int day;
    int numOfTickets;
    int price;
    int priceAge;
    double discount;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter day number (1-7): ";
    cin >> day;

    cout << "Enter number of tickets: ";
    cin >> numOfTickets;

    if (age < 18){
        priceAge = 2000;
    } else if (age > 65){
        priceAge = 1500;
    } else{
        priceAge = 3000;
    }

    switch (day){
    case 1:
        discount = 0.8;
        break;
    default:
        break;
    }

    cout << "Ticket price: " << priceAge << " KZT";
    if (day == 1){
        cout << "\nDiscount: " << (1 - discount) * 100 << "%";
    }
    cout << "\nFinal price: " << priceAge * numOfTickets * discount << " KZT";
}