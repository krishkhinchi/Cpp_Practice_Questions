//  *****
//   ****
//    ***
//     **
//      *

#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            cout << " ";
        }
        for(k=5;k>i;k--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}