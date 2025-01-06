//  2468
//   246
//    24
//     2

#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        int Even=2;
        for(j=0;j<=i;j++){
            cout << " ";
        }
        for(k=4;k>i;k--){
            cout << Even;
            Even+=2;
        }
        cout << endl;
    }
    return 0;
}