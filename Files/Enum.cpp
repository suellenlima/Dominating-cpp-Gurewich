#include <iostream>
using namespace std;

// In C ++, simply place the enum keyword before the enumerated variable once, in the declaration statement.

enum number {one, two, three, four, five};

int main () {
	
number MyNumber;

MyNumber = one;
if (MyNumber == 0) {
	cout << "\n My Number = one";
}
MyNumber = two;
if (MyNumber == 1) {
	cout << "\n My Number = two";
}	
MyNumber = three;
if (MyNumber == 2) {
	cout << "\n My Number = three";
}
MyNumber = four;
if (MyNumber == 3) {
	cout << "\n My Number = four";
}
MyNumber = five;
if (MyNumber == 4) {
	cout << "\n My Number = five";
}

MyNumber = (number) (two + three) ;
if (MyNumber == 3)
cout << "\n two + three = 3";
}
