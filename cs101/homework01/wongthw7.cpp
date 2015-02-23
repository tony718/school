/* Name Tsz Wong
   CS 101 - Spring 2014
   Homework 1.7

   Write a program that reads five integers and determines
   and prints the largest and the smallest integers in the group.


*/


#include <iostream>
using namespace std;
int main(){

    int n[5] = { 1 ,2, 3, 4, 5 };
    int largest, smallest;

    cout << " Please enter 5 intergers so we can determine " << endl;
    cout << " which is the largest and smallest. \n\n" << endl;
    cout << " Enter five integers: ";
    cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];

    largest = n[0];
    for(int i=0;i<5;i++){
        if( n[i] > largest )
            largest = n[i];
    }

    smallest = n[0];
    for(int i=0;i<5;i++){
        if ( n[i] < smallest ){
            smallest = n[i];}
    }

    cout << " The smallest is " << smallest << "." << endl;
    cout << " the largest is "<< largest << "." << endl;

    return 0;

}


