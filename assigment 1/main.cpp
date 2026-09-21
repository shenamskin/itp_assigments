#include <iostream>
#include <string>
using namespace std;
int main(){
// ========================================
// Assignment 1
// Basic Syntax & Selection Statements
// Student: Sharipbai Altynbek
// Group: IT-2605
// ========================================

// Task 1
// Your solution here

    string first_name;
    int age;
    double height;
    int student_id;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your student ID: ";
    cin >> student_id;

    cout << "\n----- Student Information -----";
    cout << "\nName: " << first_name;
    cout << "\nAge: " << age;
    cout << "\nHeight: " << height << "cm";
    cout << "\nStudent ID: " << student_id;
    cout << "\n-------------------------------";

// Task 2
// Your solution here

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

// Task 3
// Your solution here

    int number;
    cin >> number;

    if (number < 0){
        cout << "The number is negative.";
    } else if (number == 0){
        cout << "The number is zero.";
    } else{
        cout << "The number is positive.";
    }

// Task 4
// Your solution here

    int score;
    string grade;

    cin >> score;

    if (0 <= score and score <= 49){
        grade = "F";
    } else if (50 <= score and score <= 54){
        grade = "D";
    } else if (55 <= score and score <= 59){
        grade = "D+";
    } else if (60 <= score and score <= 64){
        grade = "C-";
    } else if (65 <= score and score <= 69){
        grade = "C";
    } else if (70 <= score and score <= 74){
        grade = "C+";
    } else if (75 <= score and score <= 79){
        grade = "B-";
    } else if (80 <= score and score <= 84){
        grade = "B";
    } else if (85 <= score and score <= 89){
        grade = "B+";
    } else if (90 <= score and score <= 94){
        grade = "A-";
    } else if (95 <= score and score <= 100){
        grade = "A";
    }
    cout << "Grade: " << grade;

// Task 5
// Your solution here

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

// Task 6
// Your solution here

    string username;
    string pwd;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> pwd;

    if (username == "admin"){
        if (pwd == "12345"){
            cout << "Login successful!";
        } else{
            cout << "Incorrect password.";
        }
    } else{
        cout << "Incorrect username.";
    }

// Task 7
// Your solution here

    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Output: " << ((number % 2 == 0) ? "Even" : "Odd");

// Task 8
// Your solution here

    int number;
    int first;
    int second;

    cout << "===== Calculator ====="
    "\n1. Addition"
    "\n2. Subtraction"
    "\n3. Multiplication"
    "\n4. Division";

    cout << "\nChoose an operation: ";
    cin >> number;

    if (number < 1 || number > 4){
        cout << "Error";
        return 0;
    }

    cout << "Enter first number: ";
    cin >> first;

    cout << "Enter second number: ";
    cin >> second;

    switch (number){
        case 1:
            cout << "\nResult: " << first + second;
            break;
        case 2:
            cout << "\nResult: " << first - second;
            break;
        case 3:
            cout << "\nResult: " << first * second;
            break;
        case 4:
            if (first && second != 0){
                cout << "\nResult: " << double(first) / double(second);
            } else{
                cout << "Error";
            }
            break;
        default:
            cout << "Error";
            break;
    }

// Task 9
// Your solution here

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