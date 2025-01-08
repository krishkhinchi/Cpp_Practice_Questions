// AAAA
// BBB
// CC
// D

#include <iostream>
using namespace std;
int main(){
    int i,j;
    char Alpha = 'A';
    for(i=0;i<4;i++){
        for(j=4;j>i;j--){
            cout << Alpha;
        }
        Alpha++;
        cout << endl;
    }
    return 0;
}