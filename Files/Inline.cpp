#include <iostream>
using namespace std;

// In C ++, a function can be defined as an inline function. The inline keyword (inline) tells you that the C ++ compiler should consider the function as a macro.

inline void ShowIt ( char *s) {
	cout << "\n" << s;
}

int main () {
	
	cout << "\n I am at the beginning of main ()";
	ShowIt ("In the inline() function.");
	ShowIt ("In the inline() function.");
	ShowIt ("In the inline() function.");
	ShowIt ("In the inline() function.");
	cout << "\n I am at the end of main ()";
	
}
