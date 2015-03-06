/*


   BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater

*/

#include <iostream>
using namespace std;
int main(){
    double weight,height,BMI;
    string BMIvalue = "\n Your BMI value indicate you are ";
    cout << " Enter your weight in pounds : " ;
    cin >> weight;
    cout << " Enter your height in inches : " ;
    cin >> height;

    BMI = (weight*703) / (height*height);

    cout << BMI << endl;

    if ( BMI >= 30 )
        cout << BMIvalue << "obese." << endl;
    else if ( BMI <= 29.9 && BMI >= 25)
        cout << BMIvalue << "overweight." << endl;
    else if ( BMI <= 24.9 && BMI >= 18.5 ) 
        cout << BMIvalue << "normal." << endl;
    else
        cout << BMIvalue << "underweight." << endl;



}
