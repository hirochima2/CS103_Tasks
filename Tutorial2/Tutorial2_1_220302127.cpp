#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a,b,choice;
	cout << "Hi! Enter two numbers: ";
	cin >> a >> b;
	cout << "You entered " << endl;
	(a%2==0)?  cout << a << " is an even number": cout << a << " is an odd number" ;
	cout <<", and ";
	(b%2==0)?  cout << b << " is an even number": cout << b << " is an odd number";
	cout << endl;
	cout << "What do you like to do? (add-1, subtract-2, multiply-3, divide-4)" << endl ;
	cin >> choice;
	switch(choice){
		case 1:
			cout << a << " + " << b <<" = " << a+b << endl;
			break;
		case 2:
			cout << a << " - " << b << " = " << a-b << endl;
			cout << b << " - " << a << " = " << b-a << endl;
			break;
		case 3:
			cout << a << " * " << b << " = " << a*b << endl;
			break;
		case 4:
			cout << a << " / " << b << " = " << double(a/b) << endl;
			cout << b << " / " << a << " = " << double(b/a) << endl;
			break;
		default:
			cout << "Number out of range";
	}
	cout << "Thank you for playing :)";
	getch();
	return 0;
}
