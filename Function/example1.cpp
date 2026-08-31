// #include <iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 20;

//     int sum = a+b;
//     int sub = a-b;
//     int div = a/b;
//     int mul = a*b;

//     cout<<"sum is : "<<sum <<endl;
//     cout<<"subtration is : "<<sub<<endl;
//     cout<<"multiplication is : "<<mul<<endl;
//     cout<<"division is : "<<div<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

void sum() ;
int sub(int x, int y);

void sum(){
    int a = 10;
    int b = 20;
    int sum = a + b;
    cout<<"Sum is : "<<sum <<endl;
}

int sub(int x, int y){
    int sub = x-y;
    return sub;
}

int main(){
    sum();
    cout<<"Subtraction is : "<<sub(30,15)<<endl;
    return 0;
}

