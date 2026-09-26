#include <iostream>
#include <string>
using namespace std;

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