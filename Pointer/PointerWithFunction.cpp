#include <iostream>
using namespace std;

void increByTen(int* ptr) {
    *ptr += 10; 
}

int main() {
    int num = 5;
    cout << "Before increment: " << num;
    increByTen(&num); 
    cout << "After increment: " << num;
    return 0;
}