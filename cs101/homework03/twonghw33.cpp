#include <iostream>
#include <cmath>

using namespace std;

int main(){

   double x, zeta = 0;
   int n;


cout << " Enter numeric value for n : ";
cin >> n;
cout << " Enter numeric value for x : ";
cin >> x;

    for(int counter = 1; counter<=n ; counter++ ){
        zeta += pow(counter,x);
        cout << zeta <<endl;
        }
   cout << " zeta(" <<  n << "," << x 
        << ") = "<< static_cast<double>(1/zeta) << endl;
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    }





