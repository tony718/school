// Tony Wong
#include <iostream>
using namespace std;
int main(){


/* Write an if-else statement that outputs the word High if the value of the
variable score is greater than 100 and Low if the value of score is at most
100. The variable score is of type int. */

    int n1;
    cout << " Please enter score for evaluation: ";
    cin >> n1;
    cout << endl << endl;

    if (n1 > 100){
        cout << " High ";}

    else {
        cout << " Low ";}

    cout << endl << endl;

return 0;
}
