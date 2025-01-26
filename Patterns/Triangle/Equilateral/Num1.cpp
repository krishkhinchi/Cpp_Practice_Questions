#include <iostream>
using namespace std;
int main(){
    int x=6,y=x;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) cout << " ";
        y--;
        for(int k=0;k<i;k++) cout << " " << i;
        cout << endl;
    }
    return 0;
}