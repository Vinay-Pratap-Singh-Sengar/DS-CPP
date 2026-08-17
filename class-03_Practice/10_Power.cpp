#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;

    cout << "Enter base x: ";
    cin >> x;

    cout << "Enter power y: ";
    cin >> y;

    cout << "Result: " << pow(x, y) << endl;

    return 0;
}