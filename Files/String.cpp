#include <iostream>
#include <string.h>
using namespace std;

// overload function

void stringcpy (char *to, const char *from);
void stringcpy (char *to, const char *from, int lenght);

static char My_String1[255];
static char My_String2[255];

int main (){
	
	stringcpy (My_String1, "This is the string");
	cout << "\n My_String1 = " << My_String1;
	stringcpy (My_String2, "This is the string", 2);
	cout << "\n My_String2 = " << My_String2;
	
}

void stringcpy (char *to, const char *from){
	strcpy (to, from);
}
void stringcpy (char *to, const char *from, int lenght){
	strncpy (to, from, lenght);
}
