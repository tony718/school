/* Name Tsz Wong
   CS 101 - Spring 2014
   Homework 1.5

   Write a program that reads in two integers and determines and print if
   the first is a multiple of the second [Hint: Use the modulus operator.]
   */


#include <iostream>
using namespace std;
int main(){

    int n1, n2;

    cout << " Please enter two integers: ";
    cin  >> n1 >> n2;
    cout << " \n\n";

    if ( ( n2%n1)  == 0 ){
        cout << "  " << n1 << " is a multiple of " << n2 << endl; }
    else{
        cout << " " << n1 << " is not a multiple of " << n2 << endl; }

    return 0;






}

