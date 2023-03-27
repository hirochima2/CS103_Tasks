
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, sum(0);
    cout << "Program to output individual digits of an integer" << endl;
    cout << "Enter an integer: ";
    cin >> n;
    if(n<0){
    	n = abs(n);
	}
    int digits = 0;
    int temp = n;
    while(temp != 0){
        temp /= 10;
        digits++;
    }
    int i = digits - 1;
    while(i >= 0){
        int digit = n / pow(10, i);
        cout << digit << " ";
        sum += digit;
        n -= digit * pow(10, i);
        i--;
    }
    cout << endl;
    cout << "Sum of these numbers:  " << sum << endl;
    cout << endl;
    return 0;
}
