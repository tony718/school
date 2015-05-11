#include <iostream>
using namespace std;


int * setarray( int * a, const int size ) {
	int i;
	for ( i = 0; i < size; i++ ) {
		cout << "Enter a[ " << i << " ] = " ;
		cin >> a[i];
	}
	return a;
}

const int * printarray( const int * a, const int size ) {
	int i;
	for ( i =0; i < size - 1; i++ ) 
		cout << a[i] << ", ";
	cout << a[i];
	return a;
}

int * selectionsort( int * a, const int size ) {
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
		printarray( a, size );
		cout << endl;
	}
	return a;
}


int main() {
	int a[] = {64, 25, 12, 22, 11};

	printarray(a,5);
	cout << endl << "Sorting via selection: " << endl;
	selectionsort(a,5);

	return 0;
}
