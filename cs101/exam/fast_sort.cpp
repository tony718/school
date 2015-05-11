#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <list>
using namespace std;

void printarray( const int * a, const int size ) {
	int i;
	for ( i = 0; i < size - 1; i++ )
		cout << a[i] << ", ";
	cout << a[i];
}



void quicksort( int * a, int left, int right ) {
	int i = left, j = right;
	int pivot  = a[ (left + right) / 2 ];
	int t;

	while ( i <= j ) { 
		while ( a[i] < pivot ) i++;
		while ( a[j] > pivot ) j--;
		if ( i <= j  ) {
			t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++;
			j--;
		}
	}


	if ( left < j ) 
		quicksort( a, left, j );
	if ( i < right ) 
		quicksort( a, i, right );

}

// find the max elem of an array: needed for bucket sort
int maxelement( const int * a, const int size ) {
	int i, M = a[0];
	for ( i = 1; i < size; i++ )
		if ( a[i] > M ) 
			M = a[i];
	return M;
} 

// this version of bucketsort uses dynamic arrays as buckets
void bucketsort( int * a, const int size ) {

	// allocate the bucket
	int i , j, v;
	int **b = new int* [10];
	for ( i = 0; i < 10; i++ )
		b[i] = new int[size];


	int index[10];

	int p = 1;
	int d = 1 + (int) log10( maxelement( a, size ) );
	int t = 1;


	while ( p <= d ) {

		for ( i = 0; i < 10; i++ ) 
			for ( j = 0; j < size; j++ ) 
				b[i][j] = 0;
		for ( i = 0; i < 10; i++ )
			index[i] = 0;

		for ( i = 0; i < size; i++ ) {
			v = (int)(a[i]/t) % 10;
			b[ v ][ index[v] ] = a[i];
			index[v]++;
		} 

		i = 0;
		for ( j = 0; j < 10; j++ )
			for ( v = 0; v < index[j]; v++ ) {
				a[ i ] = b[j][v];
				i++;
			}
		t *= 10;
		p++;

	}

	// deallocate the bucket
	for ( i = 0; i < 10; i++ )
		delete [] b[i]; 
	delete [] b;
} 

// this version of bucketsort uses lists as buckets
void bucketsort2( int * a, const int size ) {

	// allocate the bucket
	int i , j, digit;
	list<int> b[10];


	int index[10];

	int p = 1;
	int d = 1 + (int) log10( maxelement( a, size ) );
	int t = 1;


	while ( p <= d ) {

		// push array entries to approprite bucket
		for ( i = 0; i < size; i++ ) {
			digit = (int)(a[i]/t) % 10;
			b[digit].push_front( a[i] );
		} 
		
		// push bucket entries  back to array
		i = 0;
		for ( digit = 0; digit < 10; digit++ ) {
			while ( ! b[digit].empty() ) {
				a[i] = b[digit].front();
				i++;
				b[digit].pop_front();
			}
		}

		t *= 10;
		p++;

	}

} 

// this function merges two sorted lists: needed for merge sort
list<int> merge( list<int>& left, list<int>& right ) 
{
	list<int> m;
	while ( !left.empty() and !right.empty() ) 
	{
		int lfront = left.front();
		int rfront = right.front();
		if ( lfront == rfront ) {
			m.push_back( lfront );
			m.push_back( rfront );
			left.pop_front();
			right.pop_front();
		}
		else if ( lfront < rfront ) { 
			m.push_back( lfront );
			left.pop_front();
		}
		else {
			m.push_back( rfront );
			right.pop_front();

		}
	}

	if ( left.empty() ) {
		while ( ! right.empty() ) {
			m.push_back( right.front() );
			right.pop_front();
		}	
	}
	if ( right.empty() ) {
		while ( ! left.empty() ) {
			m.push_back( left.front() );
			left.pop_front();
		}	
	}

	return m;
}


// this is the main code for mergesort
list<int> mergesort( list<int> l ) 
{
	int lsize = l.size(); 
	if ( lsize <= 1 )
		return l;

	// divide the lists
	list<int> left, right;
	list<int>::iterator it = l.begin();
	int i;
	for ( i = 0; i < lsize/2; i++ ) {
		left.push_back( *it );
		it++;
	}
	for ( ; i < lsize; i++ ) {
		right.push_back( *it );
		it++;
	}

	// recursive sort left and right
	left = mergesort( left );
	right = mergesort( right );

	// conquer: merge sorted lists
	return merge( left, right );

}

// this is the main code for mergesort improved version
list<int> mergesortimproved( list<int> l ) 
{
	int lsize = l.size(); 
	if ( lsize < 50  ) {
	// for small size switch to selection sort
		int * a = new int[lsize];
		int i, j, t;
		int minind;
		// copy list into a[]
		list<int>::iterator it = l.begin();
		for ( i = 0; i < lsize; i++ ) {
			a[i] = *it;
			it++;
		}
		// sort a[]
		for ( i = 0; i < lsize-1; i++ ) {
			minind = i;
			for ( j = i+1; j < lsize; j++ )
				if ( a[minind] > a[j] )  
					minind = j;
			if ( minind != i ) {
				t = a[i];
				a[i] = a[minind];
				a[minind] = t;
			}	
		}
		// copy a[] back to list
		it = l.begin();
		for ( i = 0; i < lsize; i++ ) {
			*it = a[i];
			it++;
		}
		delete [] a;	
		return l;
	}

	// divide the lists
	list<int> left, right;
	list<int>::iterator it = l.begin();
	int i;
	for ( i = 0; i < lsize/2; i++ ) {
		left.push_back( *it );
		it++;
	}

	for ( ; i < lsize; i++ ) {
		right.push_back( *it );
		it++;
	}

	
	// recursive sort left and right
	left = mergesortimproved( left );
	right = mergesortimproved( right );

	// conquer: merge sorted lists
	return merge( left, right );

}
int main() {

	int *a, *b, *c, *d, *e, *f, *g;
	int i;
	list<int> m, mimp;

	while ( 1 ) {
		char input;
		cout << "Press q to quit or anything else to continue: ";
		cin >> input;
		cin.ignore( 256, '\n' );
		if ( input == 'q' or input == 'Q' )
			break;

		cout << endl;
		int ARRAYSIZE;
		do {
			cout << "Enter a large positve integer ARRAYSIZE = ";
			cin >> ARRAYSIZE;
			if ( ARRAYSIZE <= 0 )
				cout << "Invalid size!" << endl;
		} while ( ARRAYSIZE <= 0 );


		// allocate arrays
		a = new int[ARRAYSIZE];
		b = new int[ARRAYSIZE];
		c = new int[ARRAYSIZE];
		d = new int[ARRAYSIZE];
		e = new int[ARRAYSIZE];

		if ( !a or !b or !c or !d or !e ) {
			cerr << "Allocation failure . . ." << endl << endl;
			return -1;
		}

		time_t begin, end; // to determine execution time 

		// generate random array
		time( &begin );
		srand( time(NULL) );
		for ( i = 0; i < ARRAYSIZE; i++ ) {
			a[i] = rand() % 1000;
		} 
		time( &end );
		cout << "It took " << end - begin << " seconds to generate the array." << endl;

		// copy the random array to the rest of the arrays
		time( &begin );
		for ( i = 0; i < ARRAYSIZE; i++ ) {
			e[i] = d[i] = c[i] = b[i] = a[i];
			m.push_back( d[i] ); // for mergesort
			mimp.push_back( e[i] ); // for mergesort improved
		} 
		time( &end );
		cout << "It took " << end - begin << " seconds to copy the arrays." << endl;


		// sort the arrays in 5 different ways
		cout << "Sorting a randomly generated array with " << ARRAYSIZE << " elements:" << endl;

		time( &begin );
		quicksort( a, 0, ARRAYSIZE - 1 );
		time( &end );
		cout << "Quicksort:\t\t";
		cout << end - begin << " seconds . . . " << endl; 

		time( &begin );
		bucketsort( b, ARRAYSIZE );
		time( &end );
		cout << "Bucketsort v1:\t\t";
		cout << end - begin << " seconds . . . " << endl; 

		time( &begin );
		bucketsort2( c, ARRAYSIZE );
		time( &end );
		cout << "Bucketsort v2:\t\t";
		cout << end - begin << " seconds . . . " << endl; 

		time( &begin );
		m = mergesort( m );
		time( &end );
		cout << "Mergesort:\t\t";
		cout << end - begin << " seconds . . . " << endl; 

		time( &begin );
		mimp = mergesortimproved( mimp );
		time( &end );
		cout << "Mergesort improved:\t";
		cout << end - begin << " seconds . . . " << endl; 

		delete [] a;
		delete [] b;
		delete [] c;
		delete [] d;
		delete [] e;

		cout << "\n-------------------------------\n";
	}
	return 0;


}
