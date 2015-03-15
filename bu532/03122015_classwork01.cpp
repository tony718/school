/* Name Tony Wong
   Class Work
   Date 03/12/2015
   */

#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

    string padString (int number);
    string CintoString(int num);
int main(){
    
    string output = " ";
    string space = " ";
    string ijStr;
    int ij = 0;
    
    for (int i=1 ; i<=10 ; i++ ){
        for(int j=1; j<=10 ; j++){
                ij =i*j;                
//                cout << ij << padString(ij);
                  cout << CintoString(ij)<< padString(ij) ;
            }
            cout << endl;
        
        }
cout << output;    
    
    system("PAUSE");
    return 0;
    }
    
    string padString (int number)
    {
           if (number<10)
           return "   ";
           else if (number<100)
           return "  ";
           else
           return " ";
           }


string CintoString(int num){
       string answer, strTC, strHC, strOC;
       int hund, tens, ones;
       char hc = '    ', tc = '    ', oc = '    ';
       
       if ( num >= 100){
            hund = num/100;
            num = num - 100;
            hc = hund + 48;
           }
       else if (num <= 10){
            tens = num/10;
            num = num - 10;
            tc = hund + 48;
            }
       ones = num;
       oc = hund + 48;     

       strHC = hc;
       strTC = tc;
       strOC = oc;

       answer = static_cast<string>(strHC + strTC + strOC);
       return answer;
            }
       
