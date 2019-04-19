// This program shows how a more complex class hierarchy is implemented.

#include <iostream>
#include <string.h>
using namespace std;

class Salary
{
	public:
		Salary (char *name);
		void PrintEmployeeName ();
		~Salary ();
	private:
		char sEmployeeName [50];
};

class Hours : public Salary
{
	public: 
		Hours ( char *name);
		void SetData ( float hw, float hr);
		float CalculatePay (void);
		~Hours ();
	private:
		float fHoursWorked;
		float fHourRate;
};

class Weeks : public Salary
{
	public: 
		Weeks ( char *name );
		void SetData ( float wr );
		float CalculatePay ( void );
		~Weeks ();
	private:
		float fWeekRate;
};

class Commiss : public Hours
{
	public:
		Commiss ( char *name );
		void SetData (float c, float t);
		float CalculatePay ();
		~Commiss ();
	private:
		float fCommission;
		float fTotalSales;
};

Salary::Salary( char *name )
{
	strcpy (sEmployeeName, name);
}

Salary::~Salary()
{
}

void Salary::PrintEmployeeName(void)
{
	cout << "\n sEmployeeName = " << sEmployeeName;
}

Hours::Hours ( char *name ) : Salary ( name )
{
	fHoursWorked = 40;
	fHourRate = 20;
}

Hours::~Hours()
{
}

Commiss::Commiss (char *name) : Hours(name)
{
	fCommission = 7.5;
	fTotalSales = 1000;
}

Commiss::~Commiss()
{
}

Weeks::Weeks(char *name) : Salary (name)
{
	fWeekRate = 1000;
}

Weeks::~Weeks()
{
}

float Commiss::CalculatePay (void)
{
	float fPay;
	fPay = Hours::CalculatePay() + fCommission * fTotalSales/100;
	return fPay;
}

float Weeks::CalculatePay(void)
{
	return fWeekRate;
}

float Hours::CalculatePay(void)
{
	float fPay;
	fPay = fHoursWorked * fHourRate;
	return fPay;
}

void Commiss::SetData ( float C, float T)
{
	fCommission = C;
	fTotalSales = T;
}

void Hours::SetData(float hworked, float hrate)
{
	fHoursWorked = hworked;
	fHourRate = hrate;
}

void Weeks::SetData(float wr)
{
	fWeekRate = wr;
}

int main () {
	Commiss Employee101 ( "Mike White" );
	Employee101.PrintEmployeeName();
	
	Employee101.Hours::SetData (50,10);
	float fPay;
	fPay = Employee101.Hours::CalculatePay ();
	cout << "\n The salary (with commission) of Employee101 is:" << fPay;
	
	Weeks Employee102 ( "Jim Thomas" );
	Employee102.PrintEmployeeName();
	Employee102.Weeks::CalculatePay ();
	cout << "\n The salary of Employee102 is:" << fPay;
}
