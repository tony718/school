/* Name Tsz Wong
   CS 101 - Spring 2014
   Homework 1.3

   Write a program that converts miles to kilometers.
   The users is asked for the value of mi, then computes the value of km.
   */

#include <iostream>
using namespace std;
int main(){

    double mi, ki;

    cout << " Please enter number of miles: ";
    cin  >> mi;
    ki = mi * 1.609;
    cout << "\n " << mi << " mile(s) equal " << ki << " kilometer(s)." << endl ;

    return 0;

}

