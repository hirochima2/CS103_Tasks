#include <iostream>
#include <conio.h>
using namespace std;
 int main(){
 	int workinghours,working1;
	cout << "Enter working hours: ";
	cin >> workinghours;
	working1 = workinghours;
	cout << "Junior tester earns ";
	if(workinghours > 40){
		int sum = 400;
		workinghours -=40;
		sum += (workinghours*5);
		cout << sum <<"$." << endl;
		
	}
	else cout << workinghours*10 << "$." << endl;
	workinghours = working1;
	cout << "Junior engineer earns ";
	if(workinghours > 40){
		int sum = 400;
		workinghours -= 40;
		sum += (workinghours*10);
		cout << sum << "$." << endl;
	}
	else cout << workinghours*10 << "$." << endl;
	workinghours = working1;
	cout << "Senior tester earns ";
	if(workinghours > 40) {
		int sum = 800;
		workinghours -=40;
		sum +=(workinghours*5);
		cout << sum << "$." << endl;
	}
	else cout << workinghours*20 << endl;
	workinghours = working1;
	cout << "Senior engineer earns ";
	if(workinghours > 40) {
		int sum = 800;
		workinghours -=40;
		sum +=(workinghours*10);
		cout << sum << "$." << endl;
	}
	else cout << workinghours*20 << endl;
	getch();
	return 0;
 }
