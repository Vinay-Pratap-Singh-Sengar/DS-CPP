#include <iostream>
using namespace std;

// function declaration
void sum();
void sub(int x, int y);
void mul();
void div();

// function definition
void sum(){
    int x ;
    int y ;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    cout<<"Enter the value of y : "<<endl;
    cin>>y;
    int sum = x + y;
    cout<<"Sum is : "<<sum<<endl;
}

void sub(int x, int y){
    int sub = x - y;
    cout<<"Subtraction is : "<<sub <<endl;
}

int mul(){
    return 5;
}
void div(){

}

int main() {
    // int a ;
    // cout<<"Enter the value of a : "<<endl;
    // cin>>a;
    // int b ;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;
    // // function call
    // sum();
    // sub(30,20);
    // sub(a,b);
    // sub(20,30);

    mul();



    return 0;
}