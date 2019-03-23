// how to pass parameters by reference; const is used so that the calling function can not change the value of the passed parameter.

// you should use this technique when you do not want the calling function to create a new variable in memory or change the value of the passed parameter.

#include <iostream>
#include <string.h>

using namespace std;

struct MYSTRUCTURE
{
	int MyInterger;
	char MyString[255];
};

void MyFunction_ByRef ( const MYSTRUCTURE &MyStructure);

int main () {
	
	MYSTRUCTURE MyStructure;
	
	MyStructure.MyInterger = 5;
	strcpy (MyStructure.MyString, "From C to C++ in 2 Weeks") ;
	
	MyFunction_ByRef (MyStructure) ;
	
}

void MyFunction_ByRef ( const MYSTRUCTURE &My) {
	cout << "\n" << My.MyInterger;
	cout << "\n" << My.MyString << endl;
}
