#include <iostream>
using namespace std;

int main ( ) {
	
	char res;
	int num = 17;
	cout << "do you want the result in C or C++?" << endl;
	cin >> res ;
	if (res = 'C') {
	printf ("My number is: %d \n", num);
	printf ("My number in hex: %X", num);			
	}					
	else 
	cout << "My number is:" << hex << num << "." << endl;
	
}
