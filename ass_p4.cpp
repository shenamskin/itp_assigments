#include <iostream>
#include <string>
using namespace std;

int main(){
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
}
