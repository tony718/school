/* Name Tsz Wong
   CS 101 - Spring 2014
   Homework 1.4

   Write a program that converts pound to kilograms.

*/

#include <iostream>
using namespace std;
int main(){

    double lbs, kgs;

    cout << " Please enter amount of pound: ";
    cin  >> lbs;
    kgs = lbs * 0.448;
    cout << "\n " << lbs << " pound(s) equal " << kgs << " kilogram(s)." << endl ;

    return 0;

}

