// the program determines the number of characters in the string, dynamic allocation

#include <iostream>
#include <string.h>

using namespace std;

class Date
{
	public: 
			Date ( char *string);   //construtor function
			
			void DisplayMonth ();
			void UpdateThesMyString ( char *string );
			
			~Date();				//destructive function
	private:
			char *sMyStringPtr; 
};

	Date::Date (char *string)
	{
			int iLengthOfString;
			
			iLengthOfString = strlen ( string ) + 1;
			sMyStringPtr = new char [ iLengthOfString ];
			strcpy ( sMyStringPtr, string );
	 } 
	 
	 void Date::DisplayMonth()
	 {	
	 		cout << sMyStringPtr << endl;
	 }
	 
	 void Date::UpdateThesMyString( char *string )
	 {
	 		char *sTmpPtr;
	 		
	 		//computes the extension of the new string and updates the member.
	 		
	 		int iLengthOfString;
	 		iLengthOfString = strlen (string) + 1;
	 		
	 		sTmpPtr = new char [iLengthOfString];
	 		strcpy ( sTmpPtr, string );
	 		
	 		delete sMyStringPtr;
	 		
	 		sMyStringPtr = sTmpPtr;
	 }
	 
	 Date::~Date ()
	 {
	 		delete sMyStringPtr;
	 }
	 
	 
	 int main ()
	 {
	 		Date MyMonth ( "December" );
	 		
	 		MyMonth.DisplayMonth();
	 		
	 		MyMonth.UpdateThesMyString( "The Month is: December" );
	 		
	 		MyMonth.DisplayMonth();
	 }

