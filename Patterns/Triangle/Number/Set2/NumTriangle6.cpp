// 0123
// 456
// 78
// 9

#include <iostream>
using namespace std;
int main(){
    int Num=0;
    int i=0;
    while(i<4){
        int j=4;
        while(j>i){
            cout << Num;
            Num+=1;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}