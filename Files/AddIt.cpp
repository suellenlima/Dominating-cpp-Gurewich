#include <iostream>
using namespace std;

// overload function

int AddIt ( int ia, int ib);
float AddIt ( float fa, float fb);

int main () {
	
	int iResult;
	int ia = 1;
	int ib = 2;
	iResult = AddIt (ia, ib);
	cout << "\n 1 + 2 = " << iResult ;
	float fResult;
	float fa = 1.1;
	float fb = 2.1;
	fResult = AddIt (fa, fb);
	cout << "\n 1.1 + 2.1 = " << fResult;
	
}

int AddIt (int a, int b) {
	return a+b;
}
float AddIt (float a, float b){
	return a+b;
}
