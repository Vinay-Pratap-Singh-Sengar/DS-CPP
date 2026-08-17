#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time;
    double amount, compoundInterest;

    cout << "Enter Principal: ";
    cin >> principal;

    cout << "Enter Rate: ";
    cin >> rate;

    cout << "Enter Time: ";
    cin >> time;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    cout << "Compound Interest: " << compoundInterest << endl;
    cout << "Total Amount: " << amount << endl;

    return 0;
}