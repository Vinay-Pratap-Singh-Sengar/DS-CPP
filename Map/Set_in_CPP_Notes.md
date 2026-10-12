# Set in C++ (STL)

## 1. What is a Set?

A `set` is an STL container that stores **unique values in sorted order**.

- Duplicate values are not stored.
- Values are automatically arranged in ascending order.
- To use `set`, include the `<set>` header file.

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers;

    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);

    for (int x : numbers) {
        cout << x << " ";
    }

    return 0;
}
```

**Output**
```text
10 20 30
```

Notice that `10` appears only once and the values are sorted.

## 2. How to Declare a Set

```cpp
set<int> numbers;       // stores integers
set<string> names;      // stores strings
set<char> letters;      // stores characters
```

## 3. Important Set Operations

### `insert()` — Add a value

```cpp
set<int> s;
s.insert(50);
s.insert(20);
s.insert(40);
```

If the value already exists, it is not added again.

### `size()` — Count the unique values

```cpp
cout << s.size();
```

Returns the number of values currently stored in the set.

### `empty()` — Check whether the set is empty

```cpp
if (s.empty()) {
    cout << "Set is empty";
} else {
    cout << "Set is not empty";
}
```

### `find()` — Search for a value

```cpp
if (s.find(20) != s.end()) {
    cout << "20 exists";
} else {
    cout << "20 does not exist";
}
```

- `s.find(20)` searches for `20`.
- If found, it returns an iterator pointing to that value.
- If not found, it returns `s.end()`.
- Therefore, `s.find(20) != s.end()` means the value exists.

### `count()` — Check whether a value exists

```cpp
if (s.count(20) == 1) {
    cout << "20 exists";
}
```

For a `set`, `count(value)` returns either `1` (found) or `0` (not found).

### `erase()` — Remove a value

```cpp
s.erase(20);
```

Removes `20` if it exists. If it does not exist, the set remains unchanged.

### `clear()` — Remove all values

```cpp
s.clear();
```

After this operation, the set is empty.

## 4. Complete Practical Program

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> marks;

    // Insert values
    marks.insert(80);
    marks.insert(60);
    marks.insert(90);
    marks.insert(80);

    // Display values
    cout << "Set values: ";
    for (int x : marks) {
        cout << x << " ";
    }

    cout << "\nNumber of unique values: " << marks.size();

    // Search for a value
    if (marks.find(60) != marks.end()) {
        cout << "\n60 exists in the set";
    } else {
        cout << "\n60 does not exist in the set";
    }

    // Remove a value
    marks.erase(80);

    cout << "\nAfter erasing 80: ";
    for (int x : marks) {
        cout << x << " ";
    }

    return 0;
}
```

**Output**
```text
Set values: 60 80 90
Number of unique values: 3
60 exists in the set
After erasing 80: 60 90
```

## 5. `set` vs `unordered_set`

| Feature | `set` | `unordered_set` |
|---|---|---|
| Duplicate values | Not allowed | Not allowed |
| Order | Sorted | No guaranteed order |
| Header | `<set>` | `<unordered_set>` |
| Typical search/insert | `O(log n)` | Average `O(1)` |

Example of `unordered_set`:

```cpp
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(30);
    s.insert(10);
    s.insert(20);

    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}
```

The output order is not guaranteed.

## 6. `set` vs `multiset`

| Feature | `set` | `multiset` |
|---|---|---|
| Duplicate values | Not allowed | Allowed |
| Order | Sorted | Sorted |

```cpp
set<int> a;
a.insert(5);
a.insert(5);       // stores one 5

multiset<int> b;
b.insert(5);
b.insert(5);       // stores two 5s
```

Remember: `set` stores unique values; `multiset` can store duplicates.

## 7. When Is a Set Useful?

Use a set when you need to:
- Remove duplicates from a collection.
- Check whether a value exists.
- Keep unique values sorted.
- Find the number of distinct values.

## 8. Practice Questions

1. Create a `set<int>` and insert five integers. Print them.
2. Insert `10, 20, 10, 30, 20`. How many values are stored?
3. Check whether `25` exists in a set.
4. Insert `5, 3, 8, 3, 5`, then erase `3` and print the set.
5. Given an array, use a set to print its distinct values.

## 9. Beginner DSA Challenge: Remove Duplicates

**Task:** Given an array, print each distinct value once in sorted order.

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {4, 2, 4, 1, 2, 3};
    int n = 6;

    set<int> uniqueValues;

    for (int i = 0; i < n; i++) {
        uniqueValues.insert(arr[i]);
    }

    for (int x : uniqueValues) {
        cout << x << " ";
    }

    return 0;
}
```

**Output**
```text
1 2 3 4
```

## Quick Revision

- `set` stores unique values in sorted order.
- `insert(x)` adds a value.
- `find(x) != s.end()` checks whether a value exists.
- `erase(x)` removes a value.
- `size()` returns the number of stored values.
- `unordered_set` stores unique values without guaranteeing order.
- `multiset` allows duplicate values.
