#include<iostream>
#define tab '\t'
#define newline '\n'
using namespace std;
signed int i1=-30; //signed integer
char c1='a'; //character
/*These two variables are global variables.
    Their values will have allocated memory until program finishes execution.*/
    int main(){
        int i2=053; //octal number, local variable
        int i3=0xabcf; // hexadecimal number, local variable
        int i4=30u; //unsigned integer, local variable
        float f1=3.14159; //floating number, local variable
        float f2=220e-5; //exponential representation, local variable
        float f3=220.588e5; //local variable
        double d1=3.14159265358979323;
        bool state=true;
        cout<<"This example will show you the usage of '#define' and the effect of 'casting'!\n";
        cout<< newline;
        cout<<"signed int as int: "<< (int) i1 << tab << "Signed int as unsigned int: "<< int unsigned int(i1) << endl; // Yet again it gives out an error when converting to unsigned int
        cout <<"Signed int as double: "<< (double) i1 << tab <<"Signed int as float: "<< float(i1)<< newline<<endl;
        cout <<"Boolean as double: "<< (double) state << tab <<"Boolean as float: "<< float(state)<<endl;
        cout <<"Boolean as int: "<< (int) state << tab <<"Boolean as char: "<<char(state)<< newline <<endl;
        cout <<"Double as float: "<< (float) d1 << tab <<"Double as int: "<< int(d1)<< tab <<"Double as char: "<< char(d1)<< endl;
        cout <<"Float ad double: "<< (double) f2 << tab <<"Float as int: "<< int(f2)<< tab <<"Float as char: "<< char(f2)<< endl;
        cin.get();
        return 0;
        }
// The output resulted in printing out various conversions, but what is very interesting is that we defined two new commands in
// this file that can be only used here and are for text formatting using the define preprocessor

