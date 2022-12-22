#include <iostream>
using namespace std;
int main(){
   double a[5];
   double avg(0);
   for(int i =0; i<5; i++){
    cout << "Enter the "<<i+1<<". number: ";
    cin>>a[i];
   }
   for(int i =0; i<5; i++){
    avg+=a[i];
   }
   avg=avg/5;
   cout << "Average is: "<<avg << endl;
   cout << "Floor-rounded number is: " <<int(avg);
    return 0;
}
