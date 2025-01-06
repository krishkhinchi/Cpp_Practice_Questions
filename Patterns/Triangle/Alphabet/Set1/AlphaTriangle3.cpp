//  ABCD
//   ABC
//    AB
//     A

#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        char Alpha='A';
        for(j=0;j<=i;j++){
            cout << " ";
        }
        for(k=4;k>i;k--){
            cout << Alpha;
            Alpha++;
        }
        cout << endl;
    }
    return 0;
}