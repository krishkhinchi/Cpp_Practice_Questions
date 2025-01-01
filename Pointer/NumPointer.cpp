#include <iostream>
using namespace std;
int main(){
    int num; 
    int* ptr = &num; 
    cout << "Enter a value: ";
    cin >> num;
    cout << "Value of num: " << *ptr;
    return 0;
}