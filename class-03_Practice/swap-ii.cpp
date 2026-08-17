#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 30;
    cout << "Before swapping " << endl;
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;

    a = a * b;
    b = a / b;
    a = a / b;


    cout << "After swapping " << endl;
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;



    return 0;
}