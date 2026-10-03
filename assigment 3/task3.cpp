#include <iostream>
using namespace std;

int main(){
    int arr[6];

    cout << "Enter 6 values: ";
    for (int i = 0; i < 6; i++){
        cin >> arr[i];
    }
    
    cout << "\nOriginal: ";
    for (int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted: ";
    for (int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}