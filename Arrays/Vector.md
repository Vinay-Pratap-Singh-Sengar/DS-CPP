# 📘 C++ Vector – Beginner DSA Notes

## 1. What is a Vector?

A **vector** is a dynamic array provided by the C++ Standard Template Library (STL).

Unlike a normal array, a vector can **grow and shrink dynamically** during program execution.

### Normal Array

```cpp
int arr[5];
```

The size is fixed.

### Vector

```cpp
vector<int> arr;
```

The size can change dynamically.

---

# 2. Why Do We Use Vector?

In DSA and competitive programming, vectors are commonly used instead of normal arrays because they are flexible and easy to use.

### Advantages

* Dynamic size
* Easy to add elements
* Easy to remove elements
* Supports indexing
* Easy to traverse
* Works well with STL algorithms
* Commonly used in coding platforms like GeeksforGeeks and LeetCode

---

# 3. Including Vector

Before using a vector, include:

```cpp
#include <vector>
```

Usually in competitive programming, we use:

```cpp
#include <bits/stdc++.h>
using namespace std;
```

---

# 4. Creating a Vector

### Empty Vector

```cpp
vector<int> arr;
```

This creates an empty vector of integers.

```text
arr = []
```

---

### Vector with Values

```cpp
vector<int> arr = {10, 20, 30, 40, 50};
```

Representation:

```text
Index:   0   1   2   3   4
        ---------------------
Value:  10  20  30  40  50
        ---------------------
```

---

# 5. Vector Data Types

The data type is specified inside `< >`.

### Integer Vector

```cpp
vector<int> arr;
```

### Float Vector

```cpp
vector<float> marks;
```

### Double Vector

```cpp
vector<double> values;
```

### Character Vector

```cpp
vector<char> letters;
```

### String Vector

```cpp
vector<string> names;
```

---

# 6. Vector Indexing

Just like arrays, vector indexing starts from **0**.

```cpp
vector<int> arr = {10, 20, 30, 40, 50};
```

```text
Index:   0   1   2   3   4
Value:  10  20  30  40  50
```

Access elements using:

```cpp
cout << arr[0];  // 10
cout << arr[2];  // 30
cout << arr[4];  // 50
```

### Important

For a vector containing `n` elements:

```text
First index = 0
Last index  = n - 1
```

Therefore:

```cpp
arr[n];       // ❌ Invalid index
arr[n - 1];   // ✅ Last element
```

---

# 7. Finding Vector Size

Use the `size()` function.

```cpp
vector<int> arr = {10, 20, 30, 40, 50};

cout << arr.size();
```

Output:

```text
5
```

### Important

`size()` tells us the **number of elements**, not the last index.

For example:

```text
Size       = 5
Last index = 4
```

---

# 8. Traversing a Vector

The most common way to traverse a vector is using a `for` loop.

```cpp
vector<int> arr = {10, 20, 30, 40, 50};

for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}
```

Output:

```text
10 20 30 40 50
```

### Understand the Loop

```cpp
i = 0
```

Access:

```cpp
arr[0]
```

Then:

```cpp
i = 1
```

Access:

```cpp
arr[1]
```

And so on.

---

# 9. Taking Vector Input

We can create a vector of size `n` and take input.

```cpp
int n;
cin >> n;

vector<int> arr(n);

for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
```

### Example Input

```text
5
10 20 30 40 50
```

The vector becomes:

```text
[10, 20, 30, 40, 50]
```

---

# 10. `push_back()`

`push_back()` adds an element at the **end** of the vector.

```cpp
vector<int> arr;

arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
```

Vector:

```text
[10, 20, 30]
```

Add another element:

```cpp
arr.push_back(40);
```

Now:

```text
[10, 20, 30, 40]
```

### Example

```cpp
vector<int> arr;

arr.push_back(10);
arr.push_back(20);
arr.push_back(30);

for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}
```

Output:

```text
10 20 30
```

---

# 11. `pop_back()`

`pop_back()` removes the **last element**.

```cpp
vector<int> arr = {10, 20, 30, 40};

arr.pop_back();
```

Now:

```text
[10, 20, 30]
```

### Important

`pop_back()` removes only the last element.

```cpp
arr.pop_back();
```

It does not remove an element from the middle.

---

# 12. `empty()`

The `empty()` function checks whether the vector contains any elements.

```cpp
vector<int> arr;

if(arr.empty()) {
    cout << "Vector is empty";
}
```

Output:

```text
Vector is empty
```

After:

```cpp
arr.push_back(10);
```

The vector is no longer empty.

---

# 13. `front()`

`front()` returns the first element.

```cpp
vector<int> arr = {10, 20, 30, 40};

cout << arr.front();
```

Output:

```text
10
```

Equivalent to:

```cpp
cout << arr[0];
```

---

# 14. `back()`

`back()` returns the last element.

```cpp
vector<int> arr = {10, 20, 30, 40};

cout << arr.back();
```

Output:

```text
40
```

Equivalent to:

```cpp
cout << arr[arr.size() - 1];
```

---

# 15. `clear()`

`clear()` removes all elements from the vector.

```cpp
vector<int> arr = {10, 20, 30, 40};

arr.clear();
```

Now:

```text
[]
```

Check size:

```cpp
cout << arr.size();
```

Output:

```text
0
```

---

# 16. Updating a Vector Element

We can change an element using its index.

```cpp
vector<int> arr = {10, 20, 30, 40};

arr[2] = 100;
```

Before:

```text
[10, 20, 30, 40]
```

After:

```text
[10, 20, 100, 40]
```

---

# 17. Searching an Element

We can use a loop to search for an element.

```cpp
vector<int> arr = {10, 20, 30, 40, 50};

int target = 30;

bool found = false;

for(int i = 0; i < arr.size(); i++) {

    if(arr[i] == target) {
        found = true;
        break;
    }
}

if(found) {
    cout << "Element found";
}
else {
    cout << "Element not found";
}
```

This is called **Linear Search**.

### Time Complexity

```text
O(n)
```

---

# 18. Vector vs Array

| Feature       | Array | Vector  |
| ------------- | ----- | ------- |
| Size          | Fixed | Dynamic |
| Indexing      | Yes   | Yes     |
| `arr[i]`      | Yes   | Yes     |
| `size()`      | No    | Yes     |
| `push_back()` | No    | Yes     |
| `pop_back()`  | No    | Yes     |
| `empty()`     | No    | Yes     |
| STL container | No    | Yes     |

---

# 19. Most Important Vector Functions

| Function       | Purpose                       |
| -------------- | ----------------------------- |
| `size()`       | Number of elements            |
| `push_back(x)` | Add element at end            |
| `pop_back()`   | Remove last element           |
| `empty()`      | Check whether vector is empty |
| `front()`      | First element                 |
| `back()`       | Last element                  |
| `clear()`      | Remove all elements           |

---

# 20. Complete Basic Example

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr;

    // Add elements
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    // Print size
    cout << "Size: " << arr.size() << endl;

    // Print first element
    cout << "First: " << arr.front() << endl;

    // Print last element
    cout << "Last: " << arr.back() << endl;

    // Traverse
    cout << "Elements: ";

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

Output:

```text
Size: 4
First: 10
Last: 40
Elements: 10 20 30 40
```

---

# 🟢 Vector with GFG Problems

GeeksforGeeks commonly gives function definitions like:

```cpp
class Solution {
  public:
    int findElementAtIndex(int i, vector<int> &arr) {

        return arr[i];
    }
};
```

Don't get confused by the syntax.

Let's understand it.

---

# 21. Understanding `vector<int>`

```cpp
vector<int> arr
```

means:

> `arr` is a vector that stores integers.

Example:

```text
arr = [10, 20, 30, 40, 50]
```

---

# 22. Understanding `&arr`

```cpp
vector<int> &arr
```

The `&` means that the vector is passed by **reference**.

For beginners, remember:

```text
vector<int> arr
        ↓
A vector of integers

&arr
        ↓
Pass the original vector instead of making a copy
```

You don't need to master references immediately to solve basic vector problems.

---

# 23. GFG Problem – Find Element at Index

### Problem

Given a vector and an index `i`, return the element at that index.

### Example

```text
arr = [10, 20, 30, 40, 50]
i = 2
```

Answer:

```text
30
```

### Solution

```cpp
class Solution {
  public:
    int findElementAtIndex(int i, vector<int> &arr) {

        return arr[i];
    }
};
```

### Explanation

If:

```cpp
i = 2;
```

Then:

```cpp
arr[i]
```

becomes:

```cpp
arr[2]
```

Therefore:

```text
Answer = 30
```

---

# 24. GFG – Array Traversal Using Vector

```cpp
class Solution {
  public:
    void printArray(vector<int> &arr) {

        for(int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
    }
};
```

The important part is:

```cpp
arr[i]
```

---

# 25. GFG – Sum of Vector

```cpp
class Solution {
  public:
    int arraySum(vector<int> &arr) {

        int sum = 0;

        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }

        return sum;
    }
};
```

---

# 26. GFG – Find Largest Element

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {

        int maximum = arr[0];

        for(int i = 1; i < arr.size(); i++) {

            if(arr[i] > maximum) {
                maximum = arr[i];
            }
        }

        return maximum;
    }
};
```

---

# 27. Vector and Range-Based For Loop

C++ also provides an easier way to traverse a vector.

```cpp
vector<int> arr = {10, 20, 30, 40};

for(int value : arr) {
    cout << value << " ";
}
```

Output:

```text
10 20 30 40
```

Here:

```cpp
value
```

represents each element.

### Compare

Traditional loop:

```cpp
for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}
```

Range-based loop:

```cpp
for(int value : arr) {
    cout << value << " ";
}
```

For beginners learning indexing and DSA, **teach the traditional loop first**.

---

# 28. Common Mistakes

## Mistake 1 — Using an invalid index

```cpp
vector<int> arr = {10, 20, 30};

cout << arr[3];   // ❌
```

Valid indexes are:

```text
0, 1, 2
```

---

## Mistake 2 — Confusing size with last index

```cpp
arr.size() = 5
```

Does NOT mean:

```cpp
arr[5]
```

The last element is:

```cpp
arr[4]
```

because:

```text
last index = size - 1
```

---

## Mistake 3 — Calling `back()` on an empty vector

```cpp
vector<int> arr;

cout << arr.back();   // ❌
```

Always make sure the vector contains an element before accessing its first/last element.

---

## Mistake 4 — Removing from an empty vector

```cpp
vector<int> arr;

arr.pop_back();   // ❌ Don't do this
```

---

# 29. Important Complexity

| Operation       |     Complexity |
| --------------- | -------------: |
| Access `arr[i]` |           O(1) |
| Update `arr[i]` |           O(1) |
| `front()`       |           O(1) |
| `back()`        |           O(1) |
| `push_back()`   | O(1) amortized |
| `pop_back()`    |           O(1) |
| `size()`        |           O(1) |
| Traversal       |           O(n) |
| Linear Search   |           O(n) |

---

# 30. Quick Revision

```text
Vector
  ↓
Dynamic Array
  ↓
vector<int> arr
  ↓
Index starts from 0
  ↓
arr[i] → Access element
  ↓
arr.size() → Number of elements
  ↓
push_back() → Add element
  ↓
pop_back() → Remove last element
  ↓
front() → First element
  ↓
back() → Last element
  ↓
clear() → Remove all elements
```

---

# 🎯 Practice Questions

Try solving these without looking at the solution.

### Beginner

1. Print all elements of a vector.
2. Find the element at a given index.
3. Find the sum of all elements.
4. Find the largest element.
5. Find the smallest element.
6. Count even numbers.
7. Count odd numbers.
8. Count positive numbers.
9. Count negative numbers.
10. Count zeros.

### Intermediate

11. Search for an element.
12. Find the second largest element.
13. Find the second smallest element.
14. Reverse a vector.
15. Check whether a vector is palindrome.
16. Check whether a vector is sorted.
17. Rotate a vector by one position.
18. Replace all `0` with `5`.
19. Find minimum and maximum together.
20. Find the frequency of a given element.

---

# ⭐ Key Takeaways

Remember these five things:

```cpp
vector<int> arr;
```

### 1. Access

```cpp
arr[i];
```

### 2. Size

```cpp
arr.size();
```

### 3. Add

```cpp
arr.push_back(x);
```

### 4. Remove last

```cpp
arr.pop_back();
```

### 5. Traverse

```cpp
for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}
```

---

# 🚀 Recommended DSA Learning Path

After learning basic vectors:

```text
Vector
   ↓
Array Traversal
   ↓
Searching
   ↓
Linear Search
   ↓
Minimum / Maximum
   ↓
Reverse
   ↓
Two Pointer
   ↓
Sorting
   ↓
Binary Search
   ↓
Prefix Sum
   ↓
Sliding Window
   ↓
Hashing
```

> **Remember:** A vector is one of the most important C++ containers for DSA. Learn `vector<int>`, indexing, `size()`, traversal, `push_back()`, and `pop_back()` well before moving to advanced STL.
