#include <iostream>
#include <cstring>
using namespace std;


int main(){

char str1[5] = {'g', 'e','o','\0'};
char str2[] = "Hello";
const char * str3 = "Hello";


str1 [0] = 'G';
cout << endl;
for(int i = 0 ; str3[i] != '\0' ; i++)
    cout << str3[i];

cout << endl;


int counter = 0;
for(int i = 0 ; str3[i] != '\0' ; i++)
    counter++;
    cout << "length = " << counter  << endl;

return 0;
}
