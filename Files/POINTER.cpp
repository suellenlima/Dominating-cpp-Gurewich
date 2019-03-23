// when passing the variable pointer to the function, the called function can change the value of the variable in the function that makes the call

#include <iostream>
using namespace std;

void MyFunction ( int *pi );

int main (){
	int iMyVariable = 5;
	MyFunction (&iMyVariable);
	cout << "\n iMyVariable = " << iMyVariable;
	
}

void MyFunction (int *pi)
{
	*pi = *pi + 3;
}
