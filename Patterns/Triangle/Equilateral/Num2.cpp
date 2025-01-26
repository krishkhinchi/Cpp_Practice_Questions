//       1
//      1 2
//     1 2 3
//    1 2 3 4
//   1 2 3 4 5

#include <iostream>
using namespace std;
int main(){
    int x=5;
    for(int i=0;i<5;i++){
        int num=1;
        for(int j=0;j<x;j++) cout << " ";
        x--;
        for(int k=0;k<=i;k++){
            cout << " " << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}