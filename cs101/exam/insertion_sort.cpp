#include <iostream>
using namespace std;

const int arraysize = 5;

int * setarray( int * a, const int size );
const int * printarray( const int * a, const int size );
int * insertionsort( int * a, const int size );

double * setarray( double * a, const int size );
const double * printarray( const double * a, const int size );
double * insertionsort( double * a, const int size );


int main() {

	int a[ arraysize ];
	double x[ arraysize ];

	cout << "Sorting an array of integers via Insertion Sort " << endl;
	cout << "Enter " << arraysize << " integers below:" << endl;
	setarray( a, arraysize );
	cout << "You entered the following values: " << endl;
	printarray( a, arraysize );
	cout << endl;
	insertionsort( a, arraysize );
	cout << "Using insertion sort, the array becomes:" << endl;
	printarray( a, arraysize );
	cout << "\n\n------------------------\n\n";

	
	cout << "Sorting an array of decimal numbers via Insertion Sort " << endl;
	cout << "Enter " << arraysize << " decimal numbers below:" << endl;
	setarray( x, arraysize );
	cout << "You entered the following values: " << endl;
	printarray( x, arraysize );
	cout << endl;
	insertionsort( x, arraysize );
	cout << "Using insertion sort, the array becomes:" << endl;
	printarray( x, arraysize );
	cout << "\n\n------------------------\n\n";

	return 0;
}


int * setarray( int * a, const int size ) {
	int i;
	for ( i = 0; i < size; i++ ) {
		cout << "Enter entry " << i + 1 << " : ";
		cin >> a[i];
	}
	return a;
}
double * setarray( double * x, const int size ) {
	int i;
	for ( i = 0; i < size; i++ ) {
		cout << "Enter entry " << i + 1 << " : ";
		cin >> x[i];
	}
	return x;
}

const int * printarray( const int * a, const int size ) {
	int i;
	for ( i = 0; i < size - 1; i++ ) {
		cout << a[i] << ", ";
	}
	cout << a[i];
	return a;
}

const double * printarray( const double * x, const int size ) {
	int i;
	for ( i = 0; i < size - 1; i++ ) {
		cout << x[i] << ", ";
	}
	cout << x[i];
	return x;
}

int * insertionsort( int * a, const int size ) {
	int t, i, j;
	for ( i = 1; i < size; i++ ) {
		j = i;
		while ( j > 0 and a[j-1] > a[j] ) {
			t = a[j-1];
			a[j-1] = a[j];
			a[j] = t;
			j--;
		
		}
	}
	return a;
}

double * insertionsort( double * x, const int size ) {
	int  i, j;
	double t;
	for ( i = 1; i < size; i++ ) {
		j = i;
		while ( j > 0 and x[j-1] > x[j] ) {
			t = x[j-1];
			x[j-1] = x[j];
			x[j] = t;
			j--;
		
		}
	}
	return x;
}
