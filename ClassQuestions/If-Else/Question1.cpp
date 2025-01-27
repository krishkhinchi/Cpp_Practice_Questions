/*
Write a program in C++ that takes the input of the age of 3 people by the
user and finds out the oldest and youngest among them.
*/

#include <iostream>
using namespace std;
int main(){
    int age1, age2, age3;

    cout << "Enter the age1: ";
    cin >> age1;
    cout << "Enter the age2: ";
    cin >>  age2;
    cout << "Enter the age3: ";
    cin >> age3;

    if(!(age1==age2&&age1==age3)){
        if(age1>=age2&&age1>=age3) cout << "age1 which is " << age1 << " is oldest";
        else if(age2>=age1&&age2>=age3) cout << "age2 which is " << age2 << " is oldest";
        else if(age3>=age1&&age3>=age2) cout << "age3 which is " << age3 << " is oldest";
    } cout << endl;

    if(!(age1==age2&&age1==age3)){
        if(age1<=age2&&age1<=age3) cout << "age1 which is " << age1 << " is youngest";
        else if(age2<=age1&&age2<=age3) cout << "age2 which is " << age2 << " is youngest";
        else if(age3<=age1&&age3<=age2) cout << "age3 which is " << age3 << " is youngest";
    } else cout << "All three have same age";

    return 0;
}