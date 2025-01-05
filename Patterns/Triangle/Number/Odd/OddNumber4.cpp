//     1
//    13
//   135
//  1357

#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        int Odd=1;
        for(j=4;j>i;j--){
            cout << " ";
        }
        for(k=0;k<=i;k++){
            cout << Odd;
            Odd+=2;
        }
        cout << endl;
    }
    return 0;
}