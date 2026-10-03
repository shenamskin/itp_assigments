#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    int sum = 0;

    cout << "Enter matrix values: \n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Matrix: \n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    

    for (int i = 0; i < 3; i++){
        sum += arr[i][i];
    }
    cout << "Main diagonal sum: " << sum;
}