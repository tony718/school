/* Name: Tony Wong
   Date: February 19
   Type: Classwork 3b
   */

#include <iostream>
using namespace std;
int main(){
    
    int sum = 0;
    for(int i = 1; i<=10;i++){
            sum = sum + i;
            cout << "I is: "<< i << " Sum: " << sum << endl;            
            }


    int i=1;
    for(; i<=10;i++){
            sum = sum + i;
            cout << "I is: "<< i << " Sum: " << sum << endl;            
            }

    for(int i = 1; i<=10; i++){
            for ( int j=1; j<=10;j++){
                cout << i * j << "   ";
                }
                cout << endl;

            }



    system("PAUSE");            
    return 0;

    
}
