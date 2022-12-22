#include <iostream>
using namespace std;
int main(){
	double x1,x2,y1,y2,m,c,y;
	cout << "Enter the value of x1: ";
	cin >> x1;
	cout << "Enter the value of x2: ";
	cin >> x2;
	cout << "Enter the value of y1: ";
	cin >> y1;
	cout << "Enter the value of y2: ";
	cin >> y2;
	m = (y2-y1)/(x2-x1);
	cout << "The slope value is: " << m << endl;
	c = x1+x2;
	y = m*x1+c;
	cout << "Result of the equation y=mx1+c is: " << y;
	return 0;
	
}
