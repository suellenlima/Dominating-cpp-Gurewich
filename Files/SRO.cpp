#include <iostream>
using namespace std;

int var = 7;

int main () {
	
int var = 14;

cout << "I am the global: Var = " << :: var << endl;
cout << "I am the local: Var = " << var << endl;
	
}
