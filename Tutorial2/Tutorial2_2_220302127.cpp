#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(){
	bool youngdr=false,noob=false, whoops=false, ins=false, noob2=false,youngnoob=false,woman=false;
	int age, drivingage,instotal=0;
	char gender, accidents, insurance;
	cout << "Welcome to insurance calculator, please enter the following information: " << endl;
	cout << "Age" << endl;
	cin >> age;
	cout << "Male/female (M - male, W - woman)"  << endl;
	cin >> gender;
	cout << "How long are you driving? (write only number of years)" << endl;
	cin>> drivingage;
	cout << "Have been to accidents made by you? (Y - yes, N - no)" << endl;
	cin >> accidents;
	cout << "Used insurance before? (Y - yes, N - no)" << endl;
	cin >> insurance;
	if(age>=18 && age <=21) {
		instotal += 10;
		youngdr=true;
	}
	else youngdr=false;
	if(drivingage<=3){
		instotal +=20;
		noob = true;
	}
	else noob = false;
	if(accidents == 'Y' || accidents == 'y'){
		whoops = true;
		instotal +=25;
	}
	else whoops = false;
	if (insurance == 'Y' || insurance == 'y'){
		ins = true;
		instotal += 25;
	}
	else ins = false;
	if (youngdr==true && noob == true && accidents == true){
		noob2 = true;
	}
	if(noob2 == true){
		if(gender == 'M' || gender == 'm'){
			instotal += 10;
			youngnoob = true;
		}
		else if (gender == 'W' || gender == 'w'){
			instotal += 15;
			woman = true;
		}
	}
	cout << " Your insurance will be increased by " << instotal << "%." << endl;
	if(woman == true) cout << "You are young, woman, without experience, which means that you hit your car every day! Plus you have been in accidents.";
	else if (youngnoob == true) cout << " You are young, male, without experience, which means that you will do your best to drive anywhere like you are Verstappen, according to your accidents.";
	else{
		if(youngdr == true) cout << " You are still young. " << endl;
		else cout << " You are old enough to use your car as every other normal person. " << endl;
		if(noob == true) cout << " You have little experience, a lot more people are prone to hit their car with that much experience. " << endl;
		else  cout <<" You are an experienced driver, which means that you won't make accidents a lot." << endl;
		if(whoops == true) cout << "You've made accidents, and we have to insure ourselfs." << endl;
		else cout << " You don't have any accidents on record, which means that you care while driving. " << endl;
		if (ins==true) cout << " You benefited from our insurance before." << endl;
		else cout << " You never benefited from our insurance before." << endl;
		
	}
	getch();
	return 0;
}
