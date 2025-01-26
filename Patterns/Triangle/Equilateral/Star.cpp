//       *
//      * *
//     * * *
//    * * * *
//   * * * * *

#include <iostream>
using namespace std;
int main(){
    int x=5;
    for(int i=0;i<5;i++){
        for(int j=0;j<x;j++) cout << " ";
        x--;
        for(int k=0;k<=i;k++) cout << " *";
        cout << endl;
    }
    return 0;
}