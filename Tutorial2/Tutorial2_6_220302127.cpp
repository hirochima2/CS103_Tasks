#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int choice, chois;
	double conversion;
	cout << "Welcome to our clever converter, how can we help you?" << endl;
	cout << "We convert speed(1), temperature(2), and length(3)... choose" << endl;
	cin >> choice;
	switch(choice){
		case 1: 
			cout << "Is your input in mph(1) or kmh(2) and how much is it?" << endl;
			cin >> chois >> conversion;
			if(chois == 1) {
				cout << "You want to see how much " << conversion << " mph in kph, " << conversion << " mph is " << conversion * 1.60934 <<" kph"<< endl;
			}
			else if (chois == 2){
				cout << "You want to see how much " << conversion << " kph in mph, " << conversion << " kph is " << conversion / 1.60934 << " mph" << endl; 
			}
			break;
		case 2:
			cout << "Is your input in Celsius(1) or Kelvin(2) and how much is it?" << endl;
			cin >> chois >> conversion;
			if(chois == 1 ){
				cout << "You want to see how much " << conversion << " Celsius is in Kelvin, " << conversion << " Celsius is " << conversion + 273.15 << " Kelvin" << endl;
			}
			else if (chois == 2){
				cout << "You want to see how much " << conversion << " Kelvin is in Celsius, " << conversion << " Kelvin is " << conversion - 273.15 << " Celsius" << endl;
			}
			break;
		case 3: 
			cout << "Is your input in Foot (1) or Meter (2), and how much is it? " << endl;
			cin >> chois >> conversion;
			if (chois == 1) {
				cout << "You want to see how much " << conversion << " Foot is in Meter, " << conversion << " Foot is " << conversion * 0.3048 << " Meter" << endl; 
			}
			else if (chois == 2){
				cout << "You want to see how much " << conversion << " Meter is in Foot, " << conversion << " Meter is " << conversion * 3.2808 << " Foot" << endl;
			}
			break;
	}
	getch();
	return 0;
}
