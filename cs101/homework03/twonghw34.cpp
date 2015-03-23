#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;


int main(){
    
    int n;
    int x, e;
    double top = 0, bottom = 1;

cout << "enter n " << endl;
cin >> n;
cout << "enter x " << endl;
cin >> x;

    for(int counter = 1 ; counter <= n ; counter++){
    top +=  pow(x,counter);
    bottom = 1;
    for(int counter2 = 1; counter2 <=counter ; counter2++){
    bottom *= counter2;}  
    }


cout << top << endl;
cout << bottom;        
    
    
    
    
    return 0;
}
