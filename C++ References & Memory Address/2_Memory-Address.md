# C++ Memory Address

## 📌 What is a Memory Address?

When we create a variable in C++, the variable is stored somewhere in the computer's **memory (RAM)**.

That location has a unique **memory address**.

### Example

```cpp
int age = 25;
```

When this statement executes:

```text
Variable: age
Value:    25
Address:  some memory location
```

The exact memory address is decided by the computer.

---

# 🔹 How to Get the Memory Address?

C++ provides the **address-of operator `&`** to get the memory address of a variable.

### Syntax

```cpp
&variableName
```

### Example

```cpp
#include<iostream>
using namespace std;

int main() {

    int age = 25;

    cout << &age;

    return 0;
}
```

Output may look like:

```text
0x61ff08
```

Your output will most likely be different.

> **Important:** Memory addresses can change every time the program runs.

---

# 🔹 Understanding the `&` Operator

The `&` operator has different uses depending on where it is used.

### 1. Get Memory Address

```cpp
int age = 25;

cout << &age;
```

Here:

```cpp
&age
```

means:

> Give me the memory address of `age`.

---

### 2. Create a Reference

```cpp
int age = 25;

int &ref = age;
```

Here:

```cpp
int &ref
```

means:

> `ref` is a reference (another name) for `age`.

---

# 🔥 Same `&`, Different Meaning

This is important for beginners.

```cpp
int age = 25;

cout << &age;      // Address of age

int &ref = age;    // Reference to age
```

So:

```text
&age
    ↓
Memory address of age
```

But:

```text
int &ref = age
        ↓
Reference to age
```

The meaning depends on the context.

---

# 🔹 Memory Address is Usually Displayed in Hexadecimal

Memory addresses are commonly displayed in **hexadecimal format**.

Example:

```text
0x61ff08
```

The `0x` indicates that the number is written in hexadecimal.

You may see addresses such as:

```text
0x7ffee123
0x61ff08
0x16b2c
```

The exact address depends on your system and program execution.

---

# 🔹 Different Variables Have Different Addresses

Consider:

```cpp
#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 20;

    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;

    return 0;
}
```

Output might be:

```text
Address of a: 0x61ff0c
Address of b: 0x61ff08
```

The addresses are different because `a` and `b` are different variables.

---

# 🔹 Value vs Memory Address

Consider:

```cpp
int a = 10;
```

There are two different things we can access:

### Value

```cpp
cout << a;
```

Output:

```text
10
```

### Address

```cpp
cout << &a;
```

Output might be:

```text
0x61ff0c
```

So:

```text
a
↓
Value stored in variable
↓
10
```

And:

```text
&a
↓
Memory address of variable
↓
0x61ff0c
```

---

# 🔥 Visualizing Memory

Suppose:

```cpp
int age = 25;
```

Think of memory like boxes:

```text
Memory
┌──────────────────────┐
│ Address: 0x61ff08    │
│ Value:   25          │
└──────────────────────┘
          ↑
         age
```

`age` stores the value:

```text
25
```

and the computer stores that value at some memory address.

---

# 🔹 Address of a String

We can also get the address of a string variable.

```cpp
#include<iostream>
using namespace std;

int main() {

    string food = "Pizza";

    cout << &food;

    return 0;
}
```

Output might be:

```text
0x61ff00
```

Again, the exact address will be different on different systems.

---

# 🔹 Address of Different Data Types

The address-of operator works with different types.

### Integer

```cpp
int age = 25;

cout << &age;
```

### Double

```cpp
double price = 99.99;

cout << &price;
```

### Character

```cpp
char grade = 'A';

cout << &grade;
```

### Float

```cpp
float marks = 95.5;

cout << &marks;
```

---

# 🔹 Address of a Reference

Remember from the previous topic:

```cpp
int a = 10;

int &ref = a;
```

Now:

```cpp
cout << &a << endl;
cout << &ref << endl;
```

Both addresses will be the same.

Example:

```text
0x61ff08
0x61ff08
```

Why?

Because `ref` is just another name for `a`.

```text
        Same memory
       ┌────────────┐
       │     10     │
       └────────────┘
          ↑      ↑
          │      │
          a     ref
```

---

# 🔥 Memory Address and Reference

This connects directly to the previous topic.

```cpp
int a = 10;

int &ref = a;
```

We can check:

```cpp
cout << &a << endl;
cout << &ref << endl;
```

Both are the same.

Therefore:

> A reference does not create a separate variable with a separate memory location.

It acts as another name for the existing variable.

---

# 🔹 Memory Address and Pointer

Memory addresses become especially important when learning **pointers**.

Example:

```cpp
int a = 10;

int *ptr = &a;
```

Here:

```cpp
&a
```

gets the address of `a`.

And:

```cpp
ptr
```

stores that address.

Think:

```text
a
┌─────────────┐
│     10      │
└─────────────┘
      ↑
      │
      │ address
      │
     ptr
```

---

# 🔥 Address-of vs Dereference

When you start pointers, two operators become very important:

### Address-of `&`

```cpp
&a
```

Means:

> Give me the address of `a`.

### Dereference `*`

```cpp
*ptr
```

Means:

> Give me the value stored at the address inside `ptr`.

Example:

```cpp
#include<iostream>
using namespace std;

int main() {

    int a = 10;

    int *ptr = &a;

    cout << "Value: " << a << endl;
    cout << "Address: " << &a << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
```

Output might look like:

```text
Value: 10
Address: 0x61ff08
Pointer: 0x61ff08
Value using pointer: 10
```

Notice:

```text
&a  → Address of a
ptr → Address stored in pointer
*ptr → Value at that address
```

---

# 🔹 Simple Memory Diagram

For:

```cpp
int a = 10;

int *ptr = &a;
```

Think:

```text
       a
       ↓
┌──────────────────┐
│ Address: 0x1000  │
│ Value:     10    │
└──────────────────┘
        ↑
        │
        │ 0x1000
        │
┌──────────────────┐
│       ptr        │
│     0x1000       │
└──────────────────┘
```

Therefore:

```cpp
ptr
```

gives:

```text
0x1000
```

and:

```cpp
*ptr
```

gives:

```text
10
```

---

# 🔹 Why Are Memory Addresses Important?

Memory addresses are important because they allow C++ programs to work directly with memory.

They are especially useful for:

* References
* Pointers
* Dynamic memory
* Arrays
* Data structures
* Linked Lists
* Trees
* Efficient function arguments
* Low-level programming

---

# 🔹 Memory Address and Function

Memory addresses become useful when passing variables to functions.

### Pass by Value

```cpp
void change(int x) {

    x = 100;
}
```

A copy of the value is passed.

---

### Pass by Reference

```cpp
void change(int &x) {

    x = 100;
}
```

The function works with the original variable.

Example:

```cpp
#include<iostream>
using namespace std;

void change(int &x) {

    x = 100;
}

int main() {

    int a = 10;

    cout << "Before: " << a << endl;

    change(a);

    cout << "After: " << a << endl;

    return 0;
}
```

Output:

```text
Before: 10
After: 100
```

---

# 🔥 Important Connection

Students should remember this flow:

```text
Variable
   ↓
Stored somewhere in memory
   ↓
Memory location has an address
   ↓
& gives the address
   ↓
Reference can refer to the variable
   ↓
Pointer can store the address
```

---

# 🔹 `sizeof()` and Memory

We can use `sizeof()` to find how many bytes a data type or variable occupies.

Example:

```cpp
#include<iostream>
using namespace std;

int main() {

    int a = 10;

    cout << sizeof(a);

    return 0;
}
```

On many modern systems:

```text
4
```

This means `a` occupies 4 bytes.

However, the exact size can depend on the compiler and platform.

---

# 🔹 Address + Size

Consider:

```cpp
int a = 10;
```

Suppose its address is:

```text
0x1000
```

and `int` occupies 4 bytes.

Conceptually, its storage occupies a range beginning around:

```text
0x1000
```

The exact details of object representation and neighboring memory should not be assumed from this simplified picture.

---

# 🔹 Important: Don't Compare Addresses as Fixed Values

Never assume:

```text
Every int will always have address 0x1000
```

The address can change because of:

* Operating system
* Compiler
* Program execution
* Memory layout
* Address Space Layout Randomization (ASLR)

Therefore, an address such as:

```text
0x61ff08
```

is only an example.

---

# 🧠 Quick Revision

### Get Value

```cpp
int a = 10;

cout << a;
```

Output:

```text
10
```

### Get Address

```cpp
cout << &a;
```

Output might be:

```text
0x61ff08
```

### Create Reference

```cpp
int &ref = a;
```

### Create Pointer

```cpp
int *ptr = &a;
```

### Get Value Through Pointer

```cpp
cout << *ptr;
```

---

# ⭐ Most Important Operators

| Operator    | Meaning                    |
| ----------- | -------------------------- |
| `&variable` | Address of variable        |
| `int &ref`  | Reference                  |
| `int *ptr`  | Pointer declaration        |
| `&a`        | Address of `a`             |
| `*ptr`      | Value at pointer's address |

---

# 🎯 Practice Questions

### Beginner

1. Create an integer variable and print its value.
2. Print the memory address of an integer variable.
3. Create two variables and print their addresses.
4. Create a string variable and print its address.
5. Create a reference and print the addresses of both the original variable and reference.

### Intermediate

6. Create a function using pass by reference and change the value of a variable.
7. Create two integer variables and swap them using references.
8. Create a pointer that stores the address of an integer.
9. Print the value, address, pointer, and dereferenced value.
10. Explain the difference between:

```cpp
a
&a
ptr
*ptr
```

---

# 🔥 Interview Questions

1. What is a memory address?
2. What is the purpose of the `&` operator?
3. What does `&variable` mean?
4. Why are memory addresses usually displayed in hexadecimal?
5. Does every variable have a memory address?
6. Why can the memory address change between program executions?
7. What is the difference between a value and its memory address?
8. What is the relationship between references and memory addresses?
9. What is a pointer?
10. What is the difference between `&` and `*`?
11. What does `int *ptr = &a` mean?
12. What does `*ptr` mean?
13. Why are memory addresses important in C++?
14. What is the relationship between pointers and references?
15. What is the difference between pass by value and pass by reference?

---

# ⭐ Key Takeaways

> **1. Every object/variable has a memory location while it exists in the program.**

> **2. The `&` operator can be used to obtain the address of an object.**

> **3. Memory addresses are commonly displayed in hexadecimal notation.**

> **4. The exact memory address can change between program executions.**

> **5. A reference is an alias for an existing object.**

> **6. A pointer can store a memory address.**

> **7. `&a` gives the address of `a`.**

> **8. `*ptr` accesses the value at the address stored in `ptr`.**

> **9. Memory addresses are fundamental to understanding pointers and low-level C++ programming.**

---

# 🔗 Connection with Previous Topics

```text
C++ Variables
      ↓
Memory
      ↓
Memory Address
      ↓
&
      ↓
References
      ↓
Pointers
      ↓
Dynamic Memory
      ↓
Data Structures
```

The next important topic after **Memory Address + References** is **Pointers**.
