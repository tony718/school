/*

   Write a program that nds the equation of the line determined by two given points. For the
   two points you should use 4 variables double x1, y1, x2, y2; Once the user enters these values,
   the program continues by determining the equation of the line passing through (x1, y1) and (x2,
   y2).
   Note, that there are two cases:
   1. Slope is undened (vertical line, i.e. x1 == x2)
   2. Slope is dened. In the latter case, you will also have to compute the y-intercept. Use double
   m, b; for slope and y-intercept respectively.
   The code should print the equation of the line.*/


#include <iostream>
using namespace std;
int main(){

    double x1=0, x2=0, y1, y2, m, b;

    do{
        cout << " Point 1: Enter value for X: ";
        cin >> x1;
        cout << " Point 1: Enter value for Y: ";
        cin >> y1;
        cout << " Point 2: Enter value for X: ";
        cin >> x2;
        cout << " Point 2: Enter value for Y: ";
        cin >> y2;

        cout << "\n You have entered (" << x1 << ","<<  y1 << ") and (" << x2 << "," << y2 <<")\n" << endl; 

        if (x1 == x2)
            cout << " Points entered rest on the same X axis\n This results in a straight vertial line"
                << "\n Concept of slope does not work for vertical lines\n\n Please try again... \n\n";
    }while (x1 == x2);

    m = (y2-y1) / (x2-x1);
    b = (m*-x1) + y1;
    cout << " Slope of the line            :  m = " << m << endl;
    cout << " Equation of the line         :  y = " << m << "x + " << b << endl; 
    cout << " Point slope form of (" << x1 << "," << y1 << ")   :  y - " << y1 << " = " << m << "( x - " << x1 << " )" << endl;
    cout << " Point slope form of (" << x2 << "," << y2 << ")   :  y - " << y2 << " = " << m << "( x - " << x2 << " )" << endl;

return 0;
}
