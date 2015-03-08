/* Name: Tony Wong
 * Lab project #1
 * Madlib assignment with special conditions.
 */

#include <iostream>
using namespace std;
int main(){
    string  iName, myName, adjective, food, color, animal;
    char finished;
    int number, loop;

    do{
        number = 0;
        loop = 0;
        cout << " Please enter last name of instructor    : ";
        cin >> iName;
        cout << " Please enter your name                  : ";
        cin >> myName;
        cout << " Please enter a name of a food           : ";
        cin >> food;

        while ( loop != 1 ){

            cout << " Please enter a number between 100 - 200 : ";
            cin >> number;

            if ( number > 99 && number < 201 ){
                loop = 1;}
            else{
                if ( number < 100 ){
                    cout <<  " **Invalid Value** " << number << " is less than 100\n"; }
                if ( number > 200 ){
                    cout << " **Invalid Value** " << number << " is greater than 200\n";}
            }
        }

        cout << " Please enter an adjective               : ";
        cin >> adjective;

        cout << " Please enter a color                    : ";
        cin >> color;

        cout << " Please enter an animal                  : ";
        cin >> animal;

        cout << "Dear Instructor "  << iName << " , \n\n      I am sorry that I am unable to turn " 
            << "in my homework at this time.  First, I ate a rotten " << food <<", which made" 
            << " me turn " << color <<  " and extremely ill. I came down with a fever of " << number
            << ". Next, my " <<  adjective << " pet "<< animal << " must have smelled the remains of" 
            << " the " << food << " on my homework, because he ate it.  I am currently rewriting my" 
            << " homework and hope you will accept it late."
            << "\n\nSincerely, \n" << myName << endl;
        cout << "\n\n\n Would you like to exit? \n"
            << "(y/Y) to exit or any key to start over.   ";
        cin >> finished;
    }while(finished != 'y');


    return 0;


}
