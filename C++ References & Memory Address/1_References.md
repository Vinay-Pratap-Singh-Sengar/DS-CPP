# C++ References

## 📌 What is a Reference?

A **reference** is another name (alias) for an existing variable.

It does **not create a new variable**. Instead, it refers to the same variable and the same memory location.

### Simple Example

```cpp
#include<iostream>
using namespace std;

int main() {

    int a = 10;

    int &b = a;

    cout << a << endl;
    cout << b << endl;

    return 0;
}
```

### Output

```text
10
10
```

Here:

```cpp
int &b = a;
```

means:

> `b` is another name for `a`.

So we can access the same value using either `a` or `b`.

---

# 🔹 Reference Syntax

```cpp
dataType &referenceName = variable;
```

Example:

```cpp
int a = 10;

int &b = a;
```

Here:

```text
a → Original variable
b → Reference variable
& → Reference operator
```

---

# 🔹 Reference Does Not Create a New Variable

Consider:

```cpp
int a = 10;

int &b = a;
```

Think of it like:

```text
        Same Memory
       ┌───────────┐
       │    10     │
       └───────────┘
         ↑       ↑
         │       │
         a       b
```

Both `a` and `b` refer to the **same memory location**.

---

# 🔹 Updating a Reference

If we change the reference, the original variable also changes.

```cpp
#include<iostream>
using namespace std;

int main() {

    int a = 10;

    int &b = a;

    b = 20;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
```

### Output

```text
a = 20
b = 20
```

Why?

Because `a` and `b` refer to the same variable.

---

# 🔹 Updating the Original Variable

The reverse is also true.

If we change the original variable, the reference also sees the changed value.

```cpp
#include<iostream>
using namespace std;

int main() {

    int a = 10;

    int &b = a;

    a = 50;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
```

### Output

```text
a = 50
b = 50
```

---

# 🔹 Reference with String

References can also be used with strings.

```cpp
#include<iostream>
using namespace std;

int main() {

    string food = "Pizza";

    string &meal = food;

    cout << food << endl;
    cout << meal << endl;

    return 0;
}
```

### Output

```text
Pizza
Pizza
```

Now change the reference:

```cpp
meal = "Burger";
```

Then:

```text
food = Burger
meal = Burger
```

---

# 🔹 Reference and Memory Address

We can verify that both variables refer to the same memory location.

```cpp
#include<iostream>
using namespace std;

int main() {

    int a = 10;

    int &b = a;

    cout << &a << endl;
    cout << &b << endl;

    return 0;
}
```

The addresses will be the same.

Example:

```text
0x61ff08
0x61ff08
```

The exact address will be different on different systems.

### Important

```cpp
&a
```

means:

> Address of `a`

And:

```cpp
&b
```

means:

> Address of `b`

Since `b` is a reference to `a`, both give the same address.

---

# 🔹 Reference vs Normal Variable

Consider:

```cpp
int a = 10;

int b = a;
```

Here `b` is a **new variable**.

```text
a = 10
b = 10
```

Changing `b`:

```cpp
b = 20;
```

does not change `a`.

```text
a = 10
b = 20
```

---

Now consider:

```cpp
int a = 10;

int &b = a;
```

Here `b` is a **reference**.

```text
a = 10
b = 10
```

Changing `b`:

```cpp
b = 20;
```

changes `a` too:

```text
a = 20
b = 20
```

---

# 🔥 Normal Variable vs Reference

| Normal Variable                     | Reference                     |
| ----------------------------------- | ----------------------------- |
| Creates a separate variable         | Alias of an existing variable |
| Has its own memory                  | Refers to same memory         |
| Copy of value can be stored         | No separate value is created  |
| Changing it doesn't affect original | Changing it affects original  |
| Example: `int b = a`                | Example: `int &b = a`         |

---

# 🔹 Reference with Functions

One of the most important uses of references is **passing variables by reference to functions**.

### Without Reference

```cpp
#include<iostream>
using namespace std;

void change(int x) {

    x = 100;
}

int main() {

    int a = 10;

    change(a);

    cout << a;

    return 0;
}
```

### Output

```text
10
```

Why?

Because `x` receives a **copy** of `a`.

```text
a = 10

   ↓ copy

x = 10
```

Changing `x` does not change `a`.

---

# 🔥 Pass by Reference

Now use `&`:

```cpp
#include<iostream>
using namespace std;

void change(int &x) {

    x = 100;
}

int main() {

    int a = 10;

    change(a);

    cout << a;

    return 0;
}
```

### Output

```text
100
```

Why?

Because:

```cpp
int &x
```

means `x` refers to the original variable.

```text
a
↓
x
```

Both refer to the same variable.

---

# 🔹 Easy Way to Understand Pass by Reference

Suppose:

```cpp
int a = 10;

change(a);
```

Function:

```cpp
void change(int &x) {
    x = 100;
}
```

Think:

```text
main()

a = 10
│
│
└──────────────┐
               ↓
          function
               ↓
             x = 100
               │
               ↓
           a becomes 100
```

Because `x` is a reference to `a`.

---

# 🔹 Swapping Two Numbers Using References

References are very useful for swapping values.

```cpp
#include<iostream>
using namespace std;

void swapNumbers(int &a, int &b) {

    int temp = a;

    a = b;

    b = temp;
}

int main() {

    int x = 10;
    int y = 20;

    cout << "Before Swap:" << endl;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swapNumbers(x, y);

    cout << "\nAfter Swap:" << endl;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
```

### Output

```text
Before Swap:
x = 10
y = 20

After Swap:
x = 20
y = 10
```

---

# 🔹 Why Do We Need References?

References are commonly used when we want a function to **modify the original variable**.

Example:

```cpp
void increase(int &x) {

    x++;
}
```

Calling:

```cpp
int a = 10;

increase(a);
```

Now:

```text
a = 11
```

---

# 🔹 Reference with Multiple Variables

We can create references for multiple variables.

```cpp
int a = 10;
int b = 20;

int &x = a;
int &y = b;
```

Now:

```text
x → a
y → b
```

Example:

```cpp
x = 100;
y = 200;
```

Now:

```text
a = 100
b = 200
```

---

# 🔹 Reference Must Be Initialized

A reference must be initialized when it is created.

Correct:

```cpp
int a = 10;

int &b = a;
```

Incorrect:

```cpp
int &b;   // ❌ Error
```

A reference must refer to something when it is declared.

---

# 🔹 A Reference Cannot Be Reassigned

Consider:

```cpp
int a = 10;
int b = 20;

int &ref = a;
```

Now:

```cpp
ref = b;
```

This does **not** make `ref` refer to `b`.

Instead, it copies the value of `b` into `a`.

After:

```cpp
ref = b;
```

we get:

```text
a = 20
b = 20
```

`ref` is still a reference to `a`.

---

# 🔹 Reference with `const`

We can create a constant reference.

```cpp
int a = 10;

const int &ref = a;
```

Now we can read the value:

```cpp
cout << ref;
```

But we cannot modify it through the reference:

```cpp
ref = 20;   // ❌ Error
```

---

# 🔹 `const` Reference with Function

A common use is:

```cpp
void print(const int &x) {

    cout << x;
}
```

This means:

> Pass by reference, but don't allow the function to modify the original value through `x`.

---

# 🔹 Reference vs Pointer

References and pointers can both be used to work with existing data, but they are different.

### Reference

```cpp
int a = 10;

int &ref = a;
```

### Pointer

```cpp
int a = 10;

int *ptr = &a;
```

### Basic Difference

| Reference                   | Pointer                                |
| --------------------------- | -------------------------------------- |
| Alias for a variable        | Stores an address                      |
| Uses `&` during declaration | Uses `*` during declaration            |
| Access directly using name  | Usually access using `*`               |
| Must be initialized         | Can be declared without initialization |
| Cannot normally be reseated | Can point to different objects         |
| Cannot be `nullptr`         | Can be `nullptr`                       |

---

# 🔹 Reference Example

```cpp
int a = 10;

int &ref = a;

cout << ref;
```

Output:

```text
10
```

---

# 🔹 Pointer Example

```cpp
int a = 10;

int *ptr = &a;

cout << *ptr;
```

Output:

```text
10
```

Here:

```cpp
*ptr
```

means:

> Value stored at the address contained in `ptr`.

---

# 🔥 Important Difference

Remember:

```cpp
int &ref = a;
```

means:

> `ref` is another name for `a`.

While:

```cpp
int *ptr = &a;
```

means:

> `ptr` stores the memory address of `a`.

---

# 🔹 Reference with Arrays

References can also be used with arrays, although array references are a more advanced topic.

Example:

```cpp
int arr[3] = {10, 20, 30};

int (&ref)[3] = arr;

cout << ref[0];
```

Output:

```text
10
```

---

# 🔹 Reference as a Return Type

A function can also return a reference.

Example:

```cpp
int& getValue(int &x) {

    return x;
}
```

Usage:

```cpp
int a = 10;

getValue(a) = 50;

cout << a;
```

Output:

```text
50
```

Because the function returns a reference to `a`.

> Returning references requires care: never return a reference to a local variable that has gone out of scope.

---

# ⭐ Most Important Example

This example combines **function + parameter + reference + return value**:

```cpp
#include<iostream>
using namespace std;

void increase(int &x) {

    x = x + 1;
}

int main() {

    int num = 10;

    cout << "Before: " << num << endl;

    increase(num);

    cout << "After: " << num << endl;

    return 0;
}
```

### Output

```text
Before: 10
After: 11
```

### Why did `num` change?

Because:

```cpp
void increase(int &x)
```

uses a reference.

Therefore:

```text
num
 ↓
 x
```

Both refer to the same variable.

---

# 🧠 Quick Revision

```text
Reference
    ↓
Alias of an existing variable
    ↓
Uses &
    ↓
Shares the same memory location
    ↓
Changing reference changes original
```

### Basic Syntax

```cpp
int a = 10;

int &ref = a;
```

### Change Reference

```cpp
ref = 20;
```

Result:

```text
a = 20
ref = 20
```

### Pass by Reference

```cpp
void change(int &x) {

    x = 100;
}
```

### Function Call

```cpp
int a = 10;

change(a);
```

Result:

```text
a = 100
```

---

# 🎯 Practice Questions

### Beginner

1. Create a reference for an integer variable.
2. Create a reference for a string.
3. Change the original variable using the reference.
4. Change the reference and observe the original variable.
5. Print the addresses of a variable and its reference.

### Intermediate

6. Create a function that doubles a number using pass by reference.

```text
Input: 10
Output: 20
```

7. Create a function that swaps two numbers using references.

8. Create a function that increases a number by 10.

9. Create a function that decreases a number by 5.

10. Create a function that changes two variables using references.

### Challenge

11. Write a function that takes three numbers by reference and sorts them in ascending order.

12. Write a function that takes an integer by reference and reverses its digits.

13. Write a function that takes two numbers by reference and returns their sum.

---

# ⭐ Key Takeaways

> **1. Reference is an alias (another name) for an existing variable.**

> **2. References are created using `&`.**

> **3. A reference must be initialized when it is declared.**

> **4. Reference and original variable refer to the same memory location.**

> **5. Changing a reference changes the original variable.**

> **6. Changing the original variable also changes what the reference sees.**

> **7. References are heavily used in pass-by-reference functions.**

> **8. `int &x` means `x` is a reference to an integer.**

> **9. A reference cannot normally be made to refer to another variable after initialization.**

> **10. `const` references allow reading without modifying through the reference.**
