#include <iostream>
using namespace std;
int main(){

	int n[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	cout << "integer \tsquare \t\tcube" << endl;
	for( int k=0; k<11 ; k++ ){
		cout << n[k] << "\t\t" << n[k]*n[k] << "\t\t" << n[k]*n[k]*n[k] << endl;
	}
	return 0;

}

