//      2
//     2 4
//    2 4 6
//   2 4 6 8

#include <iostream>
using namespace std;
int main(){
    int x=4;
    for(int i=0;i<4;i++){
        int num=2;
        for(int j=0;j<x;j++) cout << " ";
        x--;
        for(int k=0;k<=i;k++){
            cout << " " << num;
            num+=2;
        }
        cout << endl;
    }
    return 0;
}