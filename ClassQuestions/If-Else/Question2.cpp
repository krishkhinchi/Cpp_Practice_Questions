/*
Write a program in C++ to find positive or 
negative values using if else from the user input.
*/

#include <iostream>
using namespace std;
int main(){

    int value;
    cout << "Enter a number: ";
    cin >> value;

    if(cin.fail()) cout << "Plz enter numeric value";
    else if(value>0) cout << value << " is Positive Number";
    else if(value<0) cout << value << " is Negative Number";
    else cout << "Number is Zero";

    return 0;
}