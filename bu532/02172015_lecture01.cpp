/* Name: Tony Wong
   Date: February 17
   Type: Classwork
   */

#include <iostream>
using namespace std;
int main(){
       
       double fuel_gauge_reading;
       cout << " Enter fuel gauge reading: ";
       cin >> fuel_gauge_reading;
       
       if (fuel_gauge_reading < 0.75){
                              
          if (fuel_gauge_reading < 0.25){
             cout << " Fuel very low. Caution! \n";}
             
             }
       else
           cout << " Fuel over 3/4.  Don't Stop Now\n";
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
       
              
       system("PAUSE");
       return 0;
       
       }
