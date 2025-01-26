#include <iostream>
using namespace std;
int main(){
    int x=5;
    char ch='A';
    for(int i=0;i<5;i++){
        for(int j=0;j<x;j++) cout << " ";
        x--;
        for(int k=0;k<=i;k++) cout << " " << ch++;
        cout << endl;
    }
    return 0;
}