//Tony Wong

#include <iostream>
using namespace std;

/*Suppose savings and expenses are variables of type double that have
 * been given values.
 *
 * Write an if-else statement that outputs the word
 * Solvent, decreases the value of savings by the value of expenses, and
 * sets the value of expenses to 0, provided that savings is at least as large
 * as expenses.
 *
 * If, however, savings is less than expenses, the if-else
 * statement simply outputs the word Bankrupt and does not change the
 * value of any variables.*/

int main(){
    double savings, expenses;
    
    cout << " Enter ammount in savings :";
    cin >> savings;
    cout << " Enter expenses :";
    cin >> expenses;
    
    if ( savings >= expenses){
        savings = savings - expenses;
        expenses = 0;
        cout << " Solvent ";
        }

    else {
        cout << " Bankrupt ";
        }
    
    
    
    return 0;
}
