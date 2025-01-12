//  1234
//   ABC
//    56
//     D

#include <iostream>
using namespace std;

int Num = 1;
char Alpha = 'A';

void forNum(){
    cout << Num;
    Num++;
}

void forAlpha(){
    cout << Alpha;
    Alpha++;
}

int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            cout << " ";
        }
        for(k=4;k>i;k--){
            (i%2==0) ? forNum() : forAlpha();
        }
        cout << endl;
    }
    return 0;
}