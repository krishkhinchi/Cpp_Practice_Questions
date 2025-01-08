//      A
//     BB
//    CCC
//   DDDD

#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    char Alpha ='A';
    for(i=0;i<4;i++){
        for(j=4;j>=i;j--){
            cout << " ";
        }
        for(k=0;k<=i;k++){
            cout << Alpha;
        }
        Alpha++;
        cout << endl;
    }
    return 0;
}