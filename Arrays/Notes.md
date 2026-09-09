# 📚 Arrays – Beginner DSA Notes

## 📌 Introduction

An **Array** is a collection of elements of the **same data type** stored in a contiguous block of memory.

Instead of creating multiple variables:

```cpp
int marks1 = 80;
int marks2 = 75;
int marks3 = 90;
int marks4 = 65;
```

We can use an array:

```cpp
int marks[] = {80, 75, 90, 65};
```

---

# 1. What is an Array?

An array stores multiple values under a **single variable name**.

### Example

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

Here:

```text
arr → Array name
5   → Size of array
10, 20, 30, 40, 50 → Elements
```

### Visual Representation

```text
Index:   0    1    2    3    4
        -------------------------
Array:  | 10 | 20 | 30 | 40 | 50 |
        -------------------------
```

---

# 2. Why Do We Need Arrays?

Suppose we want to store marks of 5 students.

Without an array:

```cpp
int m1 = 80;
int m2 = 75;
int m3 = 90;
int m4 = 65;
int m5 = 88;
```

With an array:

```cpp
int marks[5] = {80, 75, 90, 65, 88};
```

### Advantages

* Store multiple values using one variable
* Easy to access elements
* Easy to process using loops
* Useful for searching and sorting
* Foundation for many DSA problems

---

# 3. Array Indexing

Array indexing starts from **0**.

For:

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

The indexes are:

```text
Element:  10   20   30   40   50
Index:     0    1    2    3    4
```

### Accessing Elements

```cpp
cout << arr[0];  // 10
cout << arr[2];  // 30
cout << arr[4];  // 50
```

### Important Rule

For an array of size `n`:

```text
First index = 0
Last index  = n - 1
```

Therefore:

```cpp
arr[n]       // ❌ Invalid
arr[n - 1]   // ✅ Last element
```

---

# 4. Declaration of Array

### Syntax

```cpp
dataType arrayName[size];
```

### Example

```cpp
int arr[5];
```

```cpp
float marks[10];
```

```cpp
char letters[5];
```

---

# 5. Initialization of Array

We can initialize an array while declaring it.

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

We can also let the compiler determine the size:

```cpp
int arr[] = {10, 20, 30, 40, 50};
```

---

# 6. Taking Array Input

We usually use a loop to take input.

```cpp
int n;
cin >> n;

int arr[n];

for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
```

### Example Input

```text
5
10 20 30 40 50
```

---

# 7. Printing an Array

Use a loop:

```cpp
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```

Output:

```text
10 20 30 40 50
```

---

# 8. Array Memory Concept

Array elements are stored in **contiguous memory locations**.

Example:

```text
arr[0] → 1000
arr[1] → 1004
arr[2] → 1008
arr[3] → 1012
```

For an `int` array, each element commonly occupies **4 bytes**.

Therefore, accessing an element using its index is very fast.

### Time Complexity

```text
Access by index → O(1)
```

Example:

```cpp
cout << arr[3];
```

The computer can directly access the fourth element.

---

# 🟢 BASIC ARRAY PROBLEMS

# 9. Array Traversal

### Problem

Print all elements of an array.

### Example

```text
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50
```

### Solution

```cpp
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```

### Pattern

```text
Start from index 0
       ↓
Visit every index
       ↓
Process arr[i]
       ↓
Move to next index
```

### Complexity

```text
Time:  O(n)
Space: O(1)
```

---

# 10. Find Element at an Index

### Problem

Print the element present at a given index.

### Example

```text
Array = [10, 20, 30, 40, 50]

Index = 2

Answer = 30
```

### Solution

```cpp
int index;
cin >> index;

cout << arr[index];
```

### Complexity

```text
Time: O(1)
Space: O(1)
```

---

# 11. Sum of Array

### Problem

Find the sum of all elements.

### Example

```text
Array = [10, 20, 30, 40]

Sum = 100
```

### Logic

```text
sum = 0

10 → sum = 10
20 → sum = 30
30 → sum = 60
40 → sum = 100
```

### Solution

```cpp
int sum = 0;

for(int i = 0; i < n; i++) {
    sum += arr[i];
}

cout << sum;
```

### Important Pattern

This is called an **accumulation pattern**.

```cpp
result = initialValue;

for(...) {
    result = result + currentElement;
}
```

---

# 12. Count Odd and Even Numbers

### Problem

Count how many elements are even and how many are odd.

### Example

```text
Array = [10, 15, 20, 7, 8]

Even = 3
Odd  = 2
```

### Logic

```cpp
int even = 0;
int odd = 0;

for(int i = 0; i < n; i++) {

    if(arr[i] % 2 == 0) {
        even++;
    }
    else {
        odd++;
    }
}
```

### Output

```cpp
cout << "Even = " << even << endl;
cout << "Odd = " << odd << endl;
```

---

# 🟡 IMPORTANT ARRAY PATTERNS

# 13. Largest Element in Array

### Problem

Find the largest element.

### Example

```text
Array = [10, 5, 25, 8, 15]

Largest = 25
```

### Logic

Start with the first element as maximum.

```cpp
int maxElement = arr[0];
```

Then compare every remaining element.

```cpp
for(int i = 1; i < n; i++) {

    if(arr[i] > maxElement) {
        maxElement = arr[i];
    }
}
```

### Complete Code

```cpp
int maxElement = arr[0];

for(int i = 1; i < n; i++) {

    if(arr[i] > maxElement) {
        maxElement = arr[i];
    }
}

cout << maxElement;
```

### Complexity

```text
Time:  O(n)
Space: O(1)
```

---

# 14. Minimum and Maximum

### Problem

Find both minimum and maximum elements.

### Example

```text
Array = [10, 5, 25, 8, 15]

Minimum = 5
Maximum = 25
```

### Solution

```cpp
int minimum = arr[0];
int maximum = arr[0];

for(int i = 1; i < n; i++) {

    if(arr[i] < minimum) {
        minimum = arr[i];
    }

    if(arr[i] > maximum) {
        maximum = arr[i];
    }
}

cout << "Minimum = " << minimum << endl;
cout << "Maximum = " << maximum << endl;
```

---

# 15. Even and Odd Positions

### Problem

Print elements present at even and odd indexes.

> Remember: **position/index** and **element value** are different concepts.

Example:

```text
Array = [10, 20, 30, 40, 50]

Index:    0   1   2   3   4
```

Even indexes:

```text
10 30 50
```

Odd indexes:

```text
20 40
```

### Solution

```cpp
for(int i = 0; i < n; i++) {

    if(i % 2 == 0) {
        cout << arr[i] << " ";
    }
}
```

---

# 16. Replace 0 with 5

### Problem

Replace every `0` in an array with `5`.

### Example

```text
Input:
[1, 0, 3, 0, 5]

Output:
[1, 5, 3, 5, 5]
```

### Solution

```cpp
for(int i = 0; i < n; i++) {

    if(arr[i] == 0) {
        arr[i] = 5;
    }
}
```

Print the array:

```cpp
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```

### Pattern

This is an example of **in-place modification**.

```text
Check element
     ↓
Condition satisfied?
     ↓
Modify arr[i]
```

---

# 17. Strongest Neighbour

### Problem

For each pair of adjacent elements, find the stronger/larger neighbour.

### Example

```text
Array:
10 20 15 25 8
```

Compare adjacent elements:

```text
10,20 → 20
20,15 → 20
15,25 → 25
25,8  → 25
```

Output:

```text
20 20 25 25
```

### Solution

```cpp
for(int i = 0; i < n - 1; i++) {

    cout << max(arr[i], arr[i + 1]) << " ";
}
```

### Important Observation

We access:

```cpp
arr[i]
arr[i + 1]
```

This is called an **adjacent element pattern**.

---

# 🔴 PROBLEM SOLVING

# 18. Rotate Array by One

### Problem

Rotate the array to the right by one position.

### Example

```text
Input:
[1, 2, 3, 4, 5]

Output:
[5, 1, 2, 3, 4]
```

### Step 1

Store the last element.

```cpp
int last = arr[n - 1];
```

### Step 2

Shift elements to the right.

```cpp
for(int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
}
```

### Step 3

Put the last element at index `0`.

```cpp
arr[0] = last;
```

### Complete Code

```cpp
int last = arr[n - 1];

for(int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
}

arr[0] = last;
```

### Complexity

```text
Time:  O(n)
Space: O(1)
```

---

# 19. Reverse an Array / Subarray

### Problem

Reverse elements between two indexes.

Example:

```text
Array:
[1, 2, 3, 4, 5]

Reverse index 1 to 3

Result:
[1, 4, 3, 2, 5]
```

### Two Pointer Approach

Use:

```text
left
right
```

Move them toward each other.

### Solution

```cpp
int left = 1;
int right = 3;

while(left < right) {

    swap(arr[left], arr[right]);

    left++;
    right--;
}
```

### General Pattern

```cpp
while(left < right) {

    swap(arr[left], arr[right]);

    left++;
    right--;
}
```

This is called the **Two Pointer Pattern**.

---

# 20. Palindrome Array

### What is a Palindrome?

An array is a palindrome if it reads the same from both directions.

### Example

```text
[1, 2, 3, 2, 1]
```

Forward:

```text
1 2 3 2 1
```

Backward:

```text
1 2 3 2 1
```

Therefore:

```text
Palindrome
```

### Non-Palindrome

```text
[1, 2, 3, 4, 5]
```

### Two Pointer Approach

```text
left → first element
right → last element
```

Compare:

```text
arr[left] == arr[right]
```

### Solution

```cpp
int left = 0;
int right = n - 1;

bool palindrome = true;

while(left < right) {

    if(arr[left] != arr[right]) {
        palindrome = false;
        break;
    }

    left++;
    right--;
}

if(palindrome) {
    cout << "Palindrome";
}
else {
    cout << "Not Palindrome";
}
```

### Complexity

```text
Time:  O(n)
Space: O(1)
```

---

# 🧠 Important Array Patterns

After solving these problems, students should identify the following patterns.

| Pattern                  | Example              |
| ------------------------ | -------------------- |
| Traversal                | Print all elements   |
| Index Access             | `arr[i]`             |
| Accumulation             | Sum of array         |
| Counting                 | Count odd/even       |
| Maximum                  | Largest element      |
| Minimum                  | Smallest element     |
| Condition + Modification | Replace 0 with 5     |
| Adjacent Elements        | Strongest neighbour  |
| Shifting                 | Rotate array         |
| Two Pointers             | Reverse / Palindrome |

---

# ⭐ Important Rules to Remember

### Rule 1 — Index starts from 0

```text
First element → index 0
```

### Rule 2 — Last index

```text
n - 1
```

### Rule 3 — Traverse using loop

```cpp
for(int i = 0; i < n; i++)
```

### Rule 4 — Access an element

```cpp
arr[i]
```

### Rule 5 — Don't access

```cpp
arr[n]   // ❌
```

Use:

```cpp
arr[n - 1]   // ✅
```

---

# ⏱️ Time Complexity Cheat Sheet

| Operation        | Complexity |
| ---------------- | ---------: |
| Access element   |       O(1) |
| Update element   |       O(1) |
| Traversal        |       O(n) |
| Find maximum     |       O(n) |
| Find minimum     |       O(n) |
| Sum              |       O(n) |
| Count elements   |       O(n) |
| Rotate by one    |       O(n) |
| Reverse          |       O(n) |
| Check palindrome |       O(n) |

---

# 🎯 Class Practice Questions

After completing the above problems, ask students to solve:

### Easy

1. Find the sum of all even elements.
2. Find the sum of all odd elements.
3. Count positive and negative numbers.
4. Count zeros in an array.
5. Find the first element of an array.
6. Find the last element of an array.
7. Print elements in reverse order.
8. Find the average of array elements.

### Medium

9. Find the second largest element.
10. Find the second smallest element.
11. Search for an element.
12. Count occurrences of a given element.
13. Find the difference between maximum and minimum.
14. Copy one array into another.
15. Reverse an entire array.
16. Check whether an array is sorted.

---

# 🚀 Recommended Problem-Solving Strategy

Whenever you see an array problem, ask:

```text
1. What does the problem ask?

2. Do I need to visit every element?

3. What should my initial value be?

4. Do I need a variable to store:
   - sum?
   - count?
   - minimum?
   - maximum?

5. Do I need to modify the array?

6. Do I need adjacent elements?

7. Do I need two pointers?

8. What is the time complexity?
```

---

# 📌 Quick Revision

```text
Array
  ↓
Multiple values of same type
  ↓
Index starts from 0
  ↓
Access using arr[index]
  ↓
Traverse using loop
  ↓
Apply patterns
  ↓
Solve problems
```

### Most Important Code Pattern

```cpp
for(int i = 0; i < n; i++) {
    // process arr[i]
}
```

### Two Pointer Pattern

```cpp
int left = 0;
int right = n - 1;

while(left < right) {

    // process

    left++;
    right--;
}
```

---

# 🎓 Learning Outcome

After this class, students should be able to:

* Explain what an array is
* Declare and initialize arrays
* Take array input
* Print array elements
* Understand array indexing
* Traverse an array
* Find minimum and maximum
* Calculate sum
* Count elements based on conditions
* Modify array elements
* Rotate an array
* Reverse an array
* Check whether an array is a palindrome
* Recognize basic array problem-solving patterns

---

## 🔥 Next Topics

After mastering these basics, move to:

```text
Arrays
  ↓
Searching
  ↓
Linear Search
  ↓
Binary Search
  ↓
Sorting
  ↓
Bubble Sort
  ↓
Selection Sort
  ↓
Insertion Sort
  ↓
Two Pointer Problems
  ↓
Prefix Sum
  ↓
Sliding Window
  ↓
Hashing
```

> **Remember:** Don't memorize solutions. Learn the pattern behind the solution.
