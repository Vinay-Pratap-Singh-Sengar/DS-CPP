#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;

    cout<<"value of a is : "<<a <<endl;
    cout<<"Value of b is : "<<b<<endl;

    b = 20;
    cout<<"value of a is : "<<a <<endl;
    cout<<"Value of b is : "<<b<<endl;
    return 0;
}