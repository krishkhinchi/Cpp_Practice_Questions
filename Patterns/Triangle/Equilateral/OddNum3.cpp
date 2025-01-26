//      1
//     3 5
//    7 9 11
//   13 15 17 19

#include <iostream>
using namespace std;
int main(){
    int x=4,num=1;
    for(int i=0;i<4;i++){
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