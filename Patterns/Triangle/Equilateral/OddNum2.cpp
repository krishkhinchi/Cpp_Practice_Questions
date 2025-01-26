//      1
//     1 3
//    1 3 5
//   1 3 5 7

#include <iostream>
using namespace std;
int main(){
    int x=4;
    for(int i=0;i<4;i++){
        int num=1;
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