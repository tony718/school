/*
Name: Tony Tsz Wong
Homework 3.2

*/

#include <iostream>
#include <cmath>

#define PI 4*atan(1)

using std::cin;
using std::cout;
using std::endl;

int main(){
    double p = 0;
    int n , sign = -1;

    cout << " Enter n value for the following series: "
        << " 4 - (4/3) + (4/5 - (4/7) + ... (+-) 4/(2n-1) : ";
    cin >> n;

    for(int counter = 1 ; counter <= n; counter++){
        if (n == 1){
            p = 4;
            break;}

        p += 4/(2.0*counter-1);
        p *= sign;
    }

    cout << " Gregory-Leibniz series = " << p << endl;
    cout << " 4*atan(1) = " << PI << endl;

	return 0;

}

