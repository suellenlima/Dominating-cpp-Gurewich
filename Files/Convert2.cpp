// shows how to write a code that enables the computer to convert data between objects of different classes.

#include <iostream>
#include <string.h>
using namespace std;

class Compensation
{
	public:
		Compensation ( float compens );
		~Compensation ();
		float fCompens;
};

Compensation::Compensation( float compens )
{
	fCompens = compens;
}

Compensation ::~Compensation()
{
}

class Salary
{
	public:
 		// prototype of the constructor function 1 (used for the conversion of Compensation into Salary).
 		Salary (Compensation compens);
		
		//prototype of the constructor function 2.
		Salary (float base, float bonus);
		
		~Salary();
		
		//used to convert Salary into Compensation.
		operator Compensation ();
		
		float fBase;
		float fBonus;
		
};

Salary::Salary (Compensation compens)
{
	fBase = compens.fCompens;
	fBonus = 0.0;
}

Salary::Salary( float base, float bonus )
{
	fBase = base;
	fBonus = bonus;
}

Salary :: ~Salary ()
{
}

Salary::operator Compensation ()
{
	return fBase + fBonus;
}

int main ()
{
	Compensation HisCompens (0);
	
	Salary HisSalary (40000.0,10000.0);
	
	cout << "\n HisSalary.fBase =" << HisSalary.fBase;
	cout << "\n HisSalary.fBonus =" <<HisSalary.fBonus;
	cout << "\n";

//converts a salary object to a compensation object. (this statement causes the compiler to automatically execute the member function Compensation () from HisSalary)
HisCompens = HisSalary;

cout << "\n HisCompens.fCompens =" << HisCompens.fCompens;

HisCompens.fCompens = 70000.00;

cout << "\n HisCompens.fCompens =" << HisCompens.fCompens;
cout << "\n";

//converts a compensation object to a salary object. (this instruction causes the compiler to automatically execute the constructor function 1 of HisSalary).

HisSalary = HisCompens;

cout << "\n HisSalary.fBase =" << HisSalary.fBase;
cout << "\n HisSalary.fBonus =" << HisSalary.fBonus;
cout << "\n\n";
}
