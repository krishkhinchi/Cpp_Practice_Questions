//      2
//     4 4
//    6 6 6
//   8 8 8 8

#include <iostream>
using namespace std;
int main(){
    int x=4,num=2;
    for(int i=0;i<4;i++){
        for(int j=0;j<x;j++) cout << " ";
        x--;
        for(int k=0;k<=i;k++) cout << " " << num;
        num+=2;
        cout << endl;
    }
    return 0;
}