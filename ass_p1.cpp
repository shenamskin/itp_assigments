#include <iostream>
#include <string>
using namespace std;
int main(){
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
}