#include <iostream>
using namespace std;
int main(){

	int n1, digit1, digit2, digit3, digit4, digit5, remainder;

	cout << " Please enter a five-digit integer: ";
	cin >> n1;

	digit1 = n1/10000;
	remainder = n1%10000;
	digit2 = remainder/1000;
	remainder = remainder%1000;
	digit3 = remainder/100;
	remainder = remainder%100;
	digit4 = remainder/10;
	remainder = remainder%10;
	digit5 = remainder/1;

	cout << " The digits of " << n1 << " are : " << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 << endl;


	return 0;

}

