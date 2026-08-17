#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    double simpleInterest, amount;

    cout << "Enter Principal: ";
    cin >> principal;

    cout << "Enter Rate: ";
    cin >> rate;

    cout << "Enter Time: ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100;
    amount = principal + simpleInterest;

    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Total Amount: " << amount << endl;

    return 0;
}