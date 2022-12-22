#include <iostream>
using namespace std;
int main(){
    int a,b,y;
    cout << "Let's solve simple equation: y=2a+b."<<endl;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    y=2*a+b;
    cout << "Given a="<<a<<" and b="<<b<<", we get y=" <<y;
    return 0;

}
