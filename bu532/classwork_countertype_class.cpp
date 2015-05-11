/* Name: Tony Wong
   Project: Counter Type
*/

#include <iostream>
using namespace std;

class CounterType{
      public:
             CounterType( );				 // creates the counter to 0
             CounterType(int num);			 // creates the counter to num
             void compare(int num);
			 void increment();
			 void increment(int num);
             void decrement();
			 void decrement(int num);
             void output (ostream& o);
			 int get_count();
			 
      private:
              int count;
};

int main (){
    CounterType max(2147483647), min(1);
	
	cout << "max.output : "; max.output(cout);
	max.decrement(200);
	
	cout << "max.output : "; max.output(cout);
	max.decrement(200);
	
	cout << "max.output : "; max.output(cout);
	max.increment(500);
	
	cout << "max.output : "; max.output(cout);
	
	
    return 0;
}

CounterType::CounterType() : count(0)

{
   //Body intentionally empty
   //Creates the counter to 0
}

CounterType::CounterType(int num){
    if (num < 0){
        cout << "Illegal values, please use positive integers." << endl;
        exit(1);
    }
    count = num;
}

void CounterType::compare(int num){
	if (count+num < 0){
		cout << "Total count becoming negative integer, aborting program..." << endl;
		exit(1);}
	else count += num;
}

void CounterType::increment(){
	compare(1);
}

void CounterType::increment(int num){
	compare(num);
}

void CounterType::decrement(){
	compare(-1);
}

void CounterType::decrement(int num){
	compare(-num);
}

int CounterType::get_count(){
	return count;
}

void CounterType::output (ostream& o){
	    o << "current count : " << count << endl;
}