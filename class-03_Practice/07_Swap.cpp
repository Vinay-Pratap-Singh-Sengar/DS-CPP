#include <iostream>
using namespace std;

int main() {
    int x, y, temp;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    temp = x;
    x = y;
    y = temp;

    cout << "After swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}