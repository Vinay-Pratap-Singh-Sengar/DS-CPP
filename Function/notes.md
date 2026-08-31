# C++ Functions

## 📌 What is a Function?

A **function** is a block of code that performs a specific task.

Instead of writing the same code again and again, we can write the code inside a function and **call the function whenever we need it**.

### Real-Life Example

Think about a **washing machine**.

You press the `Start` button → the machine performs many operations internally.

Similarly:

```cpp
startMachine();
```

The function performs the required task for us.

---

# Why Do We Use Functions?

Functions provide several advantages:

* ✅ Code reusability
* ✅ Reduces code duplication
* ✅ Makes code easier to understand
* ✅ Makes debugging easier
* ✅ Makes large programs easier to manage
* ✅ Divides a large program into smaller tasks

---

# Basic Syntax of a Function

```cpp
returnType functionName(parameters) {
    // code
}
```

### Example

```cpp
void hello() {
    cout << "Hello Students";
}
```

Here:

| Part    | Meaning       |
| ------- | ------------- |
| `void`  | Return type   |
| `hello` | Function name |
| `()`    | Parameters    |
| `{ }`   | Function body |

---

# Example 1: Function Without Parameter and Without Return Value

```cpp
#include<iostream>
using namespace std;

void sum() {
    int a = 10;
    int b = 20;

    int result = a + b;

    cout << "Sum is : " << result << endl;
}

int main() {

    sum();

    return 0;
}
```

### Output

```text
Sum is : 30
```

### How does it work?

Program execution starts from:

```cpp
int main()
```

Then:

```cpp
sum();
```

calls the `sum()` function.

The function executes:

```cpp
int a = 10;
int b = 20;

int result = a + b;

cout << "Sum is : " << result << endl;
```

---

# Function Calling

Calling a function means **asking the function to execute**.

```cpp
sum();
```

Example:

```cpp
void hello() {
    cout << "Hello";
}

int main() {

    hello();

    return 0;
}
```

Here:

```cpp
hello();
```

is the **function call**.

---

# Function Declaration / Prototype

A function can be declared before `main()` and defined later.

```cpp
#include<iostream>
using namespace std;

void sum();

int main() {

    sum();

    return 0;
}

void sum() {

    int a = 10;
    int b = 20;

    cout << a + b;
}
```

Here:

```cpp
void sum();
```

is called a **function declaration** or **function prototype**.

It tells the compiler:

> A function named `sum` exists and it does not return anything.

---

# Function Definition

The actual implementation of the function is called the **function definition**.

```cpp
void sum() {

    int a = 10;
    int b = 20;

    cout << a + b;
}
```

---

# Function Declaration vs Definition vs Calling

```cpp
void sum();       // Declaration

void sum() {      // Definition
    cout << "Hello";
}

int main() {

    sum();        // Calling

}
```

### Remember

```text
Declaration → Tells compiler about function

Definition  → Contains actual code

Calling     → Executes the function
```

---

# Function with Parameters

Sometimes we want to send data to a function.

For example:

```cpp
int sub(int x, int y)
```

Here `x` and `y` are called **parameters**.

### Example

```cpp
#include<iostream>
using namespace std;

int sub(int x, int y) {

    int result = x - y;

    return result;
}

int main() {

    cout << sub(30, 15);

    return 0;
}
```

### Output

```text
15
```

---

# Parameters and Arguments

Consider:

```cpp
sub(30, 15);
```

Here:

```text
30 and 15 → Arguments
```

And:

```cpp
int sub(int x, int y)
```

Here:

```text
x and y → Parameters
```

### Simple Rule

```text
Function definition → Parameters

Function call → Arguments
```

Example:

```cpp
int sum(int a, int b) {
    return a + b;
}

sum(10, 20);
```

```text
a, b     → Parameters
10, 20   → Arguments
```

---

# Function with Return Value

A function can return a value to the calling function.

Example:

```cpp
int sum(int a, int b) {

    return a + b;
}
```

Calling:

```cpp
int result = sum(10, 20);
```

Now:

```text
result = 30
```

---

# `return` Keyword

The `return` keyword is used to send a value back from a function.

Example:

```cpp
int sum(int a, int b) {

    return a + b;
}
```

When we write:

```cpp
sum(10, 20);
```

the function calculates:

```text
10 + 20 = 30
```

and returns:

```text
30
```

---

# Complete Example

This is the example used in class:

```cpp
#include<iostream>
using namespace std;

void sum();
int sub(int x, int y);

void sum() {

    int a = 10;
    int b = 20;

    int sum = a + b;

    cout << "Sum is : " << sum << endl;
}

int sub(int x, int y) {

    int sub = x - y;

    return sub;
}

int main() {

    sum();

    cout << "Subtraction is : " << sub(30, 15) << endl;

    return 0;
}
```

### Output

```text
Sum is : 30
Subtraction is : 15
```

---

# Types of Functions

We commonly classify functions based on:

1. Parameters
2. Return value

There are four basic combinations.

---

## 1. No Parameter + No Return Value

```cpp
void sum() {

    int a = 10;
    int b = 20;

    cout << a + b;
}
```

Calling:

```cpp
sum();
```

---

## 2. Parameter + No Return Value

```cpp
void sum(int a, int b) {

    cout << a + b;
}
```

Calling:

```cpp
sum(10, 20);
```

---

## 3. No Parameter + Return Value

```cpp
int sum() {

    int a = 10;
    int b = 20;

    return a + b;
}
```

Calling:

```cpp
int result = sum();
```

---

## 4. Parameter + Return Value

```cpp
int sum(int a, int b) {

    return a + b;
}
```

Calling:

```cpp
int result = sum(10, 20);
```

---

# Quick Comparison

| Type   | Parameter | Return |
| ------ | --------- | ------ |
| Type 1 | ❌ No      | ❌ No   |
| Type 2 | ✅ Yes     | ❌ No   |
| Type 3 | ❌ No      | ✅ Yes  |
| Type 4 | ✅ Yes     | ✅ Yes  |

The most commonly used type is:

```cpp
int sum(int a, int b) {
    return a + b;
}
```

---

# `void` Function

`void` means the function **does not return any value**.

Example:

```cpp
void hello() {

    cout << "Hello";
}
```

We cannot do:

```cpp
int x = hello();   // ❌
```

because `hello()` does not return a value.

---

# Function Returning `int`

If the return type is `int`, the function should return an integer value.

```cpp
int sum(int a, int b) {

    return a + b;
}
```

Correct:

```cpp
int result = sum(10, 20);
```

---

# Function Returning `double`

```cpp
double divide(double a, double b) {

    return a / b;
}
```

Calling:

```cpp
double result = divide(10, 3);
```

---

# Function Returning `char`

```cpp
char getGrade() {

    return 'A';
}
```

Calling:

```cpp
char grade = getGrade();
```

---

# Function Returning `string`

```cpp
string getName() {

    return "Vinay";
}
```

Calling:

```cpp
string name = getName();
```

---

# Pass by Value

By default, C++ passes arguments **by value**.

That means the function receives a **copy** of the variable.

Example:

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

Because `x` is a copy of `a`.

```text
a = 10

     ↓ copy

x = 10
```

Changing `x` does not change `a`.

---

# Pass by Reference

Using `&`, we can pass the original variable.

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

Here:

```cpp
int &x
```

means `x` refers to the original variable.

---

# Pass by Value vs Pass by Reference

### Pass by Value

```cpp
void change(int x)
```

```text
Original variable
      ↓
     copy
      ↓
   function
```

Changes inside function do not affect original variable.

### Pass by Reference

```cpp
void change(int &x)
```

```text
Original variable
      ↓
    function
```

Changes inside function affect the original variable.

---

# Function with Multiple Parameters

A function can have multiple parameters.

```cpp
int sum(int a, int b, int c) {

    return a + b + c;
}
```

Calling:

```cpp
cout << sum(10, 20, 30);
```

Output:

```text
60
```

---

# Default Arguments

We can provide a default value to a parameter.

```cpp
#include<iostream>
using namespace std;

void hello(string name = "Student") {

    cout << "Hello " << name;
}

int main() {

    hello();

    return 0;
}
```

Output:

```text
Hello Student
```

We can also pass our own value:

```cpp
hello("Vinay");
```

Output:

```text
Hello Vinay
```

---

# Function Overloading

Function overloading means having **multiple functions with the same name but different parameters**.

Example:

```cpp
int sum(int a, int b) {

    return a + b;
}

int sum(int a, int b, int c) {

    return a + b + c;
}
```

Now:

```cpp
cout << sum(10, 20);
```

and:

```cpp
cout << sum(10, 20, 30);
```

Both functions have the same name:

```cpp
sum()
```

but different parameters.

---

# Function Overloading Based on Data Type

```cpp
int add(int a, int b) {

    return a + b;
}

double add(double a, double b) {

    return a + b;
}
```

Calling:

```cpp
cout << add(10, 20);
```

uses:

```cpp
int add(int, int)
```

Calling:

```cpp
cout << add(10.5, 20.5);
```

uses:

```cpp
double add(double, double)
```

---

# Important Rule of Function Overloading

Changing only the return type is **not enough**.

❌ Invalid:

```cpp
int sum(int a, int b) {
    return a + b;
}

double sum(int a, int b) {
    return a + b;
}
```

The parameters are exactly the same.

---

# Local Variables in Functions

Variables declared inside a function are generally **local to that function**.

Example:

```cpp
void test() {

    int x = 10;
}

int main() {

    cout << x;   // ❌ Error

}
```

`x` belongs to `test()`.

---

# Global Variables

A variable declared outside all functions is called a **global variable**.

```cpp
#include<iostream>
using namespace std;

int x = 10;

void test() {

    cout << x;
}

int main() {

    test();

    return 0;
}
```

Output:

```text
10
```

---

# Recursive Function

A function calling itself is called **recursion**.

Example:

```cpp
#include<iostream>
using namespace std;

void count(int n) {

    if(n == 0)
        return;

    cout << n << endl;

    count(n - 1);
}

int main() {

    count(5);

    return 0;
}
```

Output:

```text
5
4
3
2
1
```

### Important

Every recursive function should have a **base condition**.

```cpp
if(n == 0)
    return;
```

Without a proper stopping condition, recursion can continue indefinitely.

---

# Inline Function

An inline function is a function for which the compiler may attempt to replace the function call with the function's code.

Example:

```cpp
inline int square(int x) {

    return x * x;
}
```

Calling:

```cpp
cout << square(5);
```

Output:

```text
25
```

> `inline` is a request to the compiler, not a guarantee that the function will actually be inlined.

---

# `const` Parameter

If we don't want a function to modify a value, we can use `const`.

```cpp
void print(const int &x) {

    cout << x;
}
```

This is especially useful when passing larger objects by reference.

---

# Function Calling Another Function

One function can call another function.

```cpp
#include<iostream>
using namespace std;

void message() {

    cout << "Hello Students" << endl;
}

void display() {

    message();

    cout << "Welcome to C++";
}

int main() {

    display();

    return 0;
}
```

Output:

```text
Hello Students
Welcome to C++
```

---

# `main()` is Also a Function

You have already seen:

```cpp
int main()
```

`main()` is the **entry point of a C++ program**.

Program execution starts from:

```cpp
main()
```

Example:

```cpp
int main() {

    cout << "Hello";

    return 0;
}
```

---

# Return 0 from main()

```cpp
return 0;
```

generally indicates that the program completed successfully.

Example:

```cpp
int main() {

    cout << "Hello";

    return 0;
}
```

---

# Practical Example: Calculator Using Functions

Functions make it easy to divide a program into smaller tasks.

```cpp
#include<iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {

    cout << "Addition : " << add(20, 10) << endl;
    cout << "Subtraction : " << subtract(20, 10) << endl;
    cout << "Multiplication : " << multiply(20, 10) << endl;
    cout << "Division : " << divide(20, 10) << endl;

    return 0;
}
```

Output:

```text
Addition : 30
Subtraction : 10
Multiplication : 200
Division : 2
```

---

# Functions and Code Reusability

Without function:

```cpp
cout << 10 + 20 << endl;
cout << 30 + 40 << endl;
cout << 50 + 60 << endl;
```

With function:

```cpp
int sum(int a, int b) {

    return a + b;
}
```

Now we can reuse it:

```cpp
cout << sum(10, 20) << endl;
cout << sum(30, 40) << endl;
cout << sum(50, 60) << endl;
```

This is one of the biggest advantages of functions.

---

# Function Execution Flow

Consider:

```cpp
int sum(int a, int b) {

    return a + b;
}

int main() {

    int result = sum(10, 20);

    cout << result;

    return 0;
}
```

Execution:

```text
main()
   ↓
sum(10, 20)
   ↓
a = 10
b = 20
   ↓
a + b
   ↓
30
   ↓
return 30
   ↓
result = 30
   ↓
cout << result
```

---

# Important Terminology

| Term                 | Meaning                            |
| -------------------- | ---------------------------------- |
| Function             | Block of code that performs a task |
| Function Name        | Name used to identify the function |
| Parameter            | Variable defined in function       |
| Argument             | Actual value passed to function    |
| Return Type          | Type of value returned             |
| Function Call        | Calling/executing a function       |
| Function Declaration | Tells compiler about function      |
| Function Definition  | Actual implementation              |
| `void`               | No return value                    |
| `return`             | Sends value back                   |

---

# Common Mistakes

## 1. Forgetting Function Call

Writing:

```cpp
void hello() {
    cout << "Hello";
}
```

does not execute the function.

You need:

```cpp
hello();
```

---

## 2. Wrong Return Type

```cpp
int sum(int a, int b) {

    cout << a + b;
}
```

If the function is declared as `int`, it should return an integer value.

Correct:

```cpp
int sum(int a, int b) {

    return a + b;
}
```

---

## 3. Passing Wrong Number of Arguments

```cpp
int sum(int a, int b) {
    return a + b;
}
```

Wrong:

```cpp
sum(10);
```

Correct:

```cpp
sum(10, 20);
```

---

## 4. Parameter Type Mismatch

```cpp
int sum(int a, int b) {
    return a + b;
}
```

Normally call it with compatible values:

```cpp
sum(10, 20);
```

---

# Practice Questions

### Basic

1. Create a function to print `"Hello World"`.
2. Create a function to print your name.
3. Create a function to calculate the sum of two numbers.
4. Create a function to calculate subtraction.
5. Create a function to calculate multiplication.
6. Create a function to calculate division.
7. Create a function to calculate the square of a number.
8. Create a function to calculate the cube of a number.

### Intermediate

9. Create a function to check whether a number is even or odd.

```text
Input: 10
Output: Even
```

10. Create a function to find the maximum of two numbers.

11. Create a function to find the maximum of three numbers.

12. Create a function to check whether a number is positive, negative, or zero.

13. Create a function to calculate factorial.

```text
Input: 5
Output: 120
```

14. Create a function to check whether a number is prime.

15. Create a function to reverse a number.

16. Create a function to check whether a number is palindrome.

17. Create a function to calculate the sum of digits.

```text
Input: 1234
Output: 10
```

18. Create a function to count the number of digits.

19. Create a function to calculate the power of a number.

20. Create a calculator using separate functions for:

```text
+
-
*
/
```

---

# Interview Questions

### Basic Questions

1. What is a function in C++?
2. Why do we use functions?
3. What is function declaration?
4. What is function definition?
5. What is function calling?
6. What is a function prototype?
7. What are parameters?
8. What are arguments?
9. What is a return type?
10. What is `void`?
11. What is the purpose of `return`?
12. Can a function return multiple values?
13. Can a function have multiple parameters?
14. Can one function call another function?
15. Is `main()` a function?

### Important Interview Questions

16. What is pass by value?
17. What is pass by reference?
18. Difference between pass by value and pass by reference?
19. What is function overloading?
20. What are default arguments?
21. Can we overload a function by changing only its return type?
22. What is recursion?
23. What is an inline function?
24. What is a global variable?
25. What is a local variable?
26. What is the difference between declaration and definition?
27. What happens when a function is called?
28. Why do we use function prototypes?
29. Can a function return a reference?
30. What is the difference between a function and a method?

---

# Quick Revision

```text
Function
   ↓
Reusable block of code
   ↓
Can accept input
   ↓
Can perform operation
   ↓
Can return output
```

### Basic Function

```cpp
void hello() {
    cout << "Hello";
}
```

### Function with Parameters

```cpp
void hello(string name) {
    cout << "Hello " << name;
}
```

### Function with Return

```cpp
int sum(int a, int b) {
    return a + b;
}
```

### Function Call

```cpp
sum(10, 20);
```

### Function Prototype

```cpp
int sum(int, int);
```

### Pass by Reference

```cpp
void change(int &x) {
    x = 100;
}
```

### Function Overloading

```cpp
int sum(int a, int b);

int sum(int a, int b, int c);
```

### Recursion

```cpp
void test(int n) {

    if(n == 0)
        return;

    test(n - 1);
}
```

---

# ⭐ Key Takeaways

> **1. Function = Reusable block of code**

> **2. Parameters = Variables received by the function**

> **3. Arguments = Actual values passed to the function**

> **4. `void` = Function does not return a value**

> **5. `return` = Sends a value back**

> **6. Function declaration = Tells compiler about the function**

> **7. Function definition = Actual implementation**

> **8. Function call = Executes the function**

> **9. Pass by value = Copy is passed**

> **10. Pass by reference = Original variable is accessed**

> **11. Function overloading = Same function name, different parameters**

> **12. Recursion = Function calling itself**
