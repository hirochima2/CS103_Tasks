#include <iostream> //including library iostream which gives us cout and cin commands to work with
using namespace std; // we are using a standard dictionary, if we didn't add this we would have to add std:: for almost every line of code
int main(){ //beggining of the main function
    double time, distance; // declaring a variable time and distance
    cout << "Please enter time in seconds: "; // this line will output this in console
    cin >> time; // this line is asking the user for input
    cout << "Give speed: 5 m/s"<<endl; // this is printing to the console
    distance=0.5*5*time; // this is the formula for distance stored in a variable
    cout << "In "<<time<<" seconds your object would travel "<<distance<<" meters!\nCheers!"; // this is the output for 2 lines in console
    return 0;
}
