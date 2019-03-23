// assignment operator. attribute value from one object to another.

#include <iostream>
#include <string.h>

using namespace std;

class Phone
{
	public:
			Phone ( char *s );  // construction
			
			void operator = (Phone &other);
			
			~Phone ();		    // destructive
			
			char *sPhoneInfoPtr;
};

Phone::Phone( char *s )
{
		int iArrayLength;
		iArrayLength = strlen(s) + 1;
		
		sPhoneInfoPtr = new char [ iArrayLength ];
		strcpy ( sPhoneInfoPtr, s );
}

void Phone::operator =( Phone &other )
{
		int iArrayLength;
		
		iArrayLength = strlen (other.sPhoneInfoPtr);
		delete sPhoneInfoPtr;
		sPhoneInfoPtr = new char [ iArrayLength + 1];
		strcpy ( sPhoneInfoPtr, other.sPhoneInfoPtr );
}

Phone::~Phone ()
{
		delete sPhoneInfoPtr;
}

int main () 
{
		Phone MyPhone ("(555) 555-1234 ");
		Phone HerPhone ("(555) 555-4321 ");
		
		cout << "\n MyPhone.sPhoneInfoPtr = " << MyPhone.sPhoneInfoPtr;	
		cout << "\n herPhone.sPhoneInfoPtr = " << HerPhone.sPhoneInfoPtr;	
		
		// note: if you use a pointer as a data member of a class, then use a statement like: HerObject = MyObject; the string that the pointer points to will be common to both objects. therefore, when you change the string of an object, that of the other is also changed, because each object must be completely independent of all other objects.
		// note: when the statement below is executed in main (), the program automatically executes the function operator = ()
		
		HerPhone = MyPhone;
		
		cout << "\n MyPhone.sPhoneInfoPtr = " << MyPhone.sPhoneInfoPtr;	
		cout << "\n HerPhone.sPhoneInfoPtr = " << HerPhone.sPhoneInfoPtr;
		
		strcpy ( MyPhone.sPhoneInfoPtr, "(999)999-9999");
		
		cout << "\n MyPhone.sPhoneInfoPtr = " << MyPhone.sPhoneInfoPtr;	
		cout << "\n HerPhone.sPhoneInfoPtr = " << HerPhone.sPhoneInfoPtr;		
}
