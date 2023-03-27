#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int workinghours, working1;
	char js, et;
	cout << "Enter working hours: ";
	cin >> workinghours;
	working1 = workinghours;
	cout << "Are you Junior or Senior (j/J - Junior / s/S - Senior): ";
	cin >> js;
	cout << "Enginner or Tester (e/E - Engineer / t/T - Tester): ";
	cin >> et;
	if(js == 'j' || js == 'J'){
		cout << "You earned ";
		if(et == 'e' || et == 'E'){
			if(workinghours > 40){
			int sum = 400;
			workinghours -= 40;
			sum += (workinghours*10);
			cout << sum << "$." << endl;
		}
		else cout << workinghours*10 << "$." << endl;
		workinghours = working1;
			
		}
		else if (et == 't' || et == 'T'){
			if(workinghours > 40){
			int sum = 400;
			workinghours -=40;
			sum += (workinghours*5);
			cout << sum <<"$." << endl;
		
		}
		else cout << workinghours*10 << "$." << endl;
		workinghours = working1;
		}
	}
	else if(js == 's' || js == 'S'){
			cout << "You earned ";
		if(et == 'e' || et == 'E'){
			if(workinghours > 40){
			int sum = 800;
			workinghours -= 40;
			sum += (workinghours*10);
			cout << sum << "$." << endl;
		}
		else cout << workinghours*20 << "$." << endl;
		workinghours = working1;
			
		}
		else if (et == 't' || et == 'T'){
			if(workinghours > 40){
			int sum = 800;
			workinghours -=40;
			sum += (workinghours*5);
			cout << sum <<"$." << endl;
		
		}
		else cout << workinghours*20 << "$." << endl;
		workinghours = working1;
		}
	}
	
}
