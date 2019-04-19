//It shows how a class that contains a static data member is defined. The program also shows how to initialize and access a static data member.

#include <iostream>
#include <string.h>
using namespace std;

class Salesperson
{
	public:
		Salesperson (char *name, float sales);
		
		~Salesperson ();
		
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

int main ()
{
	Salesperson Person1 ("John Smith", 1000.00);
	Salesperson Person2 ("Tom Johnson", 20000.00);
	Salesperson Person3 ("Jane Smart", 30000.00);
	
	cout << "\n Initially:";
	cout << "\n Person1.fCommiss =" << Person1.fCommiss;
	cout << "\n Person2.fCommiss =" << Person2.fCommiss;
	cout << "\n Person3.fCommiss =" << Person3.fCommiss;	
	
	Salesperson::fCommiss = 10.0;
	
	cout << "\n\n";
	cout << "\n After updating Salesperson::fCommiss with 10:";
	cout << "\n Person1.fCommiss =" << Person1.fCommiss;
	cout << "\n Person2.fCommiss =" << Person2.fCommiss;
	cout << "\n Person3.fCommiss =" << Person3.fCommiss;
	cout << "\n\n";
	
	return 0;
	system("pause");
}
