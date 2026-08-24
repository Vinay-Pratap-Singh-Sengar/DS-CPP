# C++ Conditional Statements

Conditional statements are used in C++ to **make decisions** in a program.

A program can execute different blocks of code depending on whether a condition is **true or false**.

---

## 📚 Table of Contents

1. What are Conditional Statements?
2. Why do we need Conditional Statements?
3. Types of Conditional Statements
4. `if` Statement
5. `if-else` Statement
6. `else-if` Ladder
7. Nested `if`
8. Relational Operators
9. Logical Operators
10. Modulus Operator
11. Character and ASCII Conditions
12. Example 1 – Divisibility
13. Example 2 – Check Digit, Alphabet or Symbol
14. Example 3 – Count Currency Notes
15. Example 4 – Triangle Validity Using Angles
16. Example 5 – Triangle Validity Using Sides
17. Example 6 – Type of Triangle
18. Example 7 – Profit or Loss
19. Example 8 – Percentage and Grade
20. Example 9 – Gross Salary
21. Example 10 – Electricity Bill
22. Character Output-Based Questions
23. Common Mistakes
24. Key Points to Remember
25. Practice Questions

---

# 1. What are Conditional Statements?

A conditional statement allows a program to make a decision.

For example:

```cpp
int age = 20;

if(age >= 18){
    cout << "Eligible to vote";
}
```

Here:

```cpp
age >= 18
```

is the **condition**.

If the condition is `true`, the statement inside the `if` block executes.

### Real-Life Example

Suppose:

> If it is raining, take an umbrella.

In programming:

```cpp
if(raining){
    takeUmbrella();
}
```

---

# 2. Why do we need Conditional Statements?

Without conditional statements, a program cannot make decisions.

For example:

```text
If marks >= 40
    Student passes

Otherwise
    Student fails
```

This can be implemented using:

```cpp
if(marks >= 40){
    cout << "Pass";
}
else{
    cout << "Fail";
}
```

---

# 3. Types of Conditional Statements

C++ mainly provides the following conditional structures:

### 1. `if`

Used when we want to execute code only when a condition is true.

### 2. `if-else`

Used when there are two possible outcomes.

### 3. `else-if` ladder

Used when there are multiple conditions.

### 4. Nested `if`

An `if` statement inside another `if` statement.

---

# 4. `if` Statement

## Syntax

```cpp
if(condition){
    // statements
}
```

### Example

```cpp
#include <iostream>
using namespace std;

int main(){

    int age = 20;

    if(age >= 18){
        cout << "You are eligible to vote";
    }

    return 0;
}
```

### Working

If:

```cpp
age >= 18
```

is `true`, the message will be printed.

If it is `false`, the program simply skips the `if` block.

---

# 5. `if-else` Statement

The `if-else` statement is used when there are **two possible outcomes**.

## Syntax

```cpp
if(condition){
    // if condition is true
}
else{
    // if condition is false
}
```

### Example

```cpp
#include <iostream>
using namespace std;

int main(){

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if(number > 0){
        cout << "Positive number";
    }
    else{
        cout << "Number is not positive";
    }

    return 0;
}
```

---

# 6. `else-if` Ladder

The `else-if` ladder is used when there are **multiple conditions**.

## Syntax

```cpp
if(condition1){

}
else if(condition2){

}
else if(condition3){

}
else{

}
```

The conditions are checked from **top to bottom**.

As soon as a condition becomes true, its block executes and the remaining conditions are skipped.

### Example

```cpp
int marks = 85;

if(marks >= 90){
    cout << "Grade A";
}
else if(marks >= 80){
    cout << "Grade B";
}
else if(marks >= 70){
    cout << "Grade C";
}
else{
    cout << "Grade F";
}
```

Output:

```text
Grade B
```

---

# 7. Nested `if`

A nested `if` means placing one `if` statement inside another `if`.

### Example

```cpp
int age = 20;
bool hasLicense = true;

if(age >= 18){

    if(hasLicense){
        cout << "You can drive";
    }

}
```

Here, the second condition is checked only if:

```cpp
age >= 18
```

is true.

---

# 8. Relational Operators

Relational operators are used to compare values.

| Operator | Meaning                  | Example  |
| -------- | ------------------------ | -------- |
| `>`      | Greater than             | `a > b`  |
| `<`      | Less than                | `a < b`  |
| `>=`     | Greater than or equal to | `a >= b` |
| `<=`     | Less than or equal to    | `a <= b` |
| `==`     | Equal to                 | `a == b` |
| `!=`     | Not equal to             | `a != b` |

### Important

Do not confuse:

```cpp
=
```

with:

```cpp
==
```

`=` is the **assignment operator**.

```cpp
a = 10;
```

`==` is the **comparison operator**.

```cpp
a == 10;
```

---

# 9. Logical Operators

Logical operators are used to combine multiple conditions.

## AND `&&`

Both conditions must be true.

```cpp
if(age >= 18 && age <= 60){
    cout << "Eligible";
}
```

---

## OR `||`

At least one condition must be true.

```cpp
if(day == 6 || day == 7){
    cout << "Weekend";
}
```

---

## NOT `!`

Reverses the result of a condition.

```cpp
if(!isLoggedIn){
    cout << "Please login";
}
```

---

# 10. Modulus Operator `%`

The modulus operator returns the **remainder** after division.

```cpp
10 % 3
```

Result:

```text
1
```

Because:

```text
10 ÷ 3

Quotient = 3
Remainder = 1
```

## Checking Divisibility

If a number is completely divisible by another number, the remainder is `0`.

Therefore:

```cpp
if(a % b == 0){
    cout << "It is divisible";
}
else{
    cout << "It is not divisible";
}
```

### Complete Example

```cpp
#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 5;

    if(a % b == 0){
        cout << "It is divisible" << endl;
    }
    else{
        cout << "It is not divisible";
    }

    return 0;
}
```

Output:

```text
It is divisible
```

---

# 11. Character and ASCII Conditions

Characters are internally represented using numeric ASCII values.

Some important ASCII values are:

| Character | ASCII |
| --------- | ----: |
| `0`       |    48 |
| `1`       |    49 |
| `9`       |    57 |
| `A`       |    65 |
| `Z`       |    90 |
| `a`       |    97 |
| `z`       |   122 |

Therefore:

```text
'0' to '9'   → 48 to 57
'A' to 'Z'   → 65 to 90
'a' to 'z'   → 97 to 122
```

---

# 12. Example – Check Digit, Alphabet or Symbol

We can determine whether a character is:

* Digit
* Uppercase alphabet
* Lowercase alphabet
* Other symbol

### Program

```cpp
#include <iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if((int)ch >= 48 && (int)ch <= 57){
        cout << "Value is digit";
    }
    else if((int)ch >= 65 && (int)ch <= 90){
        cout << "Value is uppercase alphabet";
    }
    else if((int)ch >= 97 && (int)ch <= 122){
        cout << "Value is lowercase alphabet";
    }
    else{
        cout << "Value is other symbol";
    }

    return 0;
}
```

### Example

Input:

```text
A
```

Output:

```text
Value is uppercase alphabet
```

Input:

```text
7
```

Output:

```text
Value is digit
```

Input:

```text
@
```

Output:

```text
Value is other symbol
```

---

# 13. Example – Count Currency Notes

## Problem

Write a program to count the total number of notes in a given amount.

For example:

```text
Amount = 3887
```

Possible notes:

```text
500 → 7
200 → 1
100 → 1
50  → 1
20  → 1
10  → 1
5   → 1
2   → 1
```

### Program

```cpp
#include <iostream>
using namespace std;

int main(){

    int amount = 3887;

    if(amount >= 500){
        int notes = amount / 500;
        amount = amount % 500;
        cout << "500 notes: " << notes << endl;
    }

    if(amount >= 200){
        int notes = amount / 200;
        amount = amount % 200;
        cout << "200 notes: " << notes << endl;
    }

    if(amount >= 100){
        int notes = amount / 100;
        amount = amount % 100;
        cout << "100 notes: " << notes << endl;
    }

    if(amount >= 50){
        int notes = amount / 50;
        amount = amount % 50;
        cout << "50 notes: " << notes << endl;
    }

    if(amount >= 20){
        int notes = amount / 20;
        amount = amount % 20;
        cout << "20 notes: " << notes << endl;
    }

    if(amount >= 10){
        int notes = amount / 10;
        amount = amount % 10;
        cout << "10 notes: " << notes << endl;
    }

    if(amount >= 5){
        int notes = amount / 5;
        amount = amount % 5;
        cout << "5 notes: " << notes << endl;
    }

    if(amount >= 2){
        int notes = amount / 2;
        amount = amount % 2;
        cout << "2 notes: " << notes << endl;
    }

    if(amount >= 1){
        int notes = amount;
        cout << "1 notes: " << notes << endl;
    }

    return 0;
}
```

### Important Logic

For every denomination:

```cpp
notes = amount / denomination;
```

finds the number of notes.

Then:

```cpp
amount = amount % denomination;
```

stores the remaining amount.

---

# 14. Triangle Validity Using Angles

A triangle is valid if the sum of its three angles is exactly:

```text
180°
```

### Program

```cpp
#include <iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Enter three angles: ";
    cin >> a >> b >> c;

    if(a > 0 && b > 0 && c > 0 && a + b + c == 180){
        cout << "Valid triangle";
    }
    else{
        cout << "Invalid triangle";
    }

    return 0;
}
```

### Example

Input:

```text
60 60 60
```

Output:

```text
Valid triangle
```

---

# 15. Triangle Validity Using Sides

A triangle is valid if the sum of any two sides is greater than the third side.

For sides `a`, `b`, and `c`:

```text
a + b > c
a + c > b
b + c > a
```

All three conditions must be true.

### Program

```cpp
#include <iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a){
        cout << "Valid triangle";
    }
    else{
        cout << "Invalid triangle";
    }

    return 0;
}
```

---

# 16. Type of Triangle

A triangle can be:

### Equilateral

All three sides are equal.

```text
a == b && b == c
```

### Isosceles

Any two sides are equal.

```text
a == b
OR
b == c
OR
a == c
```

### Scalene

All three sides are different.

```text
a != b && b != c && a != c
```

### Program

```cpp
#include <iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if(a == b && b == c){
        cout << "Equilateral triangle";
    }
    else if(a == b || b == c || a == c){
        cout << "Isosceles triangle";
    }
    else{
        cout << "Scalene triangle";
    }

    return 0;
}
```

### Better Version

We should first verify that the triangle is valid.

```cpp
if(a + b > c && a + c > b && b + c > a){

    if(a == b && b == c){
        cout << "Equilateral";
    }
    else if(a == b || b == c || a == c){
        cout << "Isosceles";
    }
    else{
        cout << "Scalene";
    }

}
else{
    cout << "Invalid triangle";
}
```

---

# 17. Profit or Loss

Suppose:

```text
Cost Price = CP
Selling Price = SP
```

### Profit

If:

```text
SP > CP
```

then:

```text
Profit = SP - CP
```

### Loss

If:

```text
CP > SP
```

then:

```text
Loss = CP - SP
```

### Program

```cpp
#include <iostream>
using namespace std;

int main(){

    int cp, sp;

    cout << "Enter cost price: ";
    cin >> cp;

    cout << "Enter selling price: ";
    cin >> sp;

    if(sp > cp){
        cout << "Profit = " << sp - cp;
    }
    else if(cp > sp){
        cout << "Loss = " << cp - sp;
    }
    else{
        cout << "No Profit No Loss";
    }

    return 0;
}
```

---

# 18. Percentage and Grade

## Problem

Input marks of five subjects:

* Physics
* Chemistry
* Biology
* Mathematics
* Computer

Calculate percentage and grade.

### Grade Criteria

| Percentage | Grade |
| ---------: | ----- |
|    `>= 90` | A     |
|    `>= 80` | B     |
|    `>= 70` | C     |
|    `>= 60` | D     |
|    `>= 40` | E     |
|     `< 40` | F     |

### Program

```cpp
#include <iostream>
using namespace std;

int main(){

    float physics, chemistry, biology, mathematics, computer;

    cout << "Enter marks of five subjects: ";
    cin >> physics >> chemistry >> biology >> mathematics >> computer;

    float total = physics + chemistry + biology + mathematics + computer;

    float percentage = total / 5;

    cout << "Percentage = " << percentage << "%" << endl;

    if(percentage >= 90){
        cout << "Grade A";
    }
    else if(percentage >= 80){
        cout << "Grade B";
    }
    else if(percentage >= 70){
        cout << "Grade C";
    }
    else if(percentage >= 60){
        cout << "Grade D";
    }
    else if(percentage >= 40){
        cout << "Grade E";
    }
    else{
        cout << "Grade F";
    }

    return 0;
}
```

---

# 19. Gross Salary

## Problem

Input the basic salary of an employee and calculate gross salary.

### Conditions

| Basic Salary | HRA |  DA |
| -----------: | --: | --: |
|   `<= 10000` | 20% | 80% |
|   `<= 20000` | 25% | 90% |
|    `> 20000` | 30% | 95% |

### Formula

```text
Gross Salary = Basic Salary + HRA + DA
```

### Program

```cpp
#include <iostream>
using namespace std;

int main(){

    float salary;

    cout << "Enter the salary amount: ";
    cin >> salary;

    float hra, da, grossSalary;

    if(salary <= 10000){

        hra = salary * 0.20;
        da = salary * 0.80;

    }
    else if(salary <= 20000){

        hra = salary * 0.25;
        da = salary * 0.90;

    }
    else{

        hra = salary * 0.30;
        da = salary * 0.95;

    }

    grossSalary = salary + hra + da;

    cout << "Gross Salary = " << grossSalary << endl;

    return 0;
}
```

### Important

Use `float` or `double` when calculations involve decimal values.

For example:

```cpp
float salary;
```

is preferable to:

```cpp
int salary;
```

because:

```cpp
salary * 0.20
```

can produce a decimal value.

---

# 20. Electricity Bill

## Problem

Calculate the electricity bill according to the units consumed.

### Charges

| Units           |       Rate |
| --------------- | ---------: |
| First 50 units  | ₹0.50/unit |
| Next 100 units  | ₹0.75/unit |
| Next 100 units  | ₹1.20/unit |
| Above 250 units | ₹1.50/unit |

An additional **20% surcharge** is added.

---

## Correct Calculation Logic

### For 0–50 units

```cpp
bill = units * 0.50;
```

### For 51–150 units

```cpp
bill = 50 * 0.50
     + (units - 50) * 0.75;
```

### For 151–250 units

```cpp
bill = 50 * 0.50
     + 100 * 0.75
     + (units - 150) * 1.20;
```

### Above 250 units

```cpp
bill = 50 * 0.50
     + 100 * 0.75
     + 100 * 1.20
     + (units - 250) * 1.50;
```

Then:

```cpp
surcharge = bill * 0.20;
```

and:

```cpp
totalBill = bill + surcharge;
```

### Program

```cpp
#include <iostream>
using namespace std;

int main(){

    int units;
    double bill;

    cout << "Enter electricity units: ";
    cin >> units;

    if(units <= 50){

        bill = units * 0.50;

    }
    else if(units <= 150){

        bill = 50 * 0.50
             + (units - 50) * 0.75;

    }
    else if(units <= 250){

        bill = 50 * 0.50
             + 100 * 0.75
             + (units - 150) * 1.20;

    }
    else{

        bill = 50 * 0.50
             + 100 * 0.75
             + 100 * 1.20
             + (units - 250) * 1.50;

    }

    double surcharge = bill * 0.20;

    double totalBill = bill + surcharge;

    cout << "Electricity Bill = " << totalBill << endl;

    return 0;
}
```

---

# 21. Character Comparison and ASCII

Consider:

```cpp
char a = 'A';
char b = 'a';
```

ASCII values are:

```text
'A' = 65
'a' = 97
```

Therefore:

```cpp
'A' < 'a'
```

is true.

### Example

```cpp
#include <iostream>
using namespace std;

int main(){

    char a = 'A';
    char b = 'a';

    if(a < b)
        cout << "A";
    else
        cout << "B";

    return 0;
}
```

### Output

```text
A
```

---

# 22. Character Output-Based Questions

These questions are important for understanding **ASCII values and implicit type conversion**.

---

## Question 1

What will be printed?

```cpp
#include <iostream>
using namespace std;

int main(){

    char ch = 'A';

    cout << ch + 2;

    return 0;
}
```

### Answer

```text
67
```

### Why?

ASCII value of:

```text
'A' = 65
```

Therefore:

```cpp
ch + 2
```

becomes:

```text
65 + 2 = 67
```

Since arithmetic is performed, the result is an integer.

---

## Question 2

What will be printed?

```cpp
#include <iostream>
using namespace std;

int main(){

    char ch = 'd';

    cout << (char)(ch - 3);

    return 0;
}
```

### Answer

```text
a
```

### Why?

ASCII value:

```text
'd' = 100
```

Therefore:

```text
100 - 3 = 97
```

ASCII `97` represents:

```text
'a'
```

The cast:

```cpp
(char)
```

converts the numeric value back to a character.

---

## Question 3

What will be printed?

```cpp
#include <iostream>
using namespace std;

int main(){

    char a = 'A';
    char b = 'a';

    if(a < b)
        cout << "A";
    else
        cout << "B";

    return 0;
}
```

### Answer

```text
A
```

Because:

```text
'A' = 65
'a' = 97
```

and:

```text
65 < 97
```

is true.

---

# 23. Important Concept – Type Conversion in Character Operations

When a character participates in arithmetic:

```cpp
char ch = 'A';

cout << ch + 2;
```

C++ converts the character to its integer ASCII value for the arithmetic operation.

Therefore:

```text
'A' → 65
65 + 2 → 67
```

But if we explicitly convert the result back:

```cpp
cout << (char)(ch + 2);
```

the output becomes:

```text
C
```

---

# 24. Common Mistakes

## Mistake 1 – Using `=` instead of `==`

Wrong:

```cpp
if(a = 10)
```

Correct:

```cpp
if(a == 10)
```

---

## Mistake 2 – Incorrect `else-if` ordering

Wrong:

```cpp
if(marks >= 40)
    cout << "E";
else if(marks >= 90)
    cout << "A";
```

The `marks >= 90` condition will never be reached for a mark of 90 or above because the first condition is already true.

Correct:

```cpp
if(marks >= 90)
    cout << "A";
else if(marks >= 80)
    cout << "B";
else if(marks >= 70)
    cout << "C";
else if(marks >= 60)
    cout << "D";
else if(marks >= 40)
    cout << "E";
else
    cout << "F";
```

### Rule

In an `else-if` ladder, write conditions from **most restrictive/highest range to lowest range**.

---

# 25. Common Mistake – Integer Data Type for Decimal Calculations

Avoid:

```cpp
int hra = salary * 0.25;
```

when the result may contain decimal values.

Prefer:

```cpp
double hra = salary * 0.25;
```

or:

```cpp
float hra = salary * 0.25;
```

---

# 26. Common Mistake – Incorrect Logical Conditions

Instead of writing complicated nested conditions unnecessarily:

```cpp
if(a > 0){
    if(b > 0){
        if(c > 0){
            cout << "Valid";
        }
    }
}
```

we can often write:

```cpp
if(a > 0 && b > 0 && c > 0){
    cout << "Valid";
}
```

Both can be correct, but logical operators often make the condition easier to understand.

---

# 27. `if` vs `if-else` vs `else-if`

| Statement   | Use                                |
| ----------- | ---------------------------------- |
| `if`        | One condition                      |
| `if-else`   | Two possible outcomes              |
| `else-if`   | Multiple conditions                |
| Nested `if` | Condition inside another condition |

---

# 28. Important Operators Used with Conditions

| Operator | Purpose               |   |    |
| -------- | --------------------- | - | -- |
| `>`      | Greater than          |   |    |
| `<`      | Less than             |   |    |
| `>=`     | Greater than or equal |   |    |
| `<=`     | Less than or equal    |   |    |
| `==`     | Equal                 |   |    |
| `!=`     | Not equal             |   |    |
| `&&`     | AND                   |   |    |
| `        |                       | ` | OR |
| `!`      | NOT                   |   |    |
| `%`      | Remainder             |   |    |

---

# 29. Conditional Statement Problem-Solving Approach

When solving a conditional statement problem, follow these steps:

### Step 1 – Understand the problem

Identify what the program needs to decide.

### Step 2 – Identify the input

Example:

```text
marks
salary
units
angles
sides
```

### Step 3 – Identify the conditions

Ask:

> What conditions are given in the problem?

### Step 4 – Arrange conditions correctly

For an `else-if` ladder, generally start with the highest priority condition.

### Step 5 – Write the formula

For example:

```text
Profit = SP - CP
```

### Step 6 – Write the C++ condition

Example:

```cpp
if(sp > cp)
```

### Step 7 – Test with different inputs

Always test:

* Normal case
* Boundary case
* Minimum value
* Maximum value
* Invalid case

---

# 30. Key Points to Remember

1. Conditional statements are used for decision making.
2. `if` executes code when a condition is true.
3. `if-else` provides two possible paths.
4. `else-if` handles multiple conditions.
5. Nested `if` means an `if` inside another `if`.
6. `==` is used for comparison.
7. `=` is used for assignment.
8. `&&` means AND.
9. `||` means OR.
10. `!` means NOT.
11. `%` returns the remainder.
12. `number % divisor == 0` checks divisibility.
13. Characters have ASCII values.
14. `'A'` has ASCII value `65`.
15. `'a'` has ASCII value `97`.
16. `'0'` has ASCII value `48`.
17. `'9'` has ASCII value `57`.
18. `A-Z` ranges from `65-90`.
19. `a-z` ranges from `97-122`.
20. Use `float` or `double` for decimal calculations.
21. Conditions in an `else-if` ladder should be arranged carefully.
22. Always test boundary conditions.

---

# 31. Practice Questions

## Basic Conditional Statements

### Q1

Write a program to check whether a number is positive, negative or zero.

### Q2

Write a program to check whether a number is even or odd.

### Q3

Write a program to check whether a number is divisible by 5.

### Q4

Write a program to check whether a number is divisible by both 3 and 5.

### Q5

Write a program to find the greater of two numbers.

### Q6

Write a program to find the greatest among three numbers.

### Q7

Write a program to check whether a person is eligible to vote.

### Q8

Write a program to check whether a year is a leap year.

### Q9

Write a program to check whether a character is uppercase or lowercase.

### Q10

Write a program to check whether a character is a digit.

---

# 32. Intermediate Practice Questions

### Q11

Write a program to calculate profit or loss.

### Q12

Write a program to calculate electricity bill based on units consumed.

### Q13

Write a program to calculate gross salary based on basic salary.

### Q14

Write a program to calculate percentage and grade.

### Q15

Write a program to check whether three angles form a valid triangle.

### Q16

Write a program to check whether three sides form a valid triangle.

### Q17

Write a program to determine whether a triangle is:

* Equilateral
* Isosceles
* Scalene

### Q18

Write a program to calculate discount based on purchase amount.

### Q19

Write a program to calculate income tax based on salary slabs.

### Q20

Write a program to check whether a character is:

* Digit
* Uppercase alphabet
* Lowercase alphabet
* Special symbol

---

# 33. Output-Based Practice

Predict the output before running the programs.

### Question 1

```cpp
int a = 10;

if(a > 5)
    cout << "Hello";
else
    cout << "Bye";
```

---

### Question 2

```cpp
int a = 10;

if(a % 2 == 0)
    cout << "Even";
else
    cout << "Odd";
```

---

### Question 3

```cpp
char ch = 'A';

cout << ch + 1;
```

---

### Question 4

```cpp
char ch = 'A';

cout << (char)(ch + 1);
```

---

### Question 5

```cpp
char ch = 'z';

cout << (char)(ch - 2);
```

---

### Question 6

```cpp
int a = 10;
int b = 20;

if(a > b)
    cout << "A";
else
    cout << "B";
```

---

### Question 7

```cpp
int marks = 90;

if(marks >= 40)
    cout << "Pass";
else if(marks >= 90)
    cout << "Excellent";
```

Think carefully about why this does **not** print `Excellent`.

---

# 34. Summary

Conditional statements are one of the most important concepts in programming because they allow a program to **make decisions**.

The most important structures are:

```cpp
if
```

```cpp
if-else
```

```cpp
if-else-if
```

```cpp
nested if
```

Along with conditional statements, you should understand:

```text
Relational Operators
Logical Operators
Modulus Operator
ASCII Values
Type Conversion
```

These concepts form the foundation for more advanced programming topics such as:

```text
Loops
Functions
Arrays
Searching
Sorting
Data Structures
Algorithms
```

---

## 🚀 Recommended Next Topic

After completing conditional statements, the next important topic is:

**Loops in C++**

Recommended order:

```text
Conditional Statements
        ↓
Loops
        ↓
Nested Loops
        ↓
Patterns
        ↓
Functions
        ↓
Arrays
```
