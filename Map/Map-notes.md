# Hash Map in C++

## 1. What is a Hash Map?

A **Hash Map** stores data in the form of:

```text
Key → Value
```

In C++, Hash Map is implemented using:

```cpp
unordered_map
```

Header file:

```cpp
#include <unordered_map>
```

Example:

```cpp
unordered_map<int, int> mp;
```

Here:

```text
Key   → int
Value → int
```

Example:

```text
10 → 100
20 → 200
30 → 300
```

---

# 2. Why Do We Use Hash Map?

Suppose we have:

```text
10 20 30 40 50
```

If we want to repeatedly search for a value in an array, each search may take:

```text
O(n)
```

Using a Hash Map, searching is **O(1) on average**.

Therefore, Hash Map is mainly used for:

* Fast searching
* Counting frequency
* Finding duplicates
* Storing indexes
* Checking whether an element exists
* Mapping one value to another

---

# 3. Creating an Unordered Map

```cpp
unordered_map<int, int> mp;
```

Syntax:

```cpp
unordered_map<Key, Value> name;
```

Examples:

```cpp
unordered_map<int, int> mp;
unordered_map<char, int> mp;
unordered_map<string, int> mp;
```

---

# 4. Insert Data

We can insert data using:

```cpp
mp[key] = value;
```

Example:

```cpp
unordered_map<int, int> mp;

mp[10] = 100;
mp[20] = 200;
mp[30] = 300;
```

Map:

```text
Key → Value

10 → 100
20 → 200
30 → 300
```

---

# 5. Access a Value

```cpp
cout << mp[20];
```

Output:

```text
200
```

---

# 6. Update a Value

If the key already exists, its value is updated.

```cpp
mp[20] = 500;
```

Now:

```text
20 → 500
```

---

# 7. Frequency Counting

One of the most important uses of Hash Map is **counting frequency**.

Example:

```text
arr = [10, 20, 10, 30, 20, 10]
```

We want:

```text
10 → 3
20 → 2
30 → 1
```

Code:

```cpp
unordered_map<int, int> mp;

for(int x : arr) {
    mp[x]++;
}
```

### Important Pattern

```cpp
mp[x]++;
```

means:

> Increase the frequency of `x` by 1.

---

# 8. Character Frequency

Hash Map can also count characters.

Example:

```text
"hello"
```

Code:

```cpp
unordered_map<char, int> mp;

for(char ch : s) {
    mp[ch]++;
}
```

Result:

```text
h → 1
e → 1
l → 2
o → 1
```

---

# 9. Check Whether a Key Exists

Use:

```cpp
mp.find(key)
```

Example:

```cpp
if(mp.find(20) != mp.end()) {
    cout << "Found";
}
else {
    cout << "Not Found";
}
```

### Meaning

```cpp
mp.find(20) != mp.end()
```

means:

> Key `20` exists in the map.

If:

```cpp
mp.find(20) == mp.end()
```

then:

> Key `20` does not exist.

---

# 10. `count()`

Another simple way to check whether a key exists:

```cpp
if(mp.count(20)) {
    cout << "Found";
}
```

For `unordered_map`, `count(key)` returns:

```text
1 → key exists
0 → key does not exist
```

Example:

```cpp
if(mp.count(50)) {
    cout << "Found";
}
else {
    cout << "Not Found";
}
```

---

# 11. Delete an Element

Use:

```cpp
mp.erase(key);
```

Example:

```cpp
mp.erase(20);
```

This removes key `20`.

---

# 12. Find Number of Elements

Use:

```cpp
cout << mp.size();
```

Example:

```cpp
unordered_map<int, int> mp;

mp[10] = 100;
mp[20] = 200;
mp[30] = 300;

cout << mp.size();
```

Output:

```text
3
```

---

# 13. Traversing a Hash Map

We can use a range-based `for` loop.

```cpp
for(auto x : mp) {
    cout << x.first << " " << x.second << endl;
}
```

Here:

```cpp
x.first
```

is the **key**.

```cpp
x.second
```

is the **value**.

Example:

```cpp
unordered_map<int, int> mp;

mp[10] = 2;
mp[20] = 3;
mp[30] = 1;

for(auto x : mp) {
    cout << x.first << " -> " << x.second << endl;
}
```

Output order may be different because `unordered_map` does **not maintain sorted order**.

---

# 14. Important Point About `unordered_map`

`unordered_map` does not store elements in sorted order.

Example:

```cpp
mp[10] = 100;
mp[20] = 200;
mp[30] = 300;
```

The output may be:

```text
30 → 300
10 → 100
20 → 200
```

Do not depend on the order.

---

# 15. `mp[key]` Important Concept

Consider:

```cpp
unordered_map<int, int> mp;

cout << mp[10];
```

If `10` does not exist, `mp[10]` creates the key with its default value.

For `int`, the default value is:

```text
0
```

So:

```cpp
mp[10]++;
```

becomes:

```text
10 → 1
```

This is why frequency counting works easily.

---

# 16. Key and Value Can Be Different Types

### Integer → Integer

```cpp
unordered_map<int, int> mp;
```

### Character → Integer

```cpp
unordered_map<char, int> mp;
```

### String → Integer

```cpp
unordered_map<string, int> mp;
```

### Integer → String

```cpp
unordered_map<int, string> mp;
```

### String → Vector

```cpp
unordered_map<string, vector<string>> mp;
```

---

# 17. Important Hash Map Patterns

## Pattern 1: Frequency

```cpp
unordered_map<int, int> mp;

for(int x : arr) {
    mp[x]++;
}
```

Use for:

* Frequency
* Duplicate counting
* Most frequent element

---

## Pattern 2: Check Existence

```cpp
if(mp.count(x)) {
    // x exists
}
```

Use for:

* Searching
* Duplicate detection
* Existence checking

---

## Pattern 3: Store Index

```cpp
unordered_map<int, int> mp;

for(int i = 0; i < n; i++) {
    mp[arr[i]] = i;
}
```

Here:

```text
Value → Index
```

Example:

```text
arr = [10, 20, 30]

10 → 0
20 → 1
30 → 2
```

This pattern is very important for **Two Sum**.

---

# 18. Time Complexity

For `unordered_map`:

| Operation | Average Time |
| --------- | ------------ |
| Insert    | O(1)         |
| Search    | O(1)         |
| Access    | O(1)         |
| Delete    | O(1)         |

This is why Hash Map is useful for solving problems efficiently.

---

# 19. Hash Map vs Array

### Array

```text
Index → Value
```

Example:

```cpp
arr[2]
```

### Hash Map

```text
Key → Value
```

Example:

```cpp
mp[20]
```

Main difference:

```text
Array     → uses index
Hash Map  → uses key
```

---

# 20. Basic Example

### Problem

Count the frequency of every number.

Input:

```text
[10, 20, 10, 30, 20, 10]
```

Code:

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {10, 20, 10, 30, 20, 10};
    int n = 6;

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for(auto x : mp) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}
```

Expected frequencies:

```text
10 → 3
20 → 2
30 → 1
```

The order may be different.

---

# 21. LeetCode Problems

Practice these problems in this order.

### Beginner

1. **217 — Contains Duplicate**
2. **1 — Two Sum**
3. **242 — Valid Anagram**
4. **383 — Ransom Note**
5. **387 — First Unique Character in a String**

### Intermediate

6. **49 — Group Anagrams**
7. **128 — Longest Consecutive Sequence**
8. **560 — Subarray Sum Equals K**

---

# 22. Most Important Problems

### LeetCode 1 — Two Sum

Main Hash Map idea:

```text
Number → Index
```

```cpp
unordered_map<int, int> mp;
```

Check:

```cpp
int required = target - nums[i];

if(mp.count(required)) {
    // answer found
}
```

---

### LeetCode 242 — Valid Anagram

Main idea:

```text
Character → Frequency
```

```cpp
unordered_map<char, int> mp;
```

Frequency:

```cpp
mp[ch]++;
```

---

### LeetCode 387 — First Unique Character

Main idea:

```text
Character → Frequency
```

First:

```cpp
mp[ch]++;
```

Then check which character has:

```cpp
mp[ch] == 1
```

---

# 23. Hash Map Problem-Solving Approach

Whenever you see a problem, ask:

### Step 1

**Do I need fast searching?**

If yes, think about Hash Map / Hash Set.

### Step 2

**What should my key be?**

Examples:

```text
Number
Character
String
```

### Step 3

**What should my value be?**

Examples:

```text
Frequency
Index
Sum
Count
```

### Step 4

Create the map:

```cpp
unordered_map<Key, Value> mp;
```

### Step 5

Store and use the information.

---

# Quick Revision

```cpp
unordered_map<int, int> mp;
```

### Insert

```cpp
mp[10] = 100;
```

### Update

```cpp
mp[10] = 200;
```

### Frequency

```cpp
mp[x]++;
```

### Access

```cpp
mp[x]
```

### Search

```cpp
mp.find(x)
```

### Check

```cpp
mp.count(x)
```

### Delete

```cpp
mp.erase(x);
```

### Size

```cpp
mp.size();
```

### Traverse

```cpp
for(auto x : mp) {
    cout << x.first << " " << x.second;
}
```

## Remember

```text
Hash Map = Key → Value

Most common patterns:

1. Value → Frequency
2. Value → Index
3. Character → Frequency
4. Key → Information
```

**Main Goal:** Use Hash Map when you need **fast lookup or need to remember information about previously seen elements**.
