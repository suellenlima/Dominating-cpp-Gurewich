// how to use the date class.
// including codes that verify the validity of object values ??within the constructor function

#include <iostream>

using namespace std;

class Date 
{
	public:
		Date (int mn,           //construction function 1
			  int dy,
			  int yr);
		Date ();				//construction function 2
		
		void VerifyDate ();
		void DisplayIt();
		void ChangeDate(int, int, int);
		int ReadMonth();
		int ReadDay ();
		int ReadYear();
		
		~Date();	
	private:
		int month, 
			day, 
			year;
};

void if_invalid_data (void);

Date::Date (int mn, int dy, int yr)
{
	month = mn;
	day = dy;
	year = yr;
	
	VerifyDate();
}

Date::Date()
{
	//default
	month = 10;
	day = 1;
	year = 1885;
}

void Date::VerifyDate() 
{
	static int MaxDaysInMonth[] =
		{
			0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
		};
		if (month > 12)
		if_invalid_data();
		
		if (month < 1)
		if_invalid_data();
		
		if (year < 1)
		if_invalid_data();
		
		if (day < 1)
		if_invalid_data();
		
		if (day > MaxDaysInMonth [month])
		if_invalid_data();
}

void Date::DisplayIt()
{
	static char *MonthName [] =
		{ "Zero", "January", "Febrary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		
		cout << "\n Month: " << MonthName[month] 
			 << " Day: " << day
			 << " Year: " << year << endl;
}

int Date::ReadDay()
{
	return day;
}
int Date::ReadMonth()
{
	return month;
}
int Date::ReadYear()
{
	return year;
}

Date::~Date()
{
	cout << "Good-Bye (from the destructor function)" << endl;
}

void Date::ChangeDate( int i, int j, int k)
{
	month = i;
	day = j;
	year = k;
}

int main () 
{
	
int month;

cout << "\n Please wait..." << endl;

Date MyBirthday;
Date HisBirthday (-4, 18, 1884);

MyBirthday.DisplayIt ();
HisBirthday.DisplayIt ();

MyBirthday.ChangeDate(3, 4, 1994);
MyBirthday.DisplayIt();

month = MyBirthday.ReadMonth();

}

void if_invalid_data (void) 
{
	cout << "Invalid Data..." << endl;
}
