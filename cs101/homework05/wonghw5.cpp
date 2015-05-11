/*
Name:  Tony Wong

CS 101 - Fall 2014 
Homework 5
*/


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void generatearray( int a[], const int size, int vmax )
{
    srand( time( NULL ) );
    // enter your code below
    int t;
    for ( int i = 0 ; i < size ; i++){
        t = rand() % vmax;
        a[i] = t;
    }
}

void printarray( const int a[], const int size )
{
    // enter your code below
    int i =0;
    for(; i < size-1 ; i++)
        cout << a[i] << ",";
    cout << a[i];

}

int maxvalue( const int a[], const int size )
{
    // enter your code below
    int maxvalue;
    for(int i = 0 ; i < size ; i++)
        if ( a[i] > a[i+1])
            maxvalue = a[i];
    return maxvalue;

}

int minvalue( const int a[], const int size )
{
    // enter your code below
    int minvalue;
    for(int i = 0 ; i < size ; i++)
        if ( a[i] < a[i+1])
            minvalue = a[i];
    return minvalue;


}

void selectionsort( int a[], const int size )
{
    // enter your code below
    int i, j, t;
    int minind;

    for ( i = 0; i < size-1; i++ ) {
        minind = i;
        for ( j = i+1; j < size; j++ )
            if ( a[minind] > a[j] )  
                minind = j;
        if ( minind != i ) {
            t = a[i];
            a[i] = a[minind];
            a[minind] = t;
        }	
    }
    printarray( a, size );
    cout << endl;
}



int main() 
{
    int a[10], vmax;

    // read the upper range of the array vmax	
    // enter your code

    // generate and print the array
    generatearray( a, 10, vmax );
    cout << "The randomly generated entries of the array are: " << endl;
    printarray( a, 10 );
    cout << endl;


    // print the min value of the array
    // enter your code
    cout << "The randomly min value of the array: " << endl;
    cout << minvalue( a, 10 );
    cout << endl;


    // print the max value of the array
    // enter your code
    cout << "The randomly max value of the array: " << endl;
    cout << maxvalue( a, 10 );
    cout << endl;


    // sort and print the array
    // enter your code
    selectionsort( a, 10 );



    return 0;
}
