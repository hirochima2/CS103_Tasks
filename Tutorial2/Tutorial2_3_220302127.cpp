#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int choice;
	cout << "The following options are available for your desk: " << endl;
	cout << "1. Format " << endl;
	cout << "2. Eject " << endl;
	cout << "3. Backup " << endl;
	cout << "What do you choose?" << endl;
	cin >> choice;
	switch(choice) {
		case 1:
			char security;
			cout << "Are you sure? You will lose all of your data. Type Y/y to continue or any other key to cancel" << endl;
			cin >> security;
			if(security == 'y' || security == 'Y'){
				cout << "Formatting your desk started" << endl;
				cout << "Formatting is done!";
			}
			else cout << "Formatting canceled, program terminated!";
			break;
		case 2:
			cout << "Desk ejected succesfully!";
			break;
		case 3:
			cout << "Backing up your desk to your machine started..." << endl;
			cout << "Backup succesfull!";
			break;
		default:
			cout << "Number out of range";
			break;
	}
	getch();
	return 0;
}
