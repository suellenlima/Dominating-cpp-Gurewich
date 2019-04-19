// Concatenation of Strings. Would not it be better if, 
// instead of using the strcpy () and strcat () functions, you could use the + operator?

#include <iostream>
#include <string.h>
using namespace std;

class String
{
	public:
		String ( char *string );
		~String ();
		String operator+ (String);
		char sString[100];
};

String::String(char * string)
{
	strcpy (sString,string);
}

String::~String()
{
}

String String::operator+(String str2)
{
	// creates a temporary string object for the result.
	String result ("");
	
	strcpy (result.sString, sString);
	strcat (result.sString, str2.sString);
	
	return result;
}

int main () 
{
	String String1 ("1234");
	String String2 ("67890");
	String String3 ("");
	
	cout << "\n String1.sString = " << String1.sString;
	cout << "\n String2.sString = " << String2.sString;
	cout << "\n\n";
	
	String3 = String1 + String2;
	
	cout << "\n String3.sString = " << String3.sString;
	cout << "\n\n";
}
