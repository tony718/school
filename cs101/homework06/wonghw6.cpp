/*
Name: Tsz Fung Wong

CS 101 - Fall 2014
Homework 6
*/

#include <iostream>
#include <cstring>

using namespace std;


void separator() 
{
	cout << "\n--------------------------\n\n";
}


size_t 	stringlength( const char * s ); 

// you need to implement the 6 functions below
int		stringfind( const char * source, char d );
bool	isletter( char c ); 
bool 	islowercase( char c );
bool	isuppercase( char c );
char * 	touppercase( char * destination, const char * source );
char * 	tolowercase( char * destination, const char * source );

int main() {


	char s1[100], s5[100], d5[100], s6[100], d6[100]; 
	char c;
	char quit; 
	
	while ( 1 ) {

		cout << "\nPress q or Q to quit: ";
		cin >> quit;
		if ( quit == 'q' or quit == 'Q' )
			break;

		
		cout << "Exercise 1: stringfind\n";
		cout << "Enter a string : ";
		cin.ignore( 255, '\n' );
		cin.getline( s1, 99 );
		cout << "Enter a char to found in the above string: ";
		cin >> c;

		if ( stringfind( s1, c ) != -1 )
			cout << c << " found at position " << stringfind( s1, c);
		else 
			cout << c << " is not found";

		separator();


		cout << "Exercise 2: isletter\n";
		cout << "Enter a char : ";
		cin >> c;

		if ( isletter( c ) )
			cout << c << " is a letter ";
		else 
			cout << c << " is not a letter";

		separator();


		cout << "Exercise 3: islowercase\n";
		cout << "Enter a char : ";
		cin >> c;

		if ( islowercase( c ) )
			cout << c << " is a lower case letter ";
		else 
			cout << c << " is not a lower case letter";

		separator();


		cout << "Exercise 4: isuppercase\n";
		cout << "Enter a char : ";
		cin >> c;

		if ( isuppercase( c ) )
			cout << c << " is an upper case letter ";
		else 
			cout << c << " is not an upper case letter";

		separator();


		cout << "Exercise 5: touppercase\n";
		cout << "Enter a string : ";
		cin.ignore( 255, '\n' );
		cin.getline( s5, 99 );
		touppercase( d5, s5 );
		cout << d5;

		separator();
	
		cout << "Exercise 6: tolowercase\n";
		cout << "Enter a string : ";
		cin.getline( s6, 99 );
		tolowercase( d6, s6 );
		cout << d6;

		separator();
	
	} //end of while ( 1 )

	return 0;

}

size_t stringlength(  const char * s ) {
	
	const char * t = s;

	while ( *t != '\0' ) 
		t++;
	return t - s;

}


int stringfind(  const char * source, char c ) {

	// Exercise 1: your code here . . .
	for(int i = 0; source[i] != '\0' ; i++){
		if(source[i] == c){
			return i;
		}
	
	}

return -1;

}


bool isletter( char c ) {

	// Exercise 2: your code here . . .
	if ((c >= 65 && c <= 90) || ( c >= 97 && c <= 122 ))
		return true;
	else
		return false;

}

bool islowercase( char c ) {

	// Exercise 3: your code here . . .
	if ( c >= 97 && c <= 122 )
		return true;
	else
		return false;


}

bool isuppercase( char c ) {

	// Exercise 4: your code here . . .
	if (c >= 65 && c <= 90)
		return true;
	else
		return false;



}

char * touppercase( char * destination,  const char * source ) {

	// Exercise 5: your code here . . .
	for(int i = 0; source[i] != '\0' ; i++){
		if(source[i]>= 97 && source[i] <= 122)
			destination[i] = source[i] - 32;
		else
			destination[i] = source[i];}

	return destination;

}

char * tolowercase( char * destination,  const char * source ) {

	// Exercise 6: your code here . . .
	for(int i = 0; source[i] != '\0' ; i++){
		if(source[i]>= 65 && source[i] <= 90)
			destination[i] = source[i] + 32;
		else
			destination[i] = source[i];}

	return destination;



	
	return destination;

}
