//       A
//      B B
//     C C C
//    D D D D
//   E E E E E

#include <iostream>
using namespace std;
int main(){
    int x=5;
    char ch='A';
    for(int i=0;i<5;i++){
        for(int j=0;j<x;j++) cout << " ";
        x--;
        for(int k=0;k<=i;k++) cout << " " << ch;
        ch++;
        cout << endl;
    }
    return 0;
}