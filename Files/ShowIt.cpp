// this program illustrates the use of a function prototype.

#include <iostream>
using namespace std;

void ShowIt ( char *s);

int main () {
	
ShowIt ("I am here");

}

void ShowIt (char *s){
	cout << s << endl;
}
