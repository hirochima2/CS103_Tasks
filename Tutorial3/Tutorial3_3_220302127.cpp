
#include <iostream>
using namespace std;
int main(){
    int a, b, count3(0), count5(0);
    cout << "Program to output how many numbers are multiples of 3 and 5 between two integers" << endl;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; i++){
        if(i % 3 == 0){
            count3++;
        }
        if(i % 5 == 0){
            count5++;
        }
    }
    cout << "There are " << count3 << " multiples of 3 and " << count5 << " multiples of 5 between " << a << " and " << b << endl;
    return 0;
}