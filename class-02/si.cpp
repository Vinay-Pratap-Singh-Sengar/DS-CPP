// wap to find out the simple interest where p = 10000, r = 5 and t = 3

#include <iostream>
using namespace std;

int main(){
    int principle = 15374;
    int rate = 5;
    int time = 3;

    float si;
    si = (float) principle * rate * time / 100  ;
    cout<<"simple interest is : "<<si;

    return 0;
}


// int / int = int

// decimal / int = decimal

// int / decimal = decimal

// typecasting : it is a way to convert one type of data into the another type

// there are 2 types of type casting : 
// 1. implicit typecasting : (automatically done by the compiler)
// 2. explicit typecasting : (done by the programmer)