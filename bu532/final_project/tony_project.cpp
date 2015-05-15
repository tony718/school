#include<iostream>
#include <fstream>
using namespace std;

int main(){
	
	ifstream RecSides;
	RecSides.open("data.txt");

	double RecData[10][2];
	
	int i;
	for (i = 0 ; i < 10 ; i++)
		RecSides >> RecData[i][1] >> RecData[i][2];
	

	for( int j = 0 ; j < i ; j++){
		cout << RecData[j][1] << " " << RecData[j][2] << endl;
	}
}