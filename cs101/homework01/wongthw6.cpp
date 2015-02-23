/* Name Tsz Wong
   CS 101 - Spring 2014
   Homework 1.6

   Write a program that input three integers from the keyboard
   and prints the sum, average, product, smallest and largest
   of these numbers.


*/


#include <iostream>
using namespace std;
int main(){

    int n [3] = {0 , 0, 0};
    int smallest, largest;

    cout << " Input three integers: ";
    cin >> n[0] >> n[1] >> n[2];
    cout << " \n\n Sum is " << n[0] + n[1] + n[2] << endl;
    cout << " Average is " << (n[0] + n[1] + n[2]) / 3 << endl;
    cout << " Product is " << n[0] * n[1] * n[2] << endl;

    largest = n[0];
    for(int k=0; k<3; k++){
        if ( largest < n[k] )
            largest = n[k];
    }
    smallest = n[0];  
    for(int k=0; k<3; k++){
        if ( n[k] < smallest )
            smallest = n[k];
    }

    cout << " Smallest is " << smallest << endl;
    cout << " Largest is " << largest << endl;

    return 0;

}
