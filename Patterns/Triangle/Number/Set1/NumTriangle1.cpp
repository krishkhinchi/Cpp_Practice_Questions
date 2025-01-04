// 1
// 12
// 123
// 1234

#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<4;i++){
        int count=1;
        for(j=0;j<=i;j++){
            cout << count;
            count++; 
        }
        cout << endl;
    }
    return 0;
}