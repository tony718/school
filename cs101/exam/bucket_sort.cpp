#include <iostream>
using namespace std;
#include <math.h>
#include <stdlib.h>

int * generatearray( int * a, const int size ) {
	srand( time( NULL ) );
	int i;
	for ( i = 0; i < size; i++ ) {
		int p = 1 + rand() % 5;
		a[i] = 1 + rand() % (int)pow(10,p);	
	}
	return a;

}

const int * printarray( const int * a, const int size ) {
	int i;
	for ( i = 0; i < size - 1; i++ )
		cout << a[i] << ", ";
	cout << a[i];
	return a;
}

int maxelement( const int * a, const int size ) {
	int i, M = a[0];
	for ( i = 1; i < size; i++ )
		if ( a[i] > M ) 
			M = a[i];
	return M;
} 

int * bucketsort( int * a, const int size ) {

	// initialize the bucket
	int b[10][size];
	int index[10];
	int i , j, v;

	int p = 1;
	int d = 1 + (int) log10( maxelement( a, size ) );
	int t = 1;


	while ( p <= d ) {

		for ( i = 0; i < 10; i++ ) 
			for ( j = 0; j < size; j++ ) 
				b[i][j] = 0;
		cout << endl << endl << "Press something to continue ";
		char c;
		cin >> c;
		cin.ignore(200, '\n');

		cout << endl <<  "Digit  " << p-1 << endl;
		for ( i = 0; i < 10; i++ )
			index[i] = 0;

		for ( i = 0; i < size; i++ ) {
			v = (int)(a[i]/t) % 10;
			b[ v ][ index[v] ] = a[i];
			index[v]++;
		} 

		//print buckets
		cout << "The buckets " << endl;

		for ( v = 0; v < size;  v++ ) {
			for ( j = 0; j < 10; j++ ) {
				if ( b[j][v] == 0 )
					cout << " . " << "\t";
				else
					cout <<  b[j][v] << "\t";
			}
			cout << endl;
		}

		cout << endl << "The array from the buckets is: ";
		i = 0;
		for ( j = 0; j < 10; j++ )
			for ( v = 0; v < index[j]; v++ ) {
				a[ i ] = b[j][v];
				cout <<	 a[i] << "\t";
				i++;
			}
		t *= 10;
		p++;

		cout << endl << endl << "-----------------------" << endl; 
	}

	return a;
} 

int main() {

	const int size = 10;
	int a[size];
	generatearray( a, size );
	printarray( a, size );

	bucketsort( a, size );
	printarray( a, size );

	return 0;

}
