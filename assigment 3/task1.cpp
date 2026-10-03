#include <iostream>
#include <string>
using namespace std;

int main(){
    int values[5];

    cout << "\nValues: ";
    for(int i = 0; i < 5; i++ ){
        cin >> values[i];
    }

    cout << "\nValues: ";
    for (int i = 0; i < 5; i++){
        cout << values[i] << " ";
    }
    
    cout << "\nNumber of elements: " <<  sizeof(values) / sizeof(values[0]);

}