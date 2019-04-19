// informs the c ++ compiler that iMyVariable has two names.

#include <iostream>
using namespace std;

int main () {
	
	int iMyVariable = 3;
	int &iAccount = iMyVariable;
	
	cout << "\n iMyVariable = " << iMyVariable;
	cout << "\n iAccount = " << iAccount << endl;
	
	iMyVariable = iMyVariable + 2;
	cout << "\n iMyVariable = " << iMyVariable;
	cout << "\n iAccount = " << iAccount << endl;
	
	iAccount = iAccount + 3;
	cout << "\n iMyVariable = " << iMyVariable;
	cout << "\n iAccount = " << iAccount << endl;
	
	cout << "\n Address of iMyVariable = " << &iMyVariable;
	cout << "\n Address of iAccount = " << &iAccount << endl;
	
}
