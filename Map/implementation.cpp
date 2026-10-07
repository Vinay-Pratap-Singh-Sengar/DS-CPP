#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    // --------------------------------
    // 1. Create Hash Map
    // --------------------------------

    unordered_map<int, int> marks;


    // --------------------------------
    // 2. Insert
    // --------------------------------

    marks[101] = 85;
    marks[102] = 72;
    marks[103] = 90;


    // --------------------------------
    // 3. Access
    // --------------------------------

    cout << "Marks of 101: " << marks[101] << endl;


    // --------------------------------
    // 4. Update
    // --------------------------------

    marks[101] = 95;

    cout << "Updated marks: " << marks[101] << endl;


    // --------------------------------
    // 5. Check using count()
    // --------------------------------

    if(marks.count(102)) {
        cout << "Student 102 exists" << endl;
    }


    // --------------------------------
    // 6. Check using find()
    // --------------------------------

    if(marks.find(103) != marks.end()) {
        cout << "Student 103 exists" << endl;
    }


    // --------------------------------
    // 7. Delete
    // --------------------------------

    marks.erase(102);


    // --------------------------------
    // 8. Print Map
    // --------------------------------

    cout << "\nStudent Marks:\n";

    for(auto p : marks) {
        cout << p.first << " -> " << p.second << endl;
    }


    // --------------------------------
    // 9. Frequency Counting
    // --------------------------------

    int arr[] = {10, 20, 10, 30, 20, 10};

    unordered_map<int, int> freq;

    for(int x : arr) {
        freq[x]++;
    }


    // --------------------------------
    // 10. Print Frequency
    // --------------------------------

    cout << "\nFrequency:\n";

    for(auto p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}