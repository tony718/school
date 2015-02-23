/* Name Tsz Wong
   CS 101 - Spring 2014
   Homework 1.7
   */


#include <iostream>
using namespace std;
int main(){

    int n1, n2, n3 ,n4 ,n5;
    int largest=0, smallest=0;

    cout << " Please enter 5 intergers so we can determine " << endl;
    cout << " which is the largest and smallest. \n\n" << endl;
    cout << " Enter five integers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    if ( n1 > largest){
        largest = n1;}
    if ( n2 > largest ){
        largest = n2;}
    if ( n3 > largest ){
        largest = n3;}
    if ( n4 > largest ){
        largest = n4;}
    if ( n5 > largest ){
        largest = n5;}

    if ( n1 < smallest ){
        smallest = n1;}
    if ( n2 < smallest ){
        smallest = n2;}
    if ( n3 < smallest ){
        smallest = n3;}
    if ( n4 < smallest ){
        smallest = n4;}
    if ( n5 < smallest ){
        smallest = n5;}

    cout << " The smallest is " << smallest << "." << endl;
    cout << " the largest is "<< largest << "." << endl;

    return 0;




}

