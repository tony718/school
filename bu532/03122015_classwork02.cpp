/*


  Creating function that will convert F to C.

*/

#include <iostream>
using std::cout;
using std::cin;

double FtoC(double F);
void output(double c, double f);

int main(){
    
    double c, f;
    char finished = 'y';

do {
    cout << "\n\n Enter value for F : ";
    cin >> f;
    c = FtoC(f);
    output(c,f);
    cout << "\n Enter (y/Y) to do again, or any key to exit: " ;
    cin >> finished;
}while(finished == 'y');
//    f = 212.0;
//    c = FtoC(f);
//    output(c,f);
//    cout << FtoC(32.0);
//    cout << FtoC(212.0);

    system("PAUSE");
    return 0;    
    }


double FtoC(double F)
       {
       return  ((5.0/9.0) * (F-32));
       }

void output(double c, double f){
     cout << "\n\n The fahrenheit temperature is: " << f << " the celsius temperature is: " << c << "\n";
     }
