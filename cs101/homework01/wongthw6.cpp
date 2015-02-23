/* Name Tsz Wong
   CS 101 - Spring 2014
   Homework 1.6
   */


#include <iostream>
using namespace std;
int main(){

   // int n1, n2, n3, smallest=0, largest=0;
    int n [3] = {0 , 0, 0};
    int smallest, largest;

    cout << " Input three integers: ";
    cin >> n[0] >> n[1] >> n[2];
    cout << " \n\n Sum is " << n[0] + n[1] + n[2] << endl;
    cout << " Average is " << (n[0] + n[1] + n[2]) / 3 << endl;
    cout << " Product is " << n[0] * n[1] * n[2] << endl;

    largest = n[0];
    smallest = n[0];
    for(int k=0; k<3; k++){
        if ( largest > n[k] )
            largest = n[k];
        }
        
/*    if ( n1 > n2 ){
        largest = n1;}
    else if ( n2 > n1 ){
        largest = n2;}
    else if ( n3 > largest ){
        largest = n3;}


    if ( n1 < n2 ){
        smallest = n1;}
    else if ( n2 < n1 ){
        smallest = n2;}
    else if ( n3 < smallest ){
        smallest = n3;}
*/
    cout << " Smallest is " << smallest << endl;
    cout << " Largest is " << largest << endl;

    return 0;






}

