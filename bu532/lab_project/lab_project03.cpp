/*
Name: Tony Wong
Class: Business Programming With Objects BU 521 M24
Lab Project 3 - Figuring out change

*/

#include <iostream>
using namespace std;

void compute_coins(int coin_value, int& num, int& amount_left);
void print_line(int lines);

int main(){

    int num = 0 , amount_left = 0;
    char exit = 'n';

    do{

        do{
            cout << "\n Please enter any amount of change from 1 cent to 99 cents: ";
            cin >> amount_left;

            if((amount_left < 0) || (amount_left > 100))
                cout << " invalid amount, " << amount_left << " cents is not between the range of 1 and 99. \n please try again.";

        }while((amount_left < 0) || (amount_left > 100));

        cout << " "<< amount_left << " cents can be given as ";

        if (amount_left >= 25)
            compute_coins(25,num,amount_left);
        if (amount_left >= 10){
            cout << ", ";
            compute_coins(10,num,amount_left);
		}
        if (amount_left >= 1){
            cout << ", ";
            compute_coins(1,num,amount_left);
		}

        print_line(2);
        cout << " Would you like like to exit? (y/n) ";
        cin >> exit;
        cin.ignore(256, '\n');

    }while( exit != 'y' && exit != 'Y');

    return 0;

}

void compute_coins(int coin_value, int& num, int& amount_left)
{
    num = amount_left/coin_value;
    amount_left -= (num*coin_value);
    if (coin_value == 25)
    {
        if (num > 1)
            cout << num << " quarters";
        else
            cout << num << " quarter";
    }
    if (coin_value == 10){
        if (num > 1)
            cout << num << " dimes";
        else
            cout << num << " dime";
    }
    if (coin_value == 1){
        if (num > 1)
            cout << num << " pennies";
        else
            cout << num << " penny";
    }
}


void print_line(int lines)
{

    for(int k=0 ; k < lines ; k++ )
        cout << "\n";

}
