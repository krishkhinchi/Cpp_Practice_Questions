// 0
// 12
// 345
// 6789

#include <iostream>
using namespace std;

int main(){
    int Num=0;
    int i=0;
    while(i<4){
        int j=0;
        while(j<=i){
            cout << Num;
            Num+=1;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}