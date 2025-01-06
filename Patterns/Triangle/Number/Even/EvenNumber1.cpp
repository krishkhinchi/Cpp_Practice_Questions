// 2
// 24
// 246
// 2468

#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<4;i++){
        int Even=2;
        for(j=0;j<=i;j++){
            cout << Even;
            Even+=2;
        }
        cout << endl;
    }
    return 0;
}