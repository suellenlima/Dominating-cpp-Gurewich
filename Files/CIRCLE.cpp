// how to use a class.

#include <iostream>
using namespace std;

class Circle
{
	public: 
	Circle ( int r ); //construction function
	void DisplayRadius ();
	void CalcArea ();
	void CalcCircum ();
	~Circle ();       //destructive function
	
	private:
	int radius;
};
// construction function

Circle::Circle (int r) {
	radius = r;
	cout << "\n *** I'm in the constructor function!!! ***";
}

void Circle::DisplayRadius(){
	cout << "\n Radius: " << radius;
}

void Circle::CalcArea(){
	float fArea;
	
	fArea = 3.14 * radius * radius;
	cout << "\n Area: " << fArea;
}

void Circle::CalcCircum(){
	float fCircum;
	fCircum = 2* 3.14 * radius;
	cout << "\n Circumference: " <<fCircum;
}

Circle::~Circle(){
	cout << "\n I'm out of here!";
}

int main () {
	
	Circle MyCircle (2);
	Circle YourCircle (3);
	
	MyCircle.DisplayRadius();
	MyCircle.CalcArea();
	MyCircle.CalcCircum();
	
	YourCircle.DisplayRadius();
	YourCircle.CalcArea();
	YourCircle.CalcCircum();
}
