#include <iostream>
using namespace std;
int main(){
    int x=4;
    char ch='A';
    for(int i=0;i<4;i++){
        for(int j=0;j<x;j++) cout << " ";
        x--;
        for(int k=0;k<=i;k++) cout << " " << ch;
        ch++;
        cout << endl;
    }
    return 0;
}