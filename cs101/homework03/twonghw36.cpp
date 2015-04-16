/*
Name: Tony Tsz Wong
Homework 3.6


Write a program that reads an integer and prints its digits. For instance, if the user
enters -341670, the program should print the following lines:
Digit 1 is: 3
Digit 2 is: 4
Digit 3 is: 1
Digit 4 is: 6
Digit 5 is: 7
Digit 6 is: 0

*/

#include <iostream>
using namespace std;
int main(){
	
	int n = 0;
	int j = 0;
	unsigned int digits;
	unsigned int power = 1;
	char quit;

	do{
	
	//initialization begin
		n = 0;
		j = 0;
		digits = 0;
		power = 1;
	//initialization end
		
		cout << " Enter a number : ";
		cin >> n;
	
	// if negative number, convert to positive
		if (n<0) n = n*-1;
	
		j = n;

		for (digits = 1 ; n > 10 ; digits++){
			n = n/10;}
		cout << " Total Number of digits " << digits << endl; 	// display number of digits
		
		for(unsigned int k = 2;  k <= digits ; k++){	
			power *= 10;}
	
		for(unsigned int i = 1 ; digits >= i ; i++ ){
			cout << " Digit " << i << " is: " <<  j/power << endl;
			j = j%power;
			power = power/10;
			}
	
		cout << " Would you try again? (y/n) ";
		cin >> quit;
	
	}while( (quit != 'n') && (quit != 'N')) ;


return 0;
}
	
	
	
	


