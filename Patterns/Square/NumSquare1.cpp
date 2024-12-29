// 12345
// 12345
// 12345

#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<3;i++){
        int Num=1;
        for(j=0;j<5;j++){
            cout << Num;
            Num+=1;
        }
        cout << endl;
    }
    return 0;
}