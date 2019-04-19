//Shows how to pass a parameter to the pointer function and still prevent the calling function from changing the value of the passed parameter.

#include <iostream>
#include <string.h>

using namespace std;

struct MYSTRUCTURE 
{
	int MyInterger;
	char MyString[255];
};

void MyFunction_ByPtr ( const MYSTRUCTURE *My );

int main () {
	MYSTRUCTURE MyStructure;
	MyStructure.MyInterger = 6;
	strcpy (MyStructure.MyString, "From C to C++ in 2 Weeks");

	MyFunction_ByPtr (&MyStructure);
	
}

void MyStructure_ByPtr ( const MYSTRUCTURE *My ){
	
	cout << "\n" << My->MyInterger;
	cout << "\n" << My->MyString << endl;
	
}
