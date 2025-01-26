//       A
//      A B
//     A B C
//    A B C D
//   A B C D E

#include <iostream>
using namespace std;
int main(){
    int x=5;
    for(int i=0;i<5;i++){
        char ch='A';
        for(int j=0;j<x;j++) cout << " ";
        x--;
        for(int k=0;k<=i;k++) cout << " " << ch++;
        cout << endl;
    }
    return 0;
}