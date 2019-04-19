//This program demonstrates the use of derived and basic classes.

#include <iostream>
#include <string.h>
using namespace std;

class Shape
{
	public:
		Shape (char *name);
		void DisplayShapeName();
		~Shape();
	private:
		char sShapeName [50];
};

class Circle : public Shape
{
	public: 
		Circle ( char *name );
		float CalculateArea (int r);
		~Circle ();
	private:
		int iRadius;
		
};

class Square : public Shape
{
	public:
		Square ( char *name );
		int CalculateArea ( int s );
		~Square ();
	private:
		int iSide;
};

Shape::Shape(char *name)
{
	strcpy (sShapeName, name);
 } 
 
Shape::~Shape ()
{
}

void Shape::DisplayShapeName (void)
{
	cout << "\n Shape name: " << sShapeName;
}

Circle::Circle(char *name) : Shape (name)
{
	iRadius = 2;
}

Circle::~Circle()
{
}

Square::Square (char *name) : Shape (name)
{
	iSide = 2;
}

Square::~Square()
{
}

float Circle::CalculateArea(int r)
{
	iRadius = r;
	
	float fArea;
	fArea = 3.14 * iRadius * iRadius;
	return fArea;
}

int Square::CalculateArea(int s)
{
	iSide = s;
	int iArea;
	iArea = iSide * iSide;
	return iArea;
}

int main () {
	
	Circle MyCircle ( "This is my circle");
	Square MySquare ("This is my square");
	
	MyCircle.DisplayShapeName();
	
	float fAreaResult;
	fAreaResult = MyCircle.CalculateArea(1);
	cout << "The area of my Circle is: " << fAreaResult << endl;
	
	MySquare.DisplayShapeName();
	
	int iAreaResult;
	iAreaResult = MySquare.CalculateArea (10);
	cout << "The area of MySquare is: " << iAreaResult << endl;
}
