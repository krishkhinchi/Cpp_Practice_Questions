#include <iostream>
using namespace std;

double FahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(){
    double fahrenheit;
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = FahrenheitToCelsius(fahrenheit);
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius.";
    return 0;
}