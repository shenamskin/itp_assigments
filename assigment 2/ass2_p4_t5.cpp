#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;

    cin >> number;

    for (int i = 1; i <= number; i++){
        if (i % 7 == 0 && i % 9 == 0){
            cout << i;
            return 0;
        }
    }
    cout << "there's not number division by 7 and 9";
}