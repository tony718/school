/* Author: Tony Tsz Wong
 * Date : February 10, 2015
 * Title: Classwork 02
 */

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
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    average = ( exam1 + exam2 ) / 2;
    cout << " " << fName << " " << lName << "'s average out of the two exam is " << average << endl;

    if (average >= 60){
        cout << " Passing grade" << endl;
                
                if (average >= 90 && exam1 >= 85 && exam2 >=85) {
                    cout << " Honor Roll" << endl;
                    }
        }
    else{
        cout << " Failing grade" << endl;
        }

    return 0;
    }
