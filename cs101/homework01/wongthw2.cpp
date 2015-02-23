/* Name Tsz Wong
   CS 101 - Spring 2014
   Homework 1.2

   Writ a program that uses two variables (objects) string fname, lname;
   for first name and last name respectively and one int age; for age.

   The program asks the user for the first and store it into fname.
   Then the program asks the user for the last name which is then stored into lname.
   Then the program asks the user for the age.
   then Print out.
   */

#include <iostream>
using namespace std;
int main(){

    string fName, lName;
    int age;

    cout << " Please enter first name: ";
    cin >> fName;
    cout << " Please enter last name: ";
    cin >> lName;
    cout << " Please enter age: ";
    cin  >> age;

    cout << "\n Your name is " << fName << lName << ".  You are " << age << " years old.." << endl ;

    return 0;

}

