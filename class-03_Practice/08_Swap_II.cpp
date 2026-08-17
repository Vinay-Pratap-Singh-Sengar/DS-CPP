#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "After swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}