#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


void setarray( int a[], const unsigned int size );
void printarray( const int a[], int left, int right );

void quicksort( int a[], int left, int right );
void quicksorttutor( int a[], int left, int right ); 


int main() 
{
	int a[9] = {0};
	int input = 0;

	setarray(a, 9);  
	cout << "The array a has the following entries:\n";
	printarray(a, 0, 8 );

	cout << endl;
	do {
		cout << "Press 0 for quicksort without tutorial or 1 for tutorial: ";
		cin >> input;
	} while ( input != 0 and input != 1 ); 

	if ( input == 0 ) 
	{
		quicksort( a, 0, 8 );	
	}
	else 
	{
		cout << "\n\nEntering quick sort:\n";
		quicksorttutor( a, 0, 8 ); 
	}

	cout << endl << "Sort has finished! ";
	cout << "The array a has the following entries:\n";
	printarray( a, 0, 8 );

	cout << "\n\n\n";

	return 0;
}

// implementation of functions

void setarray( int a[], const unsigned int size )
{

	int i;  
	srand(time(NULL));
	for ( i  = 0; i < size; i++ )
	{
		a[i] = rand() % 50; // random ints between 0 and 49  
	}

}

void printarray( const int a[], int left, int right )
{
	int i;
	for ( i = left; i < right; i++ )
		cout << a[i] << ", ";
	cout << a[i];
}


void quicksort( int a[], int left, int right )
{
	int i = left;
	int j = right;
	int pivot = a[ (left + right)/2 ];
	int swp;

	while ( i <= j ) 
	{
		while( a[i] < pivot )
			i++;
		while ( a[j] > pivot )
			j--;

		if ( i <= j ) 
		{
			if ( i < j ) // swap only if i < j 
			{
				swp = a[i];
				a[i] = a[j];
				a[j] = swp;
			}
			i++;
			j--;
		}
	}

	if ( left < j )
		quicksort( a, left, j );
	if ( i < right )
		quicksort( a, i, right );

}


void quicksorttutor( int a[], int left, int right ) 
{
	int i = left;
	int j = right;
	int pivot = a[ (left + right)/2 ];
	int swp;

	cout << "Qsorting: left = " << left << ", right = " << right << "; pivot = " << pivot << endl;
	cout << "The array is:\n";
	printarray( a, left, right );
	cout << endl;
	cout << "\nPress something to continue";
	cin.get();


	while ( i <= j ) 
	{
		while( a[i] < pivot )
			i++;
		while ( a[j] > pivot )
			j--;

		if ( i <= j ) 
		{
			if ( i < j ) // swap only if i < j 
			{
				cout << "\nSwapping a[" << i << "] = "  << a[i] << " with a[" << j << "]=" << a[j] << endl;  
				swp = a[i];
				a[i] = a[j];
				a[j] = swp;
				cout << "\nPress something to continue";
				cin.get();
				cout << "\nThe array is:\n";
				printarray( a, left, right );
				cout << endl;
			}
			i++;
			j--;
		}
	}

//	cout << "\nThe array is:\n";
//	printarray( a, left, right );
	cout << endl;
	cout << "--------------------------------------" << endl;
	cout << "\nPress something to continue";
	cin.get();

	if ( left < j )
	{
		cout << "Calling left quicksort(a, " << left << ", " << j << ")" << endl; 
		quicksorttutor( a, left, j );
	}
	if ( i < right )
	{
		cout << "Calling right quicksort(a, " << i << ", " << right << ")" << endl; 
		quicksorttutor( a, i, right );
	}
}
