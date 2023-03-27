#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,r1,r2,f;
	cout << "What is your equation give me a,b and c for (ax*x + b*y + c=0) (Press Enter after typing each number)" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	f = (b*b) - 4 * a * c;
	r1 = ((-b + sqrt(f)) / 2 * a);
	r2 = ((-b - sqrt(f)) / 2 * a);
	if (f<0) cout << "No real roots for you!" << endl;
	else cout << "There are roots and they are: " << r1 << " and " << r2 << "!" << endl;
	getch();
	return 0;
}
