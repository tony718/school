#include<iostream>
#include<vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	
	vector<vector <string> > namedb(10,vector<string>(10));

	cout << "current size of namedb = " << namedb.size() << endl;
		
	for( unsigned int i=0 ; i < 10 ; i++){
		namedb[i][1] = "Lebron";
		namedb[i][2] = "James";

}
	for( unsigned int i=0 ; i < 10 ; i++){
		cout << namedb[i][1] << "\t" << namedb[i][2] << endl;
			 }

	namedb[3][3]="hello";
	cout << namedb[3][3] << endl;
}