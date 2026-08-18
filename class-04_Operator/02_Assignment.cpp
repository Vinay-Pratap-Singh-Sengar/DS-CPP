#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "Initial value = " << a << endl;

    a += 5;
    cout << "After += 5   = " << a << endl;

    a -= 3;
    cout << "After -= 3   = " << a << endl;

    a *= 2;
    cout << "After *= 2   = " << a << endl;

    a /= 4;
    cout << "After /= 4   = " << a << endl;

    a %= 3;
    cout << "After %= 3   = " << a << endl;

    return 0;
}