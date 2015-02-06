//Tony Wong
#include <iostream>
using namespace std;

/*Write an if-else statement that outputs the word Passed provided the
 * value of the variable exam is greater than or equal to 60 and the value
 * of the variable programs_done is greater than or equal to 10. Otherwise,
 * the if-else statement outputs the word Failed. The variables exam and
 * programs_done are both of type int.*/

int main(){
    
    int exam, program_done;

    cout << " Enter exam grade: ";
    cin >> exam;
    cout << " Enter program_done variable: ";
    cin >> program_done;

    if ( exam >= 60 && program_done >= 10 ){
        cout << " Passed ";}
    else{
        cout << " Failed ";}
    
    
    
    
    
    
    
    
    
    return 0;
    
}
