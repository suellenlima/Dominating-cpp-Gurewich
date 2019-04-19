//How to declare a function as a class-friendly function. With this, it can access the private members of the class.

#include <iostream>
#include <string.h>
using namespace std;

// dummy statements of the rectangle and circle classes so that the compiler does not display an error message when it finds instructions that refer to those classes.
class Rectangle;
class Circle;

float TotArea ( Circle, Rectangle );

class Circle
{
	friend float TotArea (Circle, Rectangle);
	public:
		Circle (float radius);
		~Circle ();
	
	private:
		float fRadius;
};

Circle::Circle( float radius )
{
	fRadius = radius;
}

Circle::~Circle()
{
}

class Rectangle
{
	friend float TotArea (Circle, Rectangle);
	public:
		Rectangle ( float width, float height);
		~Rectangle ();
		
	private:
		float fWidth;
		float fHeight;
};

Rectangle::Rectangle( float width, float height )
{
	fWidth = width;
	fHeight = height;
}

Rectangle::~Rectangle()
{
}

float TotArea ( Circle CircObject, Rectangle RectObject)
{
	float CircArea;
	float RectArea;
	CircArea = 3.14 * CircObject.fRadius * CircObject.fRadius;
	RectArea = RectObject.fWidth * RectObject.fHeight;
	
	return CircArea + RectArea;
}

int main ()
{
	Circle MyCircle (5.0);
	Rectangle MyRectangle ( 6.0, 7.0);
	
	cout << "\n\n Total Area = ";
	cout << TotArea (MyCircle, MyRectangle);
	cout << "\n\n";
}
