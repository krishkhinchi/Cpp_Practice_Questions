// *     *
// **   **
// *** ***
// *******
// *** ***
// **   **
// *     *

#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=7;i++){
        if(i==1||i==7){
            for(j=1;j<=7;j++){
                if(j==1||j==7) cout << "*";
                else cout << " ";
            }
        } else if(i==2||i==6){
            for(j=1;j<=7;j++){
                if(j<=2||j>=6) cout << "*";
                else cout << " ";
            }
        } else if(i==3||i==5){
            for(j=1;j<=7;j++){
                if(j<=3||j>=5) cout << "*";
                else cout << " ";
            }
        } else for(j=1;j<=7;j++) cout << "*";
    cout << endl;
    }
    return 0;
}