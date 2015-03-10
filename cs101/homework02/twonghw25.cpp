/*
Name: Tony Wong
Homework: #5
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){

	double a, b, c, d, x1, x2, xr, xi;
	do{

		cout << " Enter value for quadratic equation a(x)^2 + b(x) + c = 0 : ";
		cin  >> a >> b >> c;
		if(a==0)
			cout << " value a can not be zero, please enter a valid value\n\n" << endl;
	}while(a==0);


	d = (pow(b,2)) -4*(a*c);



	if (d > 0){
		x1 = ((-b) -(sqrt(d)))/(2*a);
		x2 = ((-b) +(sqrt(d)))/(2*a);
		cout << "Solution : " << x1 << " , " << x2 << endl;
	}
	else if (d < 0){
		xr = -b /(2*a);
		xi = sqrt(-d)/(2*a);
		cout << " Solution: " << xr << " -i * " << xi << " , "  << xr << " + i * " << xi << endl;    
	}
	else{
		x1 = ((b*-1) -(sqrt(d)))/(2*a);
		cout << " Solution : " << x1 << endl;
	}


	return 0;

}
