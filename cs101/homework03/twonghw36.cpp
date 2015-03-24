#include <iostream>
using namespace std;
int main(){
	
	int n = 0, j = 0;
	int digits = 1;
	int power = 1;

	cout << " Enter a number : ";
	cin >> n;
	
	// if negative number, convert to positive
	if (n<0)
	n = n*-1;
	j = n;
	
	for (digits = 1 ; n > 10 ; digits++){
	n = n/10;
	}
	
	// display number of digits
	cout << " Total Number of digits " << digits << endl;
	
			
		
	for(int k = 2;  k <= digits ; k++){	
	power *= 10;}
//	cout << " ** POWER ** " << power << endl;
	
	for(int i = 1 ; digits >= i ; i++ ){

// display power
			
	cout << " Digit " << i << " is: " <<  j/power << endl;
//	cout << "Current Power " << power <<endl;	
//	cout << j << "/" << power << " = " << j/power << endl;
//	cout << "AfterPower " << power <<endl;		
	j = j%power;
	power = power/10;
//	cout << j << endl << endl;	
}
return 0;
}
	
	
	
	


