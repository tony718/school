/* Name: Tony Wong
   Date: February 19
   Type: Classwork
   */

#include <iostream>
using namespace std;
int main(){
       
       double fuel_gauge_reading, GPA;
       
       cout << " Enter fuel gauge reading: ";
       cin >> fuel_gauge_reading;
       
       if (fuel_gauge_reading < 0.75){
                              
          if (fuel_gauge_reading < 0.25){
             cout << " Fuel very low. Caution! \n";}
             
             }
       else
           cout << " Fuel over 3/4.  Don't Stop Now\n";
       
       cout << " Fuel Guage Reading is: " << fuel_gauge_reading << endl;
       /*********************************************************/
       
       double average;
       char letter = 'F';
       
       cout << " Enter average: ";
       cin >> average;
       
       if (average >=90 ) {
                   letter = 'A';
       }else if ( average >=80 ){
                   letter = 'B';
       }else if ( average >=70 ){
                   letter = 'C';
       }else if ( average >=60 ){
                   letter = 'D';
       }else{
                   letter = 'F';}       
        cout << " Letter Grade Is: " << letter << endl;     
              
       /****************switch statement on letter***************/
       
       switch (letter){
              case 'A':
                   GPA = 4.0;
                   break;
              case 'B':
                   GPA = 3.0;
                   break;
              case 'C':
                   GPA = 2.0;
                   break;
              case 'D':
                   GPA = 1.0;
                   break;                   
              case 'F':
                   GPA = 0.0;
                   break;
              default:
                   cout << " Invalid  value for letter";
       }
       cout << " Your GPA is: " << GPA << endl;
       
       int num = 0;
       num++;
       cout << num << endl;
       num++;
       cout << num << endl;
       cout << num << endl;       
       
       system("PAUSE");
       return 0;
       
       }
