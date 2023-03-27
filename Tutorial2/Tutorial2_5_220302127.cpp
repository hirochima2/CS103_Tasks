#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(){
	int nights, price;
	char choice;
	cout << "Welcome to Capare hotel, we have the following options" << endl;
	cout << "Room type \t               price per night in Euros" << endl;
	cout << "Deluxe room for one \t              60" << endl;
	cout << "Premium room for two\t              80" << endl;
	cout << "Presidential Suite\t              100" << endl;
	cout << endl;
	cout << "Disclaimer: For Deluxe room for one type A/a, for Premium room for two type B/b, and for Presidential Suite type C/c" << endl;
	cout << endl;
	cout << "Which room did you choose? And how many nights?" << endl;
	cin >> choice;
	cin >> nights;
	if(choice == 'a' || choice == 'A'){
		if(nights>4){
			price = 240;
			nights -= 4;
			price = price + (42*nights);
			
		}
		else price = 60*nights;
		cout << "Fine choice, you have chosen deluxe room for one which includes an amazing view of the ocean for " << nights << " night/s, the price is " << price << " Euros.";
	}
	else if(choice == 'b' || choice == 'B'){
		if(nights>4){
			price = 320;
			nights -= 4;
			price = price + (56*nights);
			
		}
		else price = 80*nights;
		cout << "How classy, you have chosen premium room for two for " << nights << " night/s, the price is " << price << " Euros.";
	}
	else if(choice == 'c' || choice == 'C'){
		if(nights>4){
			price = 400;
			nights -= 4;
			price = price + (70*nights);
			
		}
		else price=100*nights;
		cout << "Outstanding choice, Mr. President. You have chosen Presidential Suite for " << nights << " night/s, the price is " << price << " Euros.";
	}
	getch();
	return 0;
}
