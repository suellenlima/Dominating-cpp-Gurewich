// When you declare a member function as static, it can only use static variables.
#include <iostream>
#include <string.h>
using namespace std;

class Salesperson
{
	public:
		Salesperson (char *name, float sales);
		
		~Salesperson ();
		
		static float GetCommiss ( void );
		static void SetCommiss ( float fNewCommiss);
		
	private:	
		
		char *sName;
		float fSales;
		static float fCommiss;
};

float Salesperson::fCommiss = 5.0;

Salesperson::Salesperson(char *name, float sales)
{
	int iStringLength;
	iStringLength = strlen(name) + 1;
	sName = new char [iStringLength];
	strcpy (sName, name);
	
	fSales=sales;
}

Salesperson::~Salesperson()
{
	delete sName;
}

float Salesperson::GetCommiss( void )
{
	return fCommiss;
}

void Salesperson::SetCommiss( float fNewCommiss )
{
	fCommiss = fNewCommiss;
}

int main ()
{
	Salesperson Person1 ("John Smith", 1000.00);
	Salesperson Person2 ("Tom Johnson", 20000.00);
	Salesperson Person3 ("Jane Smart", 30000.00);
	
	cout << "\n Initially:";
	
	cout << "\n fCommiss=" << Salesperson::GetCommiss();
	Salesperson::SetCommiss(10.0);
	
	cout << "\n\n";
	cout << "\n After updating Salesperson::fCommiss with 10:";
	cout << "\n fCommiss=" << Salesperson::GetCommiss();
		cout << "\n\n";
	
	return 0;
	system("pause");
}
