// A
// BB
// CCC
// DDDD

#include <iostream>
using namespace std;
int main(){
    int i,j;
    char Alpha = 'A';
    for(i=0;i<4;i+=1){
        for(j=0;j<=i;j+=1){
            cout << Alpha;
        }
        Alpha++;
        cout << endl;
    }
    return 0;
}