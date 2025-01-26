// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *

#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<7;i+=1){
        if(i<4){
            for(int j=0;j<=i;j++) cout << "*";
            for(int k=3;k>i;k--) cout << " ";
            for(int k=3;k>i;k--) cout << " ";
            for(int j=0;j<=i;j++) cout << "*";
        } else{
            for(int j=7;j>i;j--) cout << "*";
            for(int k=0;k<i-3;k++) cout << " ";
            for(int k=0;k<i-3;k++) cout << " ";
            for(int j=7;j>i;j--) cout << "*";
        }
        cout << endl;
    }
    return 0;
}