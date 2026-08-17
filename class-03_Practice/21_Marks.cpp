#include <iostream>
using namespace std;

int main() {
    double s1, s2, s3, s4, s5;
    double total, average, percentage;

    cout << "Enter marks of Subject 1: ";
    cin >> s1;

    cout << "Enter marks of Subject 2: ";
    cin >> s2;

    cout << "Enter marks of Subject 3: ";
    cin >> s3;

    cout << "Enter marks of Subject 4: ";
    cin >> s4;

    cout << "Enter marks of Subject 5: ";
    cin >> s5;

    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;
    percentage = (total / 500) * 100;

    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}