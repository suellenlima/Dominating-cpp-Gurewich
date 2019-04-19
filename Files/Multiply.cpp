//this program shows how to assign default values to the function parameters.

#include <iostream>
using namespace std;

int multiply ( int x=3, int y=10);

int main () {
	
    float iResult = multiply();
    
    iResult = multiply();
	cout <<"When using multiply():"<<" iResult= "<< iResult << endl;
	iResult = multiply (4);
	cout <<"When using multiply(4):"<< " iResult= "<< iResult << endl;
	iResult = multiply (4,5);
	cout <<"When using multiply(4,5):" << " iResult= "<< iResult << endl;
	
}

int multiply (int x, int y)
{
	return x*y;
}
