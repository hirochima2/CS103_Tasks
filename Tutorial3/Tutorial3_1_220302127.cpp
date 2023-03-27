// Write a program that is called Telephone digits that outputs only telephone digits that corresponds to uppercase and lowercase letters.
// If the input is something other than an upercase or lowercase letter, the program must output an appropriate error message
// Do this until user inputs # (hash) character

#include <iostream>
using namespace std;
int main(){
    char c;
    cout << "Program to convert letters to their corresponding telehone digits" << endl;
    
    while(true){
        cout << "Enter a letter or # to exit" << endl;
        cin >> c;
    
        if(c == '#'){
            break;
        }
        if(c >= 'A' && c <= 'Z'){
            if(c >= 'A' && c <= 'C'){
                cout << "Letter: " << c << ", Corresponds to digit: 2" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'D' && c <= 'F'){
                cout << "Letter: " << c << ", Corresponds to digit: 3" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'G' && c <= 'I'){
                cout << "Letter: " << c << ", Corresponds to digit: 4" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'J' && c <= 'L'){
                cout << "Letter: " << c << ", Corresponds to digit: 5" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'M' && c <= 'O'){
                cout << "Letter: " << c << ", Corresponds to digit: 6" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'P' && c <= 'S'){
                cout << "Letter: " << c << ", Corresponds to digit: 7" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'T' && c <= 'V'){
                cout << "Letter: " << c << ", Corresponds to digit: 8" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'W' && c <= 'Z'){
               cout << "Letter: " << c << ", Corresponds to digit: 9" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }
        }else if(c >= 'a' && c <= 'z'){
            if(c >= 'a' && c <= 'c'){
               cout << "Letter: " << c << ", Corresponds to digit: 2" << endl;
               cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'd' && c <= 'f'){
                cout << "Letter: " << c << ", Corresponds to digit: 3" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'g' && c <= 'i'){
                cout << "Letter: " << c << ", Corresponds to digit: 4" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'j' && c <= 'l'){
                cout << "Letter: " << c << ", Corresponds to digit: 5" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'm' && c <= 'o'){
                cout << "Letter: " << c << ", Corresponds to digit: 6" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'p' && c <= 's'){
                cout << "Letter: " << c << ", Corresponds to digit: 7" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 't' && c <= 'v'){
                cout << "Letter: " << c << ", Corresponds to digit: 8" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }else if(c >= 'w' && c <= 'z'){
                cout << "Letter: " << c << ", Corresponds to digit: 9" << endl;
                cout << "Enter another letter to find its corresponding digit or # to exit" << endl;
            }
        }else{
            cout << "Error: " << c << " is not a letter" << endl;
        }
    }
    cout << "Program terminated!" << endl;
    return 0;
}