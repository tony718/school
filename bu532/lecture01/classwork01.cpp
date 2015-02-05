#include <iostream>
using namespace std;
int main(){
    char holder;
    double exam1, exam2;
    double average;
    string fName, lName;

    cout << " Please enter student's First name : ";
    cin >> fName;
    cout << " Please enter student's Last name : ";
    cin >> lName;
    cout << " Please enter first exam grade : ";
    cin >> exam1;
    cout << " Please enter second exam grade : ";
    cin >> exam2;
    average = ( exam1 + exam2 ) / 2;
    cout << " " << fName << " " << lName << "'s average out of the two exam is " << average << endl;

    return 0;
    }
