# C++ Switch Statement

## 📌 Introduction

The `switch` statement is a conditional statement in C++.

It is used when we want to execute different blocks of code based on the exact value of a variable or expression.

For example:

- 1 → Monday
- 2 → Tuesday
- 3 → Wednesday
- 4 → Thursday

Instead of writing multiple `if-else-if` conditions, we can use `switch`.

## 📌 Why Do We Use Switch?

Suppose we want to print a day based on a number.

Using `if-else-if`:

```cpp
if(day == 1){
    cout << "Monday";
}
else if(day == 2){
    cout << "Tuesday";
}
else if(day == 3){
    cout << "Wednesday";
}
else if(day == 4){
    cout << "Thursday";
}
The same program using switch is cleaner:

cpp
switch(day){

    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;
}
Simple Rule
Use switch when you have one variable/expression and multiple fixed values.

📌 Syntax of Switch
cpp
switch(expression){

    case value1:
        // statements
        break;

    case value2:
        // statements
        break;

    case value3:
        // statements
        break;

    default:
        // statements
}
📌 Components of Switch
A switch statement mainly contains:

switch

case

break

default

1. switch
The switch keyword is used to start the switch statement.

cpp
switch(number){
    
}
The expression inside switch() is evaluated.

Example:

cpp
int number = 2;

switch(number){

}
Here, the value of number is 2.

2. case
A case represents a possible value of the expression.

cpp
switch(number){

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    case 3:
        cout << "Three";
        break;
}
If:

cpp
number = 2
then:

cpp
case 2:
will execute.

3. break
The break statement is used to stop the execution of the switch.

Example:

cpp
switch(number){

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;
}
If number = 2:

text
Two
will be printed.

After printing Two, break terminates the switch.

4. default
The default block executes when none of the cases match.

Example:

cpp
int number = 10;

switch(number){

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    default:
        cout << "Invalid Number";
}
Output

text
Invalid Number
Important
default is similar to the final else of an if-else-if statement.

📌 How Switch Works
Consider:

cpp
int number = 2;

switch(number){

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    case 3:
        cout << "Three";
        break;

    default:
        cout << "Invalid";
}
Step 1
C++ evaluates:

cpp
number
Value:

text
2
Step 2
It checks the cases:

case 1 → ❌

case 2 → ✅

Step 3
case 2 executes:

cpp
cout << "Two";
Step 4
break executes.

Step 5
The switch statement terminates.

Output

text
Two
📌 Fall-Through
One of the most important concepts in switch is fall-through.

If break is not used, C++ continues executing the next cases.

Example:

cpp
int number = 2;

switch(number){

    case 1:
        cout << "One";

    case 2:
        cout << "Two";

    case 3:
        cout << "Three";
}
Output

text
TwoThree
Why?
Because case 2 matches, but there is no break.
Therefore, execution continues:

text
case 2
   ↓
case 3
📌 Multiple Cases
Multiple cases can execute the same block of code.
This is extremely useful when several values have the same meaning.

Example:

cpp
switch(month){

    case 11:
    case 12:
    case 1:
    case 2:
        cout << "Winter Season";
        break;
}
Here:

11 → Winter

12 → Winter

1 → Winter

2 → Winter

All four cases execute the same code.

📌 Practical Example – Find Season
Problem
Write a program to take a month number from the user and print the season.

Conditions

11, 12, 1, 2 → Winter Season

3, 4, 5, 6 → Summer Season

7, 8, 9, 10 → Rainy Season

Program
cpp
#include <iostream>
using namespace std;

int main(){

    int month;

    cout << "Enter the month number: ";
    cin >> month;

    switch(month){

        case 11:
        case 12:
        case 1:
        case 2:
            cout << "Winter Season";
            break;

        case 3:
        case 4:
        case 5:
        case 6:
            cout << "Summer Season";
            break;

        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Rainy Season";
            break;

        default:
            cout << "You have entered wrong input";
    }

    return 0;
}
Example 1

Input:

text
12
Output:

text
Winter Season
Example 2

Input:

text
5
Output:

text
Summer Season
Example 3

Input:

text
8
Output:

text
Rainy Season
Example 4

Input:

text
15
Output:

text
You have entered wrong input
📌 Switch with Character
A switch can also be used with characters.

Example:

cpp
char grade = 'A';

switch(grade){

    case 'A':
        cout << "Excellent";
        break;

    case 'B':
        cout << "Very Good";
        break;

    case 'C':
        cout << "Good";
        break;

    case 'D':
        cout << "Average";
        break;

    case 'F':
        cout << "Fail";
        break;

    default:
        cout << "Invalid Grade";
}
Important
Characters are written using single quotes:

text
'A'
'B'
'+'
'-'
Strings are written using double quotes:

text
"Apple"
"Monday"
"Hello"
📌 Example – Vowel Using Switch
cpp
#include <iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch(ch){

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

            cout << "Vowel";
            break;

        default:
            cout << "Not a vowel";
    }

    return 0;
}
Input

text
A
Output

text
Vowel
📌 Example – Calculator Using Switch
switch is commonly used to create menu-driven programs and calculators.

cpp
#include <iostream>
using namespace std;

int main(){

    int a, b;
    char operation;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    switch(operation){

        case '+':
            cout << "Addition = " << a + b;
            break;

        case '-':
            cout << "Subtraction = " << a - b;
            break;

        case '*':
            cout << "Multiplication = " << a * b;
            break;

        case '/':
            if(b != 0){
                cout << "Division = " << (float)a / b;
            }
            else{
                cout << "Division by zero is not allowed";
            }
            break;

        default:
            cout << "Invalid Operation";
    }

    return 0;
}
📌 Switch vs If-Else
if-else	switch
Used for conditions	Used for fixed values
Can check ranges	Best for exact values
Supports >, <, >=, <=	Does not directly check ranges
Supports complex conditions	Best for multiple choices
Good for marks/age ranges	Good for menus
More flexible	Cleaner for fixed choices
📌 When Should We Use Switch?
Use switch when:

One variable needs to be compared with multiple fixed values.

Creating a menu-driven program.

Checking day numbers.

Checking month numbers.

Checking character choices.

Creating calculators.

Creating menu-based applications.

Example

text
1 → Add
2 → Update
3 → Delete
4 → Exit
This is a good situation for switch.

📌 When Should We Use If-Else?
Use if-else when:

You need to check ranges.

You need relational operators.

You need logical operators.

You have complex conditions.

Multiple variables are involved.

Example:

cpp
if(marks >= 90){
    cout << "Grade A";
}
else if(marks >= 80){
    cout << "Grade B";
}
else if(marks >= 70){
    cout << "Grade C";
}
Here, if-else is better because we are checking ranges.

📌 Important Rules of Switch
Rule 1
The switch expression is evaluated once.

cpp
switch(number)
Rule 2
Each case represents a possible value.

cpp
case 1:
case 2:
case 3:
Rule 3
Case values must be unique.
❌ Incorrect:

cpp
case 1:
case 1:
Rule 4
break is used to exit the switch.

Rule 5
If break is missing, fall-through can occur.

Rule 6
default executes when no case matches.

Rule 7
Multiple cases can share the same block.

cpp
case 1:
case 2:
case 3:
    cout << "Same Output";
    break;
Rule 8
A colon : is used after every case.
Correct:

cpp
case 1:
Incorrect:

cpp
case 1;
📌 Common Mistakes
❌ Mistake 1 – Forgetting break

cpp
case 1:
    cout << "Monday";

case 2:
    cout << "Tuesday";
This can cause fall-through.

❌ Mistake 2 – Duplicate Case

cpp
case 1:
    cout << "One";
    break;

case 1:
    cout << "Another";
    break;
The same case value cannot be repeated.

❌ Mistake 3 – Using Double Quotes for Characters

Wrong:

cpp
case "A":
Correct:

cpp
case 'A':
❌ Mistake 4 – Using Conditions in Case

Wrong:

cpp
case marks >= 90:
Use:

cpp
if(marks >= 90)
instead.

📌 Output-Based Questions
Question 1
What will be the output?

cpp
int x = 2;

switch(x){

    case 1:
        cout << "A";
        break;

    case 2:
        cout << "B";
        break;

    case 3:
        cout << "C";
        break;

    default:
        cout << "D";
}
Answer

text
B
Question 2
What will be the output?

cpp
int x = 2;

switch(x){

    case 1:
        cout << "A";

    case 2:
        cout << "B";

    case 3:
        cout << "C";
}
Answer

text
BC
Reason
There is no break.

Question 3
What will be the output?

cpp
int x = 10;

switch(x){

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    default:
        cout << "Invalid";
}
Answer

text
Invalid
Question 4
What will be the output?

cpp
char ch = 'A';

switch(ch){

    case 'A':
        cout << "Apple";
        break;

    case 'B':
        cout << "Ball";
        break;

    default:
        cout << "Other";
}
Answer

text
Apple
📌 Practice Questions
Basic Level
Q1
Write a program to take a number from 1–7 and print the corresponding day using switch.

1 → Monday

2 → Tuesday

3 → Wednesday

4 → Thursday

5 → Friday

6 → Saturday

7 → Sunday

Q2
Write a program to take a month number and print the corresponding month name.

Q3
Write a program to take a month number and print the corresponding season.

11, 12, 1, 2 → Winter

3, 4, 5, 6 → Summer

7, 8, 9, 10 → Rainy

Q4
Write a program to take a character and check whether it is a vowel using switch.

Q5
Write a program to take a grade and print:

A → Excellent

B → Very Good

C → Good

D → Average

F → Fail

Intermediate Practice
Q6
Create a calculator using switch.
Operations: +, -, *, /, %

Q7
Create a menu-driven program:

text
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Q8
Create a menu-driven program to calculate:

Area of Circle

Area of Rectangle

Area of Square

Area of Triangle

Q9
Create a simple ATM menu:

Check Balance

Deposit

Withdraw

Exit

Q10
Create a restaurant menu:

Pizza

Burger

Sandwich

Pasta

Exit

Print the selected item.

📌 Quick Revision
Remember:

switch → Select a value

case → Match a value

break → Stop execution

default → If nothing matches

Basic Structure

cpp
switch(expression){

    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code
}
📌 Key Takeaways
switch is a conditional/decision-making statement.

It is useful for multiple fixed choices.

case represents a possible value.

break terminates the switch.

Missing break can cause fall-through.

default handles unmatched values.

Multiple cases can execute the same block.

switch can be used with integers and characters.

switch is commonly used for menu-driven programs.

if-else is better for ranges and complex conditions.

Case values must be unique.

Character cases use single quotes.

🚀 Recommended Next Topic
After switch, the next topic is:

text
Conditional Statements
        ↓
Switch Statement
        ↓
Loops
        ↓
Nested Loops
        ↓
Pattern Programming
        ↓
Functions
        ↓
Arrays
📝 One-Line Definition
The switch statement is used to execute different blocks of code based on the exact value of an expression.