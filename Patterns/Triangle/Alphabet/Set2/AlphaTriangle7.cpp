//  AAAA
//   BBB
//    CC
//     D

#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    char Alpha = 'A';
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            cout << " ";
        }
        for(k=4;k>i;k--){
            cout << Alpha;
        }
        Alpha+=1;
        cout << endl;
    }
    return 0;
}