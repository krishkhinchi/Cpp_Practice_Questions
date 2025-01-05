//      0
//     12
//    345
//   6789

#include <iostream>
using namespace std;
int main(){
    int Num=0;
    int i=0;
    while(i<4){
        int j=4;
        while(j>=i){
            cout << " ";
            j--;
        }
        int k=0;
        while(k<=i){
            cout << Num;
            Num++;
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}