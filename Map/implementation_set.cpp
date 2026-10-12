
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    // 1. Create an unordered_set
    unordered_set<int> numbers;

    // 2. Insert elements
    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(50);
    numbers.insert(20);
    numbers.insert(10);
    numbers.insert(30);

    // 3. Display all elements
    cout << "Set elements: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;

    // 4. Find the size
    cout << "Size: " << numbers.size() << endl;

    // 5. Check whether the set is empty
    if (numbers.empty()) {
        cout << "Set is empty" << endl;
    } else {
        cout << "Set is not empty" << endl;
    }

    // 6. Search using find()
    int key = 20;

    if (numbers.find(key) != numbers.end()) {
        cout << key << " exists in the set" << endl;
    } else {
        cout << key << " does not exist in the set" << endl;
    }

    // 7. Search using count()
    if (numbers.count(50) == 1) {
        cout << "50 exists in the set" << endl;
    } else {
        cout << "50 does not exist in the set" << endl;
    }

    // 8. Delete an element
    numbers.erase(30);

    cout << "After deleting 30: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;

    // 9. Insert a new element
    numbers.insert(40);

    cout << "After inserting 40: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;

    // 10. Display using an iterator
    cout << "Using iterator: ";
    for (unordered_set<int>::iterator it = numbers.begin();
         it != numbers.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // 11. Remove all elements
    numbers.clear();

    cout << "Size after clear(): " << numbers.size() << endl;

    if (numbers.empty()) {
        cout << "Set is now empty" << endl;
    }

    return 0;
}
