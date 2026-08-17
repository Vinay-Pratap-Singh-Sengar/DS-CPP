#include <iostream>
using namespace std;

int main() {
    int ascii;

    cout << "Enter an ASCII value: ";
    cin >> ascii;

    cout << "Corresponding character: " << (char)ascii << endl;

    return 0;
}