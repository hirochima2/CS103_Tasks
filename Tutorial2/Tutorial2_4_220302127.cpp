#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(){
	string choice;
	int nights, price;
	cout << "Welcome to C++ hotel, we have the following options" << endl;
	cout << "Room type \t price per night in Euros" << endl;
	cout << "int \t              60" << endl;
	cout << "double \t              80" << endl;
	cout << "class \t              100" << endl;
	cout << "Which room did you choose? And how many nights?" << endl;
	cin >> choice >> nights;
	if(choice == "int"){
		price = 60*nights;
		cout << "Fine choice, you have chosen integer for " << nights << " night/s, the price is " << price << " Euros.";
	}
	else if(choice == "double"){
		price = 80*nights;
		cout << "Amazing choice, you have chosen double for " << nights << " night/s, the price is " << price << " Euros.";
	}
	else if(choice == "class"){
		price = 100*nights;
		cout << "Outstanding choice, you have chosen class for " << nights << " night/s, the price is " << price << " Euros.";
	}
	getch();
	return 0;
}
