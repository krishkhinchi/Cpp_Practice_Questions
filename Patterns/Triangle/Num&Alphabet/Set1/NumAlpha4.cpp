//     1
//    AB
//   234
//  CDEF

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
        for(j=4;j>i;j--){
            cout << " ";
        }
        for(k=0;k<=i;k++){
            (i%2==0) ? forNum() : forAlpha();
        }
        cout << endl;
    }
    return 0;
}