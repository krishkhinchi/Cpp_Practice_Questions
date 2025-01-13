//       1 
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1

#include <iostream>
using namespace std;
int main(){
    int n,num=1;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=n;j>=i;j--){
            cout << " ";
        }

        for(int j=0;j<=i;j++){
            (i==0 || j==0) ? num=1 : num=num*(i-j+1)/j ;
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}