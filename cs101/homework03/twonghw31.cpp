#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main(){

    double sum, n, k = 1;
    double sign;

    cout << " Please enter \"n\" value for the following series: \n"
        << " Sn = 1 - (1/2) + (1/3) - (1/4) -.... +-1/n : ";
    cin >> n;

    sign = -1;
    sum = 0;

    for(double counter = 1  ; counter<=n ; counter++ ){
        if(n == 1){
            sum = 1;
            break;}

            sum += (1/counter);
            sum *= sign;
    }

    cout << "the total sum of this series is " << sum << endl;
    cout << "the value of log(2) is : " << log(2) << endl;

    return 0;
}
