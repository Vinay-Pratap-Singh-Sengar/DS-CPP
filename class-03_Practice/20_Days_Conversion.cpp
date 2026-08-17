#include <iostream>
using namespace std;

int main() {
    int totalDays;
    int years, remainingDays, weeks, days;

    cout << "Enter total number of days: ";
    cin >> totalDays;

    years = totalDays / 365;
    remainingDays = totalDays % 365;

    weeks = remainingDays / 7;
    days = remainingDays % 7;

    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Remaining Days: " << days << endl;

    return 0;
}