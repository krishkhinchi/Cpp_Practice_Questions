// Check grades using given marks

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    
    if(100>=marks&&marks>90) cout << "A+ grade";
    else if(90>=marks&&marks>80) cout << "A grade";
    else if(80>=marks&&marks>70) cout << "B+ grade";
    else if(70>=marks&&marks>60) cout << "B grade";
    else if(60>=marks&&marks>50) cout << "C+ grade";
    else if(50>=marks&&marks>40) cout << "C grade";
    else if(40>=marks&&marks>0) cout << "Fail";
    else cout << "INVALID MARKS";
    return 0;
}