// 1357
// 135
// 13
// 1

#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<4;i++){
        int Odd = 1;
        for(j=4;j>i;j--){
            cout << Odd;
            Odd+=2;
        }
        cout << endl;
    }
    return 0;
}