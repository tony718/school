/* Author: Tony Tsz Wong
 * Date : February 10, 2015
 * Title: Classwork 02b
 */

#include <iostream>
using namespace std;
int main(){

    int numgrade = 0,
        x = 0;

    double grade,
           average,
           total = 0;

    cout << " How many grades do you want to enter? ";
    cin >> numgrade;

    while ( x < numgrade ){
        cout << " What is your next grade? ";
        cin >> grade;
        total = total + grade;
        x++;
        }

    average = total / numgrade;
    cout << endl << " The total average is " << average << endl;

/* #34 page 92
    int num = 1;
    while (num <= 20){
        cout << num << endl;
        num++;
    }


    return 0;
    }
