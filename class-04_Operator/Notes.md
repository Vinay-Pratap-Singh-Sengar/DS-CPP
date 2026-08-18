# C++ Operators and Operator Precedence

This module introduces **Operators in C++**, their different types, and **Operator Precedence & Associativity**.

The goal is to understand not only the syntax of operators but also **how C++ evaluates complex expressions**.

---

## 1. What is an Operator?

An **operator** is a symbol that tells the compiler to perform a particular operation.

### Example

```cpp
int a = 10;
int b = 5;

int result = a + b;
```

Here:

* `+` → Operator
* `a` and `b` → Operands
* `a + b` → Expression
* `15` → Result

### Basic Structure

```text
Operand  Operator  Operand
   10       +          5
              ↓
             15
```

---

# 2. Types of Operators in C++

C++ provides several categories of operators.

## Operator Categories

| Category              | Operators               |               |    |
| --------------------- | ----------------------- | ------------- | -- |
| Arithmetic            | `+  -  *  /  %`         |               |    |
| Relational            | `==  !=  >  <  >=  <=`  |               |    |
| Logical               | `&&                     |               | !` |
| Assignment            | `=  +=  -=  *=  /=  %=` |               |    |
| Increment / Decrement | `++  --`                |               |    |
| Bitwise               | `&                      | ^  ~  <<  >>` |    |
| Conditional           | `?:`                    |               |    |
| Size                  | `sizeof`                |               |    |
| Comma                 | `,`                     |               |    |

---

# 3. Arithmetic Operators

Arithmetic operators are used for mathematical calculations.

| Operator | Meaning        | Example |
| -------- | -------------- | ------- |
| `+`      | Addition       | `a + b` |
| `-`      | Subtraction    | `a - b` |
| `*`      | Multiplication | `a * b` |
| `/`      | Division       | `a / b` |
| `%`      | Modulus        | `a % b` |

### Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    return 0;
}
```

### Output

```text
13
7
30
3
1
```

> Remember: When both operands are integers, `/` performs integer division.

---

# 4. Relational Operators

Relational operators compare two values.

The result is generally:

```text
true  → 1
false → 0
```

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |

### Example

```cpp
int a = 10;
int b = 20;

cout << (a < b);
```

Output:

```text
1
```

---

# 5. Logical Operators

Logical operators are mainly used with conditions.

| Operator | Meaning     |   |            |
| -------- | ----------- | - | ---------- |
| `&&`     | Logical AND |   |            |
| `        |             | ` | Logical OR |
| `!`      | Logical NOT |   |            |

### AND `&&`

Both conditions must be true.

```cpp
int age = 25;

cout << (age >= 18 && age <= 60);
```

Output:

```text
1
```

### OR `||`

At least one condition must be true.

```cpp
int age = 15;

cout << (age < 18 || age > 60);
```

Output:

```text
1
```

### NOT `!`

Reverses the result.

```cpp
cout << !(10 > 5);
```

Output:

```text
0
```

---

# 6. Assignment Operators

Assignment operators assign values to variables.

### Basic Assignment

```cpp
int x = 10;
```

### Compound Assignment

```cpp
x += 5;
```

This means:

```cpp
x = x + 5;
```

Similarly:

```cpp
x -= 5;    // x = x - 5
x *= 5;    // x = x * 5
x /= 5;    // x = x / 5
x %= 5;    // x = x % 5
```

---

# 7. Increment and Decrement Operators

These operators increase or decrease a value by `1`.

```cpp
++x;    // Increment
x++;    // Increment

--x;    // Decrement
x--;    // Decrement
```

There are two forms:

### Pre-Increment

```cpp
++x;
```

First increment, then use the value.

### Post-Increment

```cpp
x++;
```

First use the value, then increment.

### Example

```cpp
int x = 5;

cout << ++x;
```

Output:

```text
6
```

---

```cpp
int x = 5;

cout << x++;
```

Output:

```text
5
```

After execution:

```text
x = 6
```

---

# 8. Conditional Operator

The conditional operator is also called the **ternary operator**.

Syntax:

```cpp
condition ? expression1 : expression2;
```

### Example

```cpp
int a = 10;
int b = 20;

int max = (a > b) ? a : b;

cout << max;
```

Output:

```text
20
```

It can be understood as:

```text
If condition is true
        ↓
   expression1

Otherwise
        ↓
   expression2
```

---

# 9. What is Operator Precedence?

When an expression contains multiple operators, C++ needs to decide:

> **Which operator should be evaluated first?**

This is called **Operator Precedence**.

### Example

```cpp
int result = 10 + 5 * 2;
```

A beginner may calculate:

```text
10 + 5 = 15
15 * 2 = 30
```

But C++ does:

```text
5 * 2 = 10
10 + 10 = 20
```

Therefore:

```text
Result = 20
```

Because:

```text
* has higher precedence than +
```

---

# 10. Simple Precedence Rule

For beginner-level expressions, remember:

```text
()
↓
* / %
↓
+ -
↓
< <= > >=
↓
== !=
↓
&&
↓
||
↓
?:
↓
= += -= *= /=
```

Higher in the list means **higher precedence**.

---

# 11. Parentheses Have Highest Priority

Parentheses can change the normal order of evaluation.

### Without parentheses

```cpp
int result = 10 + 5 * 2;
```

Evaluation:

```text
5 * 2 = 10
10 + 10 = 20
```

Result:

```text
20
```

### With parentheses

```cpp
int result = (10 + 5) * 2;
```

Evaluation:

```text
10 + 5 = 15
15 * 2 = 30
```

Result:

```text
30
```

### Important Rule

> **Parentheses can be used to explicitly control the order of evaluation.**

---

# 12. Operator Precedence Examples

## Example 1

```cpp
int result = 10 + 20 * 3;
```

Step 1:

```text
20 * 3 = 60
```

Step 2:

```text
10 + 60 = 70
```

Answer:

```text
70
```

---

## Example 2

```cpp
int result = 20 - 10 / 2;
```

Step 1:

```text
10 / 2 = 5
```

Step 2:

```text
20 - 5 = 15
```

Answer:

```text
15
```

---

## Example 3

```cpp
int result = (20 - 10) / 2;
```

Step 1:

```text
20 - 10 = 10
```

Step 2:

```text
10 / 2 = 5
```

Answer:

```text
5
```

---

# 13. Same Precedence → Associativity

What happens when two operators have the **same precedence**?

Then we use **Associativity**.

For example:

```cpp
20 - 5 + 2
```

`-` and `+` have the same precedence.

They are evaluated from:

```text
Left → Right
```

Therefore:

```text
20 - 5 = 15
15 + 2 = 17
```

Answer:

```text
17
```

---

# 14. Multiplication, Division and Modulus

These operators have the same precedence:

```text
* / %
```

They are evaluated:

```text
Left → Right
```

### Example

```cpp
int result = 20 / 5 * 2;
```

Evaluate from left to right:

```text
20 / 5 = 4
4 * 2 = 8
```

Answer:

```text
8
```

Not:

```text
20 / 10 = 2
```

---

# 15. Assignment Associativity

Assignment operators are evaluated:

```text
Right → Left
```

### Example

```cpp
int a, b, c;

a = b = c = 10;
```

Evaluation:

```text
c = 10
b = c
a = b
```

Finally:

```text
a = 10
b = 10
c = 10
```

---

# 16. Important Precedence Table

The following table is sufficient for most beginner and interview-level expressions.

| Priority | Operators                    | Associativity   |   |              |
| -------- | ---------------------------- | --------------- | - | ------------ |
| Highest  | `()`                         | Left → Right    |   |              |
|          | `++` `--`                    | Depends on form |   |              |
|          | `*` `/` `%`                  | Left → Right    |   |              |
|          | `+` `-`                      | Left → Right    |   |              |
|          | `<` `<=` `>` `>=`            | Left → Right    |   |              |
|          | `==` `!=`                    | Left → Right    |   |              |
|          | `&&`                         | Left → Right    |   |              |
|          | `                            |                 | ` | Left → Right |
|          | `?:`                         | Right → Left    |   |              |
| Lowest   | `=` `+=` `-=` `*=` `/=` `%=` | Right → Left    |   |              |

> This is a simplified teaching table. C++ has additional operators and more detailed precedence levels.

---

# 17. How to Solve Any Expression

Teach students to follow these steps:

### Step 1: Look for parentheses

```cpp
()
```

### Step 2: Look for unary operators

```cpp
++ -- ! + -
```

### Step 3: Solve

```cpp
* / %
```

from left to right.

### Step 4: Solve

```cpp
+ -
```

from left to right.

### Step 5: Solve relational operators

```cpp
< <= > >= == !=
```

### Step 6: Solve logical operators

```cpp
&&
||
```

### Step 7: Solve assignment

```cpp
= += -= *= /= %=
```

---

# 18. Example: Complete Expression

Consider:

```cpp
int result = 10 + 5 * 2 > 15 && 20 > 10;
```

### Step 1: Multiplication

```text
5 * 2 = 10
```

Expression becomes:

```cpp
10 + 10 > 15 && 20 > 10
```

### Step 2: Addition

```text
10 + 10 = 20
```

Expression:

```cpp
20 > 15 && 20 > 10
```

### Step 3: Relational operators

```text
20 > 15 → true
20 > 10 → true
```

Expression:

```cpp
true && true
```

### Step 4: Logical AND

```text
true && true → true
```

Therefore:

```text
Result = 1
```

---

# 19. A Very Important Interview Concept

Consider:

```cpp
int a = 5;

int result = a++ + ++a;
```

Students should **not** assume every expression involving `++` can be evaluated safely just by memorizing precedence.

Expressions that modify the same variable multiple times in one expression can lead to **undefined behavior** depending on the exact C++ expression and sequencing rules.

### Teaching Rule

Prefer:

```cpp
a++;
++a;
```

instead of writing complicated expressions such as:

```cpp
a++ + ++a
```

> Operator precedence tells us which operators bind more strongly. It does **not** mean every part of an expression is evaluated in the exact order suggested by the precedence table.

---

# 20. Precedence vs Associativity

These two concepts are different.

### Precedence

Answers:

> Which operator has higher priority?

Example:

```cpp
10 + 5 * 2
```

`*` has higher precedence than `+`.

---

### Associativity

Answers:

> If operators have the same precedence, in which direction are they grouped?

Example:

```cpp
20 - 5 + 2
```

Both `-` and `+` have the same precedence.

They associate:

```text
Left → Right
```

So:

```text
(20 - 5) + 2
```

---

# 21. Precedence ≠ Evaluation Order

This is an important concept for students.

**Precedence** determines how an expression is grouped.

It does not universally specify the runtime order in which every operand is evaluated.

For example:

```cpp
f() + g()
```

Do not teach students that precedence means:

```text
f() always executes before g()
```

Precedence and evaluation order are separate concepts.

---

# 22. Practice Programs

Students should solve these without immediately looking at the answer.

## Program 1

```cpp
#include <iostream>
using namespace std;

int main()
{
    int result = 10 + 5 * 2;

    cout << result;

    return 0;
}
```

Predict the output.

---

## Program 2

```cpp
int result = 20 - 10 / 2;
```

Predict the output.

---

## Program 3

```cpp
int result = (20 - 10) / 2;
```

Predict the output.

---

## Program 4

```cpp
int result = 10 + 20 / 5 * 2;
```

Predict the output.

---

## Program 5

```cpp
int result = 10 > 5 && 20 > 10;
```

Predict the output.

---

## Program 6

```cpp
int result = 10 + 5 > 20 || 10 < 15;
```

Predict the output.

---

## Program 7

```cpp
int a = 10;

a += 5 * 2;

cout << a;
```

Predict the output.

---

## Program 8

```cpp
int a = 10;
int b = 20;

int result = a > b ? a : b;

cout << result;
```

Predict the output.

---

# 23. Challenge Questions

Try to solve these using precedence and associativity.

### Question 1

```cpp
int result = 10 + 20 * 3 - 5;
```

### Question 2

```cpp
int result = 100 / 10 * 2 + 5;
```

### Question 3

```cpp
int result = 10 > 5 && 20 < 30;
```

### Question 4

```cpp
int result = 10 + 5 * 2 > 15 && 20 != 10;
```

### Question 5

```cpp
int a = 5;
int b = 10;

int result = a < b ? a + 5 : b - 5;
```

### Question 6

```cpp
int a = 10;
int b = 20;
int c = 30;

int result = a + b * c;
```

---

# 24. Recommended Study Flow

Study this topic in the following order:

```text
Operators
    ↓
Arithmetic Operators
    ↓
Relational Operators
    ↓
Logical Operators
    ↓
Assignment Operators
    ↓
Increment / Decrement
    ↓
Conditional Operator
    ↓
Operator Precedence
    ↓
Associativity
    ↓
Precedence vs Evaluation Order
    ↓
Expression Solving
    ↓
Interview Questions
```

---

# 25. Golden Rules for Students

Remember these rules:

```text
1. Parentheses have very high priority.

2. * / % come before + -.

3. Operators with the same precedence follow associativity.

4. Most arithmetic operators associate Left → Right.

5. Assignment operators associate Right → Left.

6. Precedence tells us how operators are grouped.

7. Precedence does NOT automatically determine the
   evaluation order of every operand.

8. Use parentheses when the intended order is important.

9. Avoid unnecessarily complicated expressions involving
   multiple modifications of the same variable.
```

---

# 26. Quick Revision

```text
Operator
    ↓
Symbol used to perform an operation.

Precedence
    ↓
Determines which operator binds more strongly.

Associativity
    ↓
Determines grouping when operators have the same precedence.
```

### Example

```cpp
10 + 5 * 2
```

Because:

```text
* > +
```

we get:

```text
10 + (5 * 2)
```

Therefore:

```text
20
```

---

# 27. Final Practice Expression

Ask students to solve this on paper before running it:

```cpp
int result = 10 + 20 * 3 - 5 / 5;
```

Students should write the evaluation steps:

```text
Step 1: __________________

Step 2: __________________

Step 3: __________________

Final Answer: ____________
```

Then verify the answer using C++.

---

## Key Takeaway

Do not teach operator precedence as a table to memorize.

Teach students to ask:

```text
1. Are there parentheses?
        ↓
2. Which operators have higher precedence?
        ↓
3. Are there operators with the same precedence?
        ↓
4. What is their associativity?
        ↓
5. What is the final expression?
```

This approach makes complex C++ expressions much easier to understand.
