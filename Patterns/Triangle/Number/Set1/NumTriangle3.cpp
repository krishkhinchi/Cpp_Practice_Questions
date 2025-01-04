//  1234
//   123
//    12
//     1

#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        int count=1;
        for(j=0;j<=i;j++){
            cout << " ";
        }
        for(k=4;k>i;k--){
            cout << count;
            count++;
        }
        cout << endl;
    }
    return 0;
}