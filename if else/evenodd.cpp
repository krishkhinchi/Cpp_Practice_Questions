// Check user is eligible for voting or not

#include<iostream>
using namespace std;
int main(){
    int Age;
    cout << "Enter your Age: ";
    cin >> Age;
    
    if(Age>=18) cout << "You are eligible for voting";
    else cout << "You are not eligible for voting";
    return 0;
}