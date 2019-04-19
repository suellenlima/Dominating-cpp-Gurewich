//Shows how an operator can be overloaded.

#include <iostream>
#include <string.h>
using namespace std;

class Salary
{
	public:
		Salary ( float base, float bonus);
		~Salary();
		Salary operator+ (Salary);
		
		float fBase;
		float fBonus;
};

Salary::Salary(float base, float bonus)
{
	fBase = base;
	fBonus = bonus;
}

Salary::~Salary()
{
}

Salary Salary::operator+(Salary sa12)
{
	float SumOfBase;
	float SumOfBonus;
	SumOfBase = fBase + sa12.fBase;
	SumOfBonus = fBonus + sa12.fBonus;
	
	return Salary(SumOfBase,SumOfBonus);
}

int main () 
{
	Salary HisSalary (40000.0,10000.0);
	Salary HerSalary (30000.0,20000.0);
	Salary TheirSalary (0.0,0.0);
	
	cout << "\n HisSalary.Base =" << HisSalary.fBase;
	cout << "\n HisSalary.Bonus = " << HisSalary.fBonus;
	cout << "\n\n";
	
	cout << "\n HerSalary.Base =" << HerSalary.fBase;
	cout << "\n HerSalary.Bonus =" << HerSalary.fBonus;
	cout << "\n\n";
	
	TheirSalary = HisSalary + HerSalary;
	
	cout << "\n Their Salary.Base =" << TheirSalary.fBase;
	cout << "\n Their Salary.Bonus =" << TheirSalary.fBonus;
	cout << "\n\n";
}

