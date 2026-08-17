#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square: " << num * num << endl;
    cout << "Cube: " << num * num * num << endl;
    cout << "Square Root: " << sqrt(num) << endl;

    return 0;
}