//shows how to write code that enables the compiler to do data conversion between objects and basic variable types.

#include <iostream>
#include <string.h>
using namespace std;

class Salary
{
	public:
		Salary ( float base );
		Salary ( float base, float bonus );
		
		~Salary ();
		
		operator float ();
		
		float fBase;
		float fBonus;

};

//constructor function 1 (tells the compiler how to convert float to salary)

Salary::Salary( float base )
{
	fBase = base;
	fBonus = 0.0;
}

//constructor function 2

Salary::Salary ( float base, float bonus )
{
	fBase = base;
	fBonus = bonus;
}

Salary::~Salary()
{
}

//tells the compiler how to convert Salary to float

Salary::operator float ()
{
	return fBase + fBonus;
}

int main ()
{
	float fMyFloat;
	
	Salary HisSalary ( 40000.0, 10000.0 );
	
	cout << "\n HisSalary.fBase =" << HisSalary.fBase;
	cout << "\n HisSalary.fBonus =" << HisSalary.fBonus;
	cout << "\n";
	
	//converts a salary object into a float variable. (This statement causes the compiler to automatically execute the member function float () from HisSalary.)
	fMyFloat = HisSalary;
	
	cout << "\n fMyFloat =" << fMyFloat;
	fMyFloat = 70000.00;
	
	cout << "\n\n\n fMyFloat =" << fMyFloat;
	cout << "\n";
	
	//converts a float variable to a Salary object. (This instruction causes the compiler to automatically execute the constructor function 1 of HisSalary.)
	HisSalary = fMyFloat;
	
	cout << "\n HisSalary.fBase =" << HisSalary.fBase;
	cout << "\n HisSalary.fBonus =" << HisSalary.fBonus;
	cout << "\n\n";
	
}
