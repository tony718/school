#include <iostream>
using namespace std;
#include <time.h>
#include <stdlib.h>
#include <list>

void printarray( const int * a, const int size ) {
	int i;
	for ( i =0; i < size - 1; i++ ) 
		cout << a[i] << ", ";
	cout << a[i];
}

// print a list of ints
void printlist( list<int>& l  ) {
	list<int>::iterator it;
	cout << "{ ";
	for ( it = l.begin(); it != l.end(); it++ ) {
		cout << *it;
		it++;
		if ( it != l.end() ) 
			cout << ", ";
		it--;
	}
	cout << " }";

}  

// this function merges two sorted lists
list<int> merge( list<int> left, list<int> right ) 
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
	cout << "left: ";
	printlist( left );
	cout << endl;

	for ( ; i < lsize; i++ ) {
		right.push_back( *it );
		it++;
	}
	cout << "right: ";
	printlist( right );
	cout << endl;

	
	// recursive sort left and right
	left = mergesort( left );
	right = mergesort( right );

	// conquer: merge sorted lists
	cout << endl << "Merge: ";
	printlist( left );
	cout << " and ";
	printlist( right );
	cout << endl;
	return merge( left, right );

}



int main() {
	
	int i, ARRAYSIZE;
	int *a;	
	
	// read ARRAYSIZE
	do {
		cout << "Enter a positive integer ARRAYSIZE = ";
		cin >> ARRAYSIZE;
		if ( ARRAYSIZE <= 0 ) 
			cout << ARRAYSIZE << " is not valid value." << endl;
	} while ( ARRAYSIZE <= 0 );
	
	// generate array of random integer entries in the range 0 ..999
	a = new int[ARRAYSIZE];
	list<int> m;
	srand( time(NULL) );
	for ( i = 0; i < ARRAYSIZE; i++ ) { 
		a[i] = rand() % 1000;
		m.push_back( a[i] );
	}

	cout << "The entries of a[]:" << endl;
	printarray(a,ARRAYSIZE);
	cout << endl << endl;
	
	cout << "Sorting via mergesort: " << endl;
	m = mergesort( m );

	cout << endl;
	printlist( m );
	cout << endl;
	for ( i = 0; i < ARRAYSIZE; i++ ) {
		a[i] = m.front();
		m.pop_front();
	} 

	cout << endl << endl;
	cout << "The entries of a[]:" << endl;
	printarray(a,ARRAYSIZE);
	
	cout << endl << endl;
	
	delete [] a;

	return 0;
}
