#include <iostream>
using namespace std;

int main() {
    double base, height;
    double area;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter height: ";
    cin >> height;

    area = (base * height) / 2;

    cout << "Area of Triangle: " << area << endl;

    return 0;
}