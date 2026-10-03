#include <iostream>
using namespace std;

int main(){
    int arr[8];
    double sum = 0;
    double average;

    cout << "Enter 8 values: ";

    for (int i = 0; i < 8; i++){
        cin >> arr[i];
    }

    int small = arr[0];
    int large = arr[0];

    for (int i = 0; i < 8; i++){
        if (small >= arr[i]){
            small = arr[i];
        }
        if (large <= arr[i]){
            large = arr[i];
        }

        sum += arr[i];
    }

    average = sum / 8;

    cout << "Sum: " << sum <<
    "\nMinimum: " << small << 
    "\nMaximum: " << large << 
    "\nAverage: " << average;
}