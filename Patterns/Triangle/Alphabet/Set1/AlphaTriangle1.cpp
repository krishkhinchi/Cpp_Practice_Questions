// A
// AB
// ABC
// ABCD

#include <iostream>
using namespace std;
int main(){
    int i,j;
    bool a=true;
    for(i=0;i<4;i+=a){
        char Alpha='A';
        for(j=0;j<=i;j++){
            cout << Alpha;
            Alpha++;
        }
        cout << endl;
    }
    return 0;
}