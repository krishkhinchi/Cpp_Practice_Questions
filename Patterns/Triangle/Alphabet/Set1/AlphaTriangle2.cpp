// ABCD
// ABC
// AB
// A

#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<4;i++){
        char Alpha='A';
        for(j=4;j>i;j--){
            cout << Alpha;
            Alpha+=1;
        }
        cout << endl;
    }
    return 0;
}