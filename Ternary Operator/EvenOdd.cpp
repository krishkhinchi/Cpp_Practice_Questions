// Check a number is even or odd using Ternary Operator

#include<iostream>
using namespace std;
int main(){
    int Input;
    cout << "Enter a Number: ";
    cin >> Input;
    (Input%2==0) ? cout << "Even" : cout << "Odd";
    return 0;
}