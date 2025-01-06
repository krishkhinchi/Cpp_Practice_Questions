//     2
//    24
//   246
//  2468

#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        int Even=2;
        for(j=4;j>i;j--){
            cout << " ";
        }
        for(k=0;k<=i;k++){
            cout << Even;
            Even+=2;
        }
        cout << endl;
    }
    return 0;
}