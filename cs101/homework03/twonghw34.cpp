/*	

Name: Tony Tsz Wong
Homework 3.4
	
	Write a program that uses one variable int n (which should be positive) and double
	x and, using a for or while loop computes the following sum
	
	Store the above sum in double e. Your code should print the value of e as follows:
	cout << "e( " << n << " , " << x << " = " << e;
	
*/

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

unsigned factorial(unsigned n);

int main(){
    
    unsigned int n, x, g;
	double e;
	char quit;


	do{
		cout << " Enter positive interger for n: ";
		cin >> n;
		cout << " Enter positive interger for x: ";
		cin >> x;

		g = n;
		e = 1;
    
		for(int k = 1 ; k <= g ; k++){
			e += pow (x,n) / factorial(n);
			n--;
    	}

		cout << endl;
		cout << " Solution: e(" << g << "," << x << ") = " << e << endl;
		
		cout << "\n Would like to evaluate different values? (y/n)";
		cin >> quit;
		cin.ignore(256, '\n');
		
		cout << "\n--------------------------------------------------\n\n";
			
	}while( (quit != 'n') && (quit != 'N')) ;
    
    return 0;

}

unsigned factorial(unsigned n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}