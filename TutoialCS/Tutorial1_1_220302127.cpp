#include <iostream>
using namespace std;
int main(){
    signed int number1=-5;
    char letter =' h';
    double number2=1.12345678901234567;
    bool state = true;
    cout <<"1. and 2.\n"<< double(number1)<< endl;
    cout << "---------------------------------" << endl;
    cout <<"3.\n"<< "Int: " << int(letter) << endl;
    cout << "Unsigned int: " <<int(letter) << endl;
    cout << "Float: " << float(letter) << endl;
    cout << "Double: " << double(letter) << endl;
    cout <<"------------------------------------" << endl;
    cout << "4.\n"<< "Float: "<< float(number2) << endl;
    cout << "Int: "<< int(number2) << endl;
    cout << "Char: " << char(number2) <<endl;
    cout <<"------------------------------------" << endl;
    cout << "5.\n" << "Int: " << int(state) << endl;
    cout << "Unsigned int: " <<int(state) << endl;
    cout << "Char: " << char(state) << endl;
    cout << "Float: " << float(state) << endl;
    cout << "Double: " << double(state) << endl;
    cout <<"------------------------------------" << endl;
    state=false;
    cout << "6.\n" << "Int: " << int(state) << endl;
    cout << "Unsigned int: " <<int(state) << endl;
    cout << "Char: " << char(state) << endl;
    cout << "Float: " << float(state) << endl;
    cout << "Double: " << double(state) << endl;
    return 0;
}
// 1. Printing number1 variable as signed integer resulted in sending the number -5 as the output
// because that was the number declared for that variable and when we called the variable it printed out the number
// 2. The output is the same because we only changed the variable to be able to add decimal numbers
// but we did not add any
// 3.When converting the variable "letter" to int, float and double,I had no problems and the output
// is the same for same conversion because they all took ASCII value of the letter, but when I tried
// to convert it to unsigned int, I received and error and I could not make that conversion.
// 4. When converting this number into various types of variables, the output was different. Since int
// does not hold decimals the output was 1, float printed out a with less precision, but char turned that
// number into ASCII value and printed out a smiley face.
// 5. All of the outputs results in printing 1 except char, char printed out smiley face
// 6. When changing the state to false char printed out space, and other types printed 0. This is because
// bool can only have 2 states, true or false or 1 and 0.

