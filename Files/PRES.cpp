// how to use an object as one of the data members of a class.
#include <iostream>
#include <string.h>

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
		int month, day, year;
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

class President
{
	public:
		President (char *First_Name,
				   char *Last_Name,
				   int mn,
				   int dy,
				   int yr);
				   
		~President ();
		
		Date Birthday;
	
	private:
		char FirstName [20];
		char LastName [20];
};

President::President(char *First_Name, char *Last_Name, int mn, int dy, int yr):Birthday(mn, dy, yr) 
{
		cout << "\n Guess what? I'm in the President constructor function";
	
		strcpy (FirstName, First_Name);
		strcpy (LastName, Last_Name);
} 

President::~President()
{
		cout << "\n Guess what? I'm in the President destructor function";
}


int main () 
{
		int year;

		cout << "\n Please wait..." << endl;

		President Washington ("George", "Washington", 2, 21, 1732);
		President Lincoln ("Abraham", "Lincoln", 2, 16, 1809);
		
		Washington.Birthday.DisplayIt();

		year = Lincoln.Birthday.ReadYear();
		
		cout << "Lincoln nasceu em " << year;

		Washington.Birthday.ChangeDate (2, 22, 1732);
		Washington.Birthday.DisplayIt ();
}

void if_invalid_data (void) 
{
		cout << "Invalid Data..." << endl;
}
