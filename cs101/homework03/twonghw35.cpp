/*
Name: Tony Tsz Wong
Homework 3.5: COMPOUND INTEREST CALCULATOR

*/
#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;

int main(){
	
	double p, a , r;
	unsigned int k, t;
	char quit;
	
	
	do{

		//**user inputs
	  	cout << " Initial deposit (principal): ";
		cin >> p;
		cout << " Annual rate (**Enter 8.5 for 8.5%**): ";
		cin >> r;
		cout << " Number of compound(s) per year: ";
		cin >> k;
		cout << " Number of year(s): ";
		cin >> t;
	
	 	//**initialization
		a = 0;
		r = r/100;
		
		//**create table with results
		cout << "\n Period \tYearly Interest \tBalance" << endl;
		cout << " ------ \t--------------- \t-------" << endl;
	
		for ( int i = 0; i < k*t ; i++){
			a = (1+(r/k))*p;
			cout << fixed << setprecision(2) << " " << i+1 << "\t\t" << (1+(r/k))*p-p << "\t\t\t"
				 << p+((1+(r/k))*p-p) << endl;
			p = p+((1+(r/k))*p-p);
		}
		
		//**loop breaker
		cout << "\n Would like to evaluate different values? (y/n)";
		cin >> quit;
		cin.ignore(256, '\n');
		cout << "\n ---------------------------------------------\n\n";

	
	}while( (quit != 'n') && (quit != 'N')) ;
	
	return 0;
	
	
	
}