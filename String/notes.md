# C++ Strings

## 1. What is a String?

A **string is a sequence of characters**.

Example:

```cpp
string name = "Vinay";
```

Characters are stored using indexes starting from `0`:

```text
V  i  n  a  y
0  1  2  3  4
```

In C++, we commonly use the `string` class from the `<string>` header.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Vinay";

    cout << name;

    return 0;
}
```

---

## 2. Declaration and Initialization

### Declaration

```cpp
string str;
```

### Initialization

```cpp
string str = "Hello";
```

or

```cpp
string str("Hello");
```

### Empty String

```cpp
string str = "";
```

---

## 3. Taking String Input

### Using `cin`

```cpp
string name;

cin >> name;

cout << name;
```

Input:

```text
Vinay
```

Output:

```text
Vinay
```

### Important

`cin` stops reading when it encounters a **space**.

Input:

```text
Vinay Pratap
```

Using:

```cpp
cin >> name;
```

Only:

```text
Vinay
```

will be stored.

---

## 4. Using `getline()`

To take a complete line including spaces:

```cpp
string name;

getline(cin, name);

cout << name;
```

Input:

```text
Vinay Pratap Singh
```

Output:

```text
Vinay Pratap Singh
```

### Important Difference

| Method              | Reads         |
| ------------------- | ------------- |
| `cin >> str`        | One word      |
| `getline(cin, str)` | Complete line |

---

## 5. String Indexing

String indexing starts from **0**.

```cpp
string str = "Hello";
```

```text
H   e   l   l   o
0   1   2   3   4
```

Access a character:

```cpp
cout << str[0];
```

Output:

```text
H
```

```cpp
cout << str[3];
```

Output:

```text
l
```

---

## 6. Traversing a String

### Using Normal `for` Loop

```cpp
string str = "Hello";

for(int i = 0; i < str.length(); i++) {
    cout << str[i] << " ";
}
```

Output:

```text
H e l l o
```

### Using `size()`

```cpp
for(int i = 0; i < str.size(); i++) {
    cout << str[i] << " ";
}
```

`length()` and `size()` both return the number of characters.

---

## 7. Finding Length

```cpp
string str = "Hello";

cout << str.length();
```

Output:

```text
5
```

You can also use:

```cpp
cout << str.size();
```

---

## 8. Changing a Character

Strings are mutable.

```cpp
string str = "Hello";

str[0] = 'Y';

cout << str;
```

Output:

```text
Yello
```

---

## 9. First and Last Character

```cpp
string str = "Hello";

cout << str[0] << endl;

cout << str[str.length() - 1];
```

Output:

```text
H
o
```

### Important

Last index:

```cpp
str.length() - 1
```

---

## 10. Concatenation

Concatenation means **joining strings**.

```cpp
string first = "Hello";
string second = "World";

string result = first + " " + second;

cout << result;
```

Output:

```text
Hello World
```

We can also use:

```cpp
first += second;
```

Example:

```cpp
string str = "Hello";

str += " World";

cout << str;
```

Output:

```text
Hello World
```

---

## 11. Compare Two Strings

We can directly compare strings.

```cpp
string a = "hello";
string b = "hello";

if(a == b) {
    cout << "Same";
}
else {
    cout << "Different";
}
```

Output:

```text
Same
```

Other operators:

```text
==
!=
<
>
<=
>=
```

Example:

```cpp
string a = "apple";
string b = "banana";

if(a < b) {
    cout << "a comes first";
}
```

String comparison is **lexicographical**.

---

## 12. Convert String to Uppercase

Use `<cctype>`.

```cpp
#include <cctype>
```

Example:

```cpp
string str = "hello";

for(int i = 0; i < str.length(); i++) {
    str[i] = toupper(str[i]);
}

cout << str;
```

Output:

```text
HELLO
```

---

## 13. Convert String to Lowercase

```cpp
string str = "HELLO";

for(int i = 0; i < str.length(); i++) {
    str[i] = tolower(str[i]);
}

cout << str;
```

Output:

```text
hello
```

---

## 14. Check Character Type

Useful functions from `<cctype>`:

```cpp
isalpha()
isdigit()
isalnum()
isspace()
islower()
isupper()
```

Example:

```cpp
char ch = '5';

if(isdigit(ch)) {
    cout << "Digit";
}
```

---

## 15. Count Vowels

### Problem

Count the number of vowels in a string.

```cpp
string str;
getline(cin, str);

int count = 0;

for(int i = 0; i < str.length(); i++) {

    if(str[i] == 'a' || str[i] == 'e' ||
       str[i] == 'i' || str[i] == 'o' ||
       str[i] == 'u') {
        count++;
    }
}

cout << count;
```

Example:

```text
Input:  education
Output: 5
```

For both uppercase and lowercase, convert first:

```cpp
str[i] = tolower(str[i]);
```

---

## 16. Count Digits in a String

```cpp
string str;
getline(cin, str);

int count = 0;

for(int i = 0; i < str.length(); i++) {

    if(isdigit(str[i])) {
        count++;
    }
}

cout << count;
```

Input:

```text
abc123xyz
```

Output:

```text
3
```

---

## 17. Count Spaces

```cpp
string str;
getline(cin, str);

int count = 0;

for(int i = 0; i < str.length(); i++) {

    if(str[i] == ' ') {
        count++;
    }
}

cout << count;
```

---

## 18. Reverse a String

### Using Loop

```cpp
string str;
cin >> str;

for(int i = str.length() - 1; i >= 0; i--) {
    cout << str[i];
}
```

Input:

```text
hello
```

Output:

```text
olleh
```

### Reverse In-Place

```cpp
int i = 0;
int j = str.length() - 1;

while(i < j) {
    swap(str[i], str[j]);

    i++;
    j--;
}

cout << str;
```

---

## 19. Check Palindrome

A palindrome reads the same from both sides.

Examples:

```text
madam
level
racecar
```

### Code

```cpp
string str;
cin >> str;

int i = 0;
int j = str.length() - 1;

bool palindrome = true;

while(i < j) {

    if(str[i] != str[j]) {
        palindrome = false;
        break;
    }

    i++;
    j--;
}

if(palindrome)
    cout << "Palindrome";
else
    cout << "Not Palindrome";
```

---

## 20. Find a Character

```cpp
string str = "hello";

char ch = 'e';

for(int i = 0; i < str.length(); i++) {

    if(str[i] == ch) {
        cout << "Found at index " << i;
        break;
    }
}
```

---

## 21. `find()` Function

C++ provides a built-in `find()` function.

```cpp
string str = "hello";

cout << str.find('e');
```

Output:

```text
1
```

### Find a Substring

```cpp
string str = "hello world";

cout << str.find("world");
```

Output:

```text
6
```

### If It Isn't Found

```cpp
string str = "hello";

cout << str.find("xyz");
```

It returns:

```cpp
string::npos
```

Example:

```cpp
if(str.find("xyz") == string::npos) {
    cout << "Not found";
}
```

---

## 22. `substr()`

Used to extract a part of a string.

### Syntax

```cpp
str.substr(start, length);
```

Example:

```cpp
string str = "HelloWorld";

cout << str.substr(0, 5);
```

Output:

```text
Hello
```

Another example:

```cpp
cout << str.substr(5, 5);
```

Output:

```text
World
```

---

## 23. `append()`

```cpp
string a = "Hello";
string b = " World";

a.append(b);

cout << a;
```

Output:

```text
Hello World
```

---

## 24. `insert()`

```cpp
string str = "Helo";

str.insert(2, "l");

cout << str;
```

Output:

```text
Hello
```

---

## 25. `erase()`

```cpp
string str = "Hello";

str.erase(1, 2);

cout << str;
```

Starting from index `1`, remove `2` characters.

Output:

```text
Hlo
```

---

## 26. `replace()`

```cpp
string str = "I like Java";

str.replace(7, 4, "C++");

cout << str;
```

Output:

```text
I like C++
```

---

## 27. Important String Functions

| Function    | Purpose                 |
| ----------- | ----------------------- |
| `length()`  | Find length             |
| `size()`    | Find length             |
| `find()`    | Search character/string |
| `substr()`  | Extract substring       |
| `append()`  | Add string              |
| `insert()`  | Insert characters       |
| `erase()`   | Remove characters       |
| `replace()` | Replace characters      |
| `empty()`   | Check whether empty     |
| `clear()`   | Remove everything       |

---

## 28. `empty()`

```cpp
string str;

if(str.empty()) {
    cout << "String is empty";
}
```

---

## 29. `clear()`

```cpp
string str = "Hello";

str.clear();

cout << str;
```

The string becomes empty.

---

## 30. Character Array vs String

### Character Array

```cpp
char str[] = "Hello";
```

### C++ String

```cpp
string str = "Hello";
```

For beginners, prefer:

```cpp
string
```

because it provides useful built-in functions such as:

```text
length()
find()
substr()
append()
insert()
erase()
```

---

# Practice Problems

## Level 1 — Basics

1. Take a string and print it.
2. Find length of a string.
3. Print every character.
4. Print first and last character.
5. Count vowels.
6. Count consonants.
7. Count digits.
8. Count spaces.
9. Convert lowercase to uppercase.
10. Convert uppercase to lowercase.

## Level 2 — Logic

11. Reverse a string.
12. Check palindrome.
13. Count frequency of a character.
14. Find first occurrence of a character.
15. Find last occurrence of a character.
16. Find the largest/smallest character.
17. Remove all spaces.
18. Replace every space with `-`.
19. Count words in a sentence.
20. Find the number of vowels and consonants.

## Level 3 — STL String

21. Search for a substring using `find()`.
22. Extract a substring using `substr()`.
23. Remove a particular character.
24. Replace a word in a sentence.
25. Check whether a string contains a given word.

## Interview / DSA Problems

26. Valid Palindrome
27. Reverse Words in a String
28. Valid Anagram
29. First Unique Character
30. Longest Common Prefix
31. Remove Duplicates from String
32. Longest Substring Without Repeating Characters
