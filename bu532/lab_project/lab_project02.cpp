/* Name: Tony Wong
 * Lab project 2
 * interest minimum balance calculator
 */

#include <iostream>
using namespace std;

int main(){

    /* write a program to compute the interest due, total amount due,
     * and the minimum payment for a revolving credit account.
     * The program accepts the account balance as input, then adds
     * on the interest to get the total amount due.
     * The rate schedules are the following: 
     *
     * the interest is 1.5% on the first 1000 and 1% on any 
     * amount over that. 
     *
     * The minimum payment is the total amount due if that is $10
     * or less; otherwise, it is 10$ over 10% of the total amount
     * owed,  Whicheve is larger.
     * Your program should include a loop that lets the user repeat
     * this calculation until the user says she or he is done*/


    double balance, total;
    double interest, minpayment;
    char exit ='y';
    do {

        cout << " Enter balance: ";
        cin >> balance;

        if (balance > 1000){
            interest = (1000 * .015) + ((balance-1000) * .01);}
        else{
            interest = balance * .015;}
        total = balance + interest;

        if (total > 10){
            minpayment = total * .10;

            if (minpayment <= 10)
                minpayment = 10;}
        else
            minpayment = total;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        cout << "\n\n Interest due: " << interest << endl;
        cout << " Total amount due: " << total << endl;
        cout << " Minimum payment due: " << minpayment << endl;

        cout << " \n\n Do you wish to enter another value to calculate? \n";
        cout << " Enter (y) to rerun or any key to exit: ";
        cin >> exit;
        cout << endl << endl;
    }while (exit =='y');

    return 0;
}
