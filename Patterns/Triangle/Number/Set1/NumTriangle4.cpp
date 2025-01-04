//     1
//    12
//   123
//  1234

#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        int count=1;
        for(j=4;j>i;j--){
            cout << " ";
        }
        for(k=0;k<=i;k++){
            cout << count;
            count++;
        }
        cout << endl;
    }
    return 0;
}