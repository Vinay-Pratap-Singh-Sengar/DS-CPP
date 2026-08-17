#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    cout << "Before swapping " << endl;
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;

    int c = b;
    b = a;
    a = c;

    cout << "After swapping " << endl;
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;

    return 0;
}