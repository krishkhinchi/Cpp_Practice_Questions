//Check a user is eligible for voting or not

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter a number: ";
    cin >> age;

    if (cin.fail()) cout << "Invaliid Age";
    else if(age>0&&age<100){
        if (age >= 18) cout << "You are eligible for voting";
        else if (age < 18) cout << "You are not eligible for voting ";
    } 
    else cout << "Please enter age between 1 to 100";
    return 0;
}