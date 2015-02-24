/* Name Tsz Wong
   CS 101 - Spring 2014
   Homework 1.8

   Write a program that reads an amount of dollars.
   Then the program determines how many type of bills are needed to
   represent the amount.

*/


#include <iostream>
using namespace std;
int main(){


    int amount, twenties, tens, fives, singles;
    cout << " Please enter amount: $";
    cin >> amount;

    twenties = amount / 20;
    tens = (amount % 20 ) / 10;
    fives = (amount % 20 ) % 10 / 5;
    singles = (amount % 20 ) % 10 %5;

    cout << "For the amount of $" << amount << " we need "<< twenties << " twenties, " << tens << " tens, " << fives << " fives, and " << singles << " singles.";

    return 0;






}

