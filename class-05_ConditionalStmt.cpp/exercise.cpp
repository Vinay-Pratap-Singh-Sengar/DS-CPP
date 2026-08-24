// // #include <iostream>
// // using namespace std;

// // int main(){
// //     int a = 10;
// //     int b = 5;

// //     if(a%b == 0){
// //         cout<<"it is divisible"<<endl;
// //     }
// //     else{
// //         cout<<"it is not divisible";
// //     }
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;

// // int main(){
// //     char ch ;
// //     cout<<"Enter any value "<<endl;
// //     cin>>ch;

// //     if((int)ch>= 48){
// //         if((int) ch <= 57){
// //             cout << "value is digit"<<endl;
// //         }
// //     }
// //     else if((int) ch>= 65 && (int) ch<= 90 || (int) ch >= 97 && (int) ch <= 122){
// //         cout<<"value is  alphabet";
// //     }

// //     else{
// //         cout<<"value is other symbol";
// //     }
    
// // }




// // Write a program to count the total number of notes in a given amount.
// // For eg : amount = 3887
// // 	     Output : 
// // 500 notes is : 7
// // 200 notes are : 1
// // 100 notes are : 1
// // 50 notes are : 1
// // 20 notes are : 1
// // 10 notes are : 1
// // 5 notes are : 1
// // 2 notes are : 1

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int amount = 3888;

// //     if(amount >= 500){
// //        int notes = amount / 500;
// //        amount = amount % 500;
// //        cout << "total count of 500 notes are : "<<notes<<endl;
// //     }
// //     if(amount >= 200){
// //         int notes = amount / 200;
// //        amount = amount % 200;
// //        cout << "total count of 200 notes are : "<<notes<<endl;
// //     }
// //     if(amount >= 100){
// //         int notes = amount / 100;
// //        amount = amount % 100;
// //        cout << "total count of 100 notes are : "<<notes<<endl;
// //     }
// //      if(amount >= 50){
// //         int notes = amount / 50;
// //        amount = amount % 50;
// //        cout << "total count of 50 notes are : "<<notes<<endl;
// //     }
// //      if(amount >= 20){
// //         int notes = amount / 20;
// //        amount = amount % 20;
// //        cout << "total count of 20 notes are : "<<notes<<endl;
// //     }
// //      if(amount >= 10){
// //         int notes = amount / 10;
// //        amount = amount % 10;
// //        cout << "total count of 10 notes are : "<<notes<<endl;
// //     }
// //      if(amount >= 5){
// //         int notes = amount / 5;
// //        amount = amount % 5;
// //        cout << "total count of 5 notes are : "<<notes<<endl;
// //     }
// //      if(amount >= 2){
// //         int notes = amount / 2;
// //        amount = amount % 2;
// //        cout << "total count of 2 notes are : "<<notes<<endl;
// //     }
// //      if(amount >= 1){
// //         int notes = amount ;
// //        cout << "total count of 1 notes are : "<<notes<<endl;
// //     }
// //     return 0;
// // }

// // Write a program to input angles of a triangle and check whether triangle is valid or not.














// // Write a program to input all sides of a triangle and check whether the triangle is valid or not.




// // Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.

// // Write a program to calculate profit or loss

// // Write a program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// // Percentage >= 90% : Grade A
// // Percentage >= 80% : Grade B
// // Percentage >= 70% : Grade C
// // Percentage >= 60% : Grade D
// // Percentage >= 40% : Grade E
// // Percentage < 40% : Grade F

// //  26.Write a program to input basic salary of an employee and calculate its Gross salary according to following:
// // 	Basic Salary <= 10000 : HRA = 20%, DA = 80%
// // 	Basic Salary <= 20000 : HRA = 25%, DA = 90%
// // 	Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <iostream>
using namespace std;

int main(){
    int salary ;
    cout<<"Enter the salary amount: "<<endl;
    cin>>salary;
    if(salary <= 10000){
        int gross_salary = salary + salary * 0.2 + salary * 0.8;
        cout<<"gross salary is : "<<gross_salary<<endl;
    }
    else if(salary > 10000 && salary <= 20000){
        int gross_salary = salary + salary * 0.25 + salary * 0.9;
        cout<<"gross salary is : "<<gross_salary<<endl;
    }
    else { 
        int gross_salary = salary + salary * 0.30 + salary * 0.95;
        cout<<"gross salary is : "<<gross_salary<<endl;  
    }

    

    return 0;
}




// // 27. Write a program to input electricity unit charges and calculate total electricity bill according to the given condition:
// // For first 50 units Rs. 0.50/unit
// // For next 100 units Rs. 0.75/unit
// // For next 100 units Rs. 1.20/unit
// // For unit above 250 Rs. 1.50/unit
// // An additional surcharge of 20% is added to the bill.

// #include <iostream>
// using namespace std;

// int main(){
//     int units;
//     cout<<"Enter the units ";
//     cin>>units;

//     if(units <= 50){
//         int amount = units * 0.5 * 1.2; 
//         cout<<"Amount is : "<<amount<<endl;
//     }

//     else if(units <= 100){
//         int amount = (25 + (units - 50) * 0.75)*1.2;
//         cout<<"Amount is : "<<amount << endl; 
//     }

//     else if(units <= 150){
//         int amount = (100 + (units - 150) * 1.2) * 1.2;
//         cout<<"Amount is : "<<amount << endl; 
//     }

//     else {
//         int amount = (220 + (units - 250) * 1.5) * 1.2;
//          cout<<"Amount is : "<<amount << endl; 
//     }


//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     char a = 'A';
//     char b = 'a';
//     if (a < b)
//         cout << "A";
//     else
//         cout << "B";
// }



// // Q8. What will be printed?

// #include <iostream>
// using namespace std;

// int main() {
//     char ch = 'A';
//     cout << ch + 2;
// }

// // Q9. What is the output?

// #include <iostream>
// using namespace std;

// int main() {
//     char ch = 'd';
//     cout << (char)(ch - 3);
// }




// // Q10. What will be the output?

// #include <iostream>
// using namespace std;

// int main() {
//     char a = 'A';
//     char b = 'a';
//     if (a < b)
//         cout << "A";
//     else
//         cout << "B";
// }
