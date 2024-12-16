// Find the area of triangle by using function

#include<iostream>
using namespace std;

double TriangleArea(int a,int b){
    return 0.5 * a * b;
}

int main(){
    int height,base;
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the lenght: ";
    cin >> base;
    cout << TriangleArea(height,base);
    return 0;
}