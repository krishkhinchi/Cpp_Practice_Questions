//  0123
//   456
//    78
//     9

#include <iostream>
using namespace std;
int main(){
    int Num=0;
    int i=0;
    while(i<4){
        int j=0;
        while(j<=i){
            cout << " ";
            j++;
        }
        int k=4;
        while(k>i){
            cout << Num;
            Num+=1;
            k--;
        }
        cout << endl;
        i+=1;
        
    }
    return 0;
}