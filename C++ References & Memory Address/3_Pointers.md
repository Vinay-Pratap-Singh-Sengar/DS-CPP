# C++ Pointers

## 📌 What is a Pointer?

A **pointer** is a variable that stores the **memory address of another variable**.

In simple words:

> A normal variable stores a **value**, while a pointer stores an **address**.

Example:

```cpp
int age = 25;

int *ptr = &age;
```

Here:

```text
age → stores 25

ptr → stores the address of age
```

---

# 🔹 Why Do We Need Pointers?

Pointers are one of the most important concepts in C++.

They are used for:

* Memory management
* Dynamic memory allocation
* Passing data efficiently to functions
* Modifying original variables
* Arrays and strings
* Linked Lists
* Trees
* Graphs
* Data structures
* Low-level programming

---

# 🔹 Before Understanding Pointers

First understand these three concepts:

```cpp
int age = 25;
```

### 1. Variable

```cpp
age
```

gives the **value**:

```text
25
```

### 2. Address-of Operator

```cpp
&age
```

gives the **memory address** of `age`.

Example:

```text
0x61ff08
```

### 3. Pointer

```cpp
int *ptr = &age;
```

`ptr` stores:

```text
0x61ff08
```

So:

```text
age  → 25
ptr  → address of age
```

---

# 🔹 Creating a Pointer

### Syntax

```cpp
dataType *pointerName;
```

Example:

```cpp
int *ptr;
```

This means:

> `ptr` is a pointer that can store the address of an `int`.

---

# 🔹 Assigning an Address to a Pointer

```cpp
int age = 25;

int *ptr = &age;
```

Here:

```text
age = 25

&age = address of age

ptr = address of age
```

Visual representation:

```text
              Memory
           ┌─────────────┐
age ──────→ │     25      │
           │ 0x61ff08    │
           └─────────────┘
                 ↑
                 │
                 │ stores address
                 │
              ┌───────┐
ptr ────────→ │0x61ff08│
              └───────┘
```

---

# 🔥 Complete Example

```cpp
#include<iostream>
using namespace std;

int main() {

    int age = 25;

    int *ptr = &age;

    cout << "Value of age: " << age << endl;

    cout << "Address of age: " << &age << endl;

    cout << "Value stored in ptr: " << ptr << endl;

    return 0;
}
```

Output might look like:

```text
Value of age: 25
Address of age: 0x61ff08
Value stored in ptr: 0x61ff08
```

Notice:

```text
&age == ptr
```

Both represent the address of `age`.

---

# 🔹 What Does `*` Mean?

The `*` operator has an important role with pointers.

Consider:

```cpp
int *ptr = &age;
```

Here `*` is used while **declaring a pointer**.

```cpp
int *ptr;
```

means:

> `ptr` is a pointer to an integer.

But when we use:

```cpp
*ptr
```

it means:

> Go to the address stored in `ptr` and get the value stored there.

This is called **dereferencing**.

---

# 🔥 Dereferencing a Pointer

Example:

```cpp
#include<iostream>
using namespace std;

int main() {

    int age = 25;

    int *ptr = &age;

    cout << *ptr;

    return 0;
}
```

Output:

```text
25
```

Why?

```text
age = 25

&age = address

ptr = address of age

*ptr = value at that address
```

Therefore:

```text
*ptr = 25
```

---

# 🔹 Three Important Expressions

Suppose:

```cpp
int age = 25;

int *ptr = &age;
```

Remember:

### `age`

```cpp
cout << age;
```

Output:

```text
25
```

Means:

> Give me the value of `age`.

---

### `&age`

```cpp
cout << &age;
```

Output:

```text
0x61ff08
```

Means:

> Give me the address of `age`.

---

### `*ptr`

```cpp
cout << *ptr;
```

Output:

```text
25
```

Means:

> Give me the value stored at the address held by `ptr`.

---

# 🧠 Easy Formula

Remember this:

```text
age
 ↓
VALUE
```

```text
&age
 ↓
ADDRESS
```

```text
ptr
 ↓
ADDRESS
```

```text
*ptr
 ↓
VALUE
```

---

# 🔹 Pointer with String

Pointers can also point to strings.

```cpp
#include<iostream>
using namespace std;

int main() {

    string food = "Pizza";

    string *ptr = &food;

    cout << food << endl;

    cout << &food << endl;

    cout << ptr << endl;

    cout << *ptr << endl;

    return 0;
}
```

Output may look like:

```text
Pizza
0x61ff00
0x61ff00
Pizza
```

Here:

```text
food → Pizza
&food → address
ptr → address
*ptr → Pizza
```

---

# 🔹 Pointer Must Match the Data Type

The pointer type should normally correspond to the type of object it points to.

Correct:

```cpp
int age = 25;

int *ptr = &age;
```

Correct:

```cpp
double price = 99.99;

double *ptr = &price;
```

Correct:

```cpp
char grade = 'A';

char *ptr = &grade;
```

Incorrect:

```cpp
int age = 25;

double *ptr = &age;   // ❌
```

The pointer type does not match the pointed-to object.

---

# 🔹 Different Ways to Declare a Pointer

All of these are syntactically valid:

```cpp
int* ptr;
```

```cpp
int *ptr;
```

```cpp
int * ptr;
```

They mean the same thing.

### Recommended Style

```cpp
int* ptr;
```

or:

```cpp
int *ptr;
```

The important thing is to stay consistent.

---

# 🔹 Initializing a Pointer

A pointer should point to a valid object before we dereference it.

Correct:

```cpp
int age = 25;

int *ptr = &age;

cout << *ptr;
```

---

# ⚠️ Uninitialized Pointer

Avoid:

```cpp
int *ptr;

cout << *ptr;   // ❌ Dangerous
```

`ptr` contains an indeterminate address.

Dereferencing it can cause undefined behavior.

---

# 🔹 `nullptr`

If a pointer currently doesn't point to an object, initialize it with `nullptr`.

```cpp
int *ptr = nullptr;
```

This means:

> `ptr` currently points to nothing.

Example:

```cpp
#include<iostream>
using namespace std;

int main() {

    int *ptr = nullptr;

    cout << ptr;

    return 0;
}
```

Output:

```text
0
```

The exact display can vary, but `nullptr` represents a null pointer.

---

# 🔹 Checking for `nullptr`

Before dereferencing a pointer, we can check whether it is valid.

```cpp
int *ptr = nullptr;

if(ptr != nullptr) {

    cout << *ptr;
}
```

This prevents us from dereferencing a null pointer.

---

# 🔥 Changing a Value Using a Pointer

One of the powerful features of pointers is that we can modify the original variable.

Example:

```cpp
#include<iostream>
using namespace std;

int main() {

    int age = 25;

    int *ptr = &age;

    *ptr = 30;

    cout << age;

    return 0;
}
```

Output:

```text
30
```

Why?

Because:

```cpp
*ptr = 30;
```

means:

> Go to the address stored in `ptr` and change the value there to `30`.

That address belongs to `age`.

Therefore:

```text
Before:

age = 25

After:

age = 30
```

---

# 🔥 Pointer Diagram

Consider:

```cpp
int age = 25;

int *ptr = &age;
```

Think:

```text
       age
        ↓
┌──────────────────┐
│ Value = 25       │
│ Address = 1000   │
└──────────────────┘
        ↑
        │
        │ 1000
        │
      ptr
┌──────────────────┐
│ Value = 1000     │
└──────────────────┘
```

Therefore:

```text
age   → 25
&age  → 1000
ptr   → 1000
*ptr  → 25
```

---

# 🔹 Pointer and Memory Address

Let's connect the previous topics.

## Variable

```cpp
int a = 10;
```

Stores:

```text
10
```

## Memory Address

```cpp
&a
```

Gives:

```text
address of a
```

## Pointer

```cpp
int *ptr = &a;
```

Stores:

```text
address of a
```

## Dereference

```cpp
*ptr
```

Gives:

```text
10
```

---

# 🔥 Important Connection

```text
                VARIABLE
                   │
                   │
                int a=10
                   │
             ┌─────┴─────┐
             │           │
            &a           a
             │           │
          ADDRESS       VALUE
             │           │
             ↓           ↓
           ptr          10
             │
             ↓
            *ptr
             │
             ↓
            10
```

---

# 🔹 Pointer vs Reference

This is an important interview question.

### Reference

```cpp
int a = 10;

int &ref = a;
```

`ref` is another name for `a`.

### Pointer

```cpp
int a = 10;

int *ptr = &a;
```

`ptr` stores the address of `a`.

---

# Comparison

| Reference                     | Pointer                           |
| ----------------------------- | --------------------------------- |
| Alias of an existing variable | Stores a memory address           |
| `int &ref = a`                | `int *ptr = &a`                   |
| Access directly using `ref`   | Dereference using `*ptr`          |
| Must be initialized           | Can be initialized with `nullptr` |
| Cannot normally be reseated   | Can point to another object       |
| Cannot normally be null       | Can be null                       |

---

# 🔹 Pointer Can Point to Another Variable

A pointer can be changed to point somewhere else.

```cpp
int a = 10;
int b = 20;

int *ptr = &a;

cout << *ptr << endl;

ptr = &b;

cout << *ptr << endl;
```

Output:

```text
10
20
```

Initially:

```text
ptr → a
```

After:

```cpp
ptr = &b;
```

it becomes:

```text
ptr → b
```

This is different from a reference.

---

# 🔹 Pointer Arithmetic

Pointers can also be used with arithmetic operations, especially when working with arrays.

Example:

```cpp
int arr[3] = {10, 20, 30};

int *ptr = arr;

cout << *ptr << endl;

ptr++;

cout << *ptr << endl;
```

Output:

```text
10
20
```

Why?

Initially:

```text
ptr → arr[0]
```

After:

```cpp
ptr++;
```

it points to:

```text
arr[1]
```

Pointer arithmetic depends on the pointed-to type.

For example, incrementing an `int*` advances to the next `int` object, not simply one byte.

---

# 🔹 Pointers and Arrays

Arrays and pointers are closely related.

Example:

```cpp
int arr[3] = {10, 20, 30};

int *ptr = arr;

cout << *ptr << endl;
cout << *(ptr + 1) << endl;
cout << *(ptr + 2) << endl;
```

Output:

```text
10
20
30
```

---

# 🔹 Pointer with Function

Pointers can be passed to functions.

Example:

```cpp
#include<iostream>
using namespace std;

void change(int *ptr) {

    *ptr = 100;
}

int main() {

    int a = 10;

    change(&a);

    cout << a;

    return 0;
}
```

Output:

```text
100
```

Let's understand:

```cpp
change(&a);
```

passes the address of `a`.

Inside the function:

```cpp
void change(int *ptr)
```

`ptr` receives that address.

Then:

```cpp
*ptr = 100;
```

changes the original variable.

---

# 🔥 Reference vs Pointer in Functions

### Using Reference

```cpp
void change(int &x) {

    x = 100;
}
```

Call:

```cpp
change(a);
```

### Using Pointer

```cpp
void change(int *x) {

    *x = 100;
}
```

Call:

```cpp
change(&a);
```

Both can modify the original variable, but they use different mechanisms.

---

# 🔹 Pointer to Pointer

A pointer can also store the address of another pointer.

Example:

```cpp
int a = 10;

int *ptr = &a;

int **ptr2 = &ptr;
```

Think:

```text
a
↓
10

ptr
↓
address of a

ptr2
↓
address of ptr
```

Example:

```cpp
cout << a << endl;
cout << *ptr << endl;
cout << **ptr2 << endl;
```

Output:

```text
10
10
10
```

---

# 🔹 Dynamic Memory Allocation

Pointers are used for dynamic memory allocation.

C++ provides:

```cpp
new
```

and:

```cpp
delete
```

Example:

```cpp
int *ptr = new int;

*ptr = 50;

cout << *ptr;

delete ptr;
```

Output:

```text
50
```

Here:

```cpp
new int
```

allocates memory dynamically.

And:

```cpp
delete ptr;
```

releases that memory.

---

# 🔹 Dynamic Array

Pointers can also be used to create dynamic arrays.

```cpp
int n = 5;

int *arr = new int[n];

arr[0] = 10;
arr[1] = 20;
arr[2] = 30;
arr[3] = 40;
arr[4] = 50;

delete[] arr;
```

For modern C++, prefer containers such as `std::vector` for most dynamic-array use cases.

---

# ⚠️ Memory Leak

If dynamically allocated memory is not released, it can cause a **memory leak**.

Example:

```cpp
int *ptr = new int(50);

// Forgot to delete
```

The allocated memory remains unavailable to the program until it is reclaimed by the operating system when the process ends.

Correct:

```cpp
int *ptr = new int(50);

delete ptr;
```

For arrays:

```cpp
int *arr = new int[5];

delete[] arr;
```

---

# 🔹 Dangling Pointer

A **dangling pointer** is a pointer that refers to memory that is no longer valid for use.

Example:

```cpp
int *ptr = new int(10);

delete ptr;
```

After:

```cpp
delete ptr;
```

the pointer should not be dereferenced.

A common practice is:

```cpp
ptr = nullptr;
```

after deleting it when the pointer remains in scope.

```cpp
int *ptr = new int(10);

delete ptr;

ptr = nullptr;
```

---

# 🔥 `nullptr` vs Dangling Pointer

### Null Pointer

```cpp
int *ptr = nullptr;
```

Means:

> Pointer is intentionally pointing to nothing.

### Dangling Pointer

```cpp
int *ptr = new int(10);

delete ptr;
```

Now `ptr` contains an address that no longer refers to a valid allocated object.

Better:

```cpp
delete ptr;
ptr = nullptr;
```

---

# 🔹 `const` with Pointers

Pointers can be combined with `const` in different ways.

### Pointer to Constant

```cpp
const int *ptr;
```

You can change where `ptr` points, but you cannot modify the value through `ptr`.

Example:

```cpp
int a = 10;
int b = 20;

const int *ptr = &a;

ptr = &b;      // ✅
*ptr = 50;     // ❌
```

---

### Constant Pointer

```cpp
int *const ptr = &a;
```

The pointer cannot point somewhere else, but the value can be modified.

```cpp
int a = 10;

int *const ptr = &a;

*ptr = 50;     // ✅
```

But:

```cpp
int b = 20;

ptr = &b;      // ❌
```

---

### Constant Pointer to Constant

```cpp
const int *const ptr = &a;
```

Neither the pointer nor the pointed-to value can be modified through `ptr`.

---

# 🔹 Pointer to Structure

Pointers are heavily used with structures.

```cpp
struct Student {

    string name;
    int age;
};

int main() {

    Student s;

    s.name = "Rahul";
    s.age = 20;

    Student *ptr = &s;

    cout << ptr->name << endl;
    cout << ptr->age << endl;
}
```

Output:

```text
Rahul
20
```

When using a pointer to a structure, we commonly use:

```cpp
ptr->name
```

instead of:

```cpp
(*ptr).name
```

---

# 🔹 Pointer Operator `->`

If:

```cpp
Student *ptr = &s;
```

we can access members using:

```cpp
ptr->name
```

This is equivalent to:

```cpp
(*ptr).name
```

Example:

```cpp
cout << ptr->age;
```

---

# 🔥 Important Pointer Operators

| Operator  | Meaning                                       |
| --------- | --------------------------------------------- |
| `&`       | Address-of operator                           |
| `*`       | Pointer declaration                           |
| `*`       | Dereference operator                          |
| `->`      | Access structure/class member through pointer |
| `nullptr` | Null pointer                                  |

---

# 🧠 Important Confusion: `&` and `*`

Students often get confused because the same symbols can have different roles.

## `&` in:

```cpp
int *ptr = &a;
```

means:

> Give the address of `a`.

## `*` in:

```cpp
int *ptr;
```

means:

> `ptr` is a pointer.

## `*` in:

```cpp
*ptr
```

means:

> Access the value at the address stored in `ptr`.

---

# 🔥 One Example to Remember Everything

```cpp
#include<iostream>
using namespace std;

int main() {

    int a = 10;

    int *ptr = &a;

    cout << "Value of a: " << a << endl;

    cout << "Address of a: " << &a << endl;

    cout << "Value of ptr: " << ptr << endl;

    cout << "Value using ptr: " << *ptr << endl;

    *ptr = 50;

    cout << "New value of a: " << a << endl;

    return 0;
}
```

Output might be:

```text
Value of a: 10
Address of a: 0x61ff08
Value of ptr: 0x61ff08
Value using ptr: 10
New value of a: 50
```

---

# 🎯 Practice Questions

## Beginner

1. Create an integer variable and print its address.
2. Create a pointer to an integer.
3. Print the value stored in a pointer.
4. Print the value using dereferencing.
5. Change a variable's value using a pointer.
6. Create a pointer to a `double`.
7. Create a pointer to a `char`.
8. Create a pointer to a `string`.
9. Check whether a pointer is `nullptr`.
10. Print the value, address, and dereferenced value of a variable.

---

## Intermediate

11. Swap two numbers using pointers.

12. Write a function that changes a number using a pointer.

13. Write a function that doubles a number using a pointer.

14. Find the largest of two numbers using pointers.

15. Find the largest of three numbers using pointers.

16. Reverse an array using pointers.

17. Find the sum of an array using pointers.

18. Count even and odd numbers in an array using pointers.

19. Create a dynamic array using `new`.

20. Properly release dynamically allocated memory using `delete[]`.

---

# 🎯 Interview Questions

### Basic

1. What is a pointer?
2. Why do we use pointers in C++?
3. What does `&` mean?
4. What does `*` mean?
5. What is dereferencing?
6. What is a pointer variable?
7. How do you declare a pointer?
8. How do you initialize a pointer?
9. What is `nullptr`?
10. What is the difference between a pointer and a normal variable?

### Important

11. Difference between pointer and reference?
12. What is a dangling pointer?
13. What is a wild/uninitialized pointer?
14. What is a null pointer?
15. What is pointer arithmetic?
16. What is a pointer to pointer?
17. What is a function pointer?
18. What is a pointer to an array?
19. What is dynamic memory allocation?
20. What is the difference between `new` and `delete`?
21. What is the difference between `new[]` and `delete[]`?
22. What is a memory leak?
23. What is dereferencing a null pointer?
24. What is a `const` pointer?
25. What is a pointer to `const`?
26. What is the `->` operator?
27. Why are pointers important in data structures?
28. How are pointers used in linked lists?
29. How are pointers used in trees?
30. What happens to a pointer after `delete`?

---

# ⭐ Quick Revision

Remember these four:

```cpp
int a = 10;

int *ptr = &a;
```

### `a`

```cpp
a
```

Gives:

```text
10
```

### `&a`

```cpp
&a
```

Gives:

```text
Address of a
```

### `ptr`

```cpp
ptr
```

Gives:

```text
Address stored in ptr
```

### `*ptr`

```cpp
*ptr
```

Gives:

```text
10
```

---

# 🔥 Golden Rule

```text
& → Get the ADDRESS

* → Get the VALUE through a pointer
```

For:

```cpp
int a = 10;
int *ptr = &a;
```

remember:

```text
        a
        │
        │
        ▼
      10
        ▲
        │
       *ptr

&a ──────────► Address of a

ptr ─────────► Address of a
```

---

# ⭐ Final Summary

```text
Variable
   ↓
Stores a value
   ↓
Memory Address
   ↓
Every object has a memory location while it exists
   ↓
& gives the address
   ↓
Pointer stores the address
   ↓
* dereferences the pointer
   ↓
We can access/modify the original object
```

### Most Important Example

```cpp
int a = 10;

int *ptr = &a;

cout << a << endl;     // 10
cout << &a << endl;    // Address
cout << ptr << endl;   // Address
cout << *ptr << endl;  // 10

*ptr = 50;

cout << a << endl;     // 50
```

### Remember:

> **Variable → stores value**

> **`&variable` → gives address**

> **Pointer → stores address**

> **`*pointer` → gives value at that address**

> **`nullptr` → pointer points to nothing**

> **`delete` → releases dynamically allocated memory**

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
Pointer Arithmetic
      ↓
Dynamic Memory
      ↓
Linked List / Trees / Data Structures
```

Pointers are a foundational concept for understanding many C++ data structures and memory-management techniques.
