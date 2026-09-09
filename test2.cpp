#include <iostream>
using namespace std;

// function declaration
void sum();
void sub(int x, int y);
int mul();
int div();

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
int div(){
    return 4;
}

string greeting(){
    return "hello";
}

void msg(){
    cout<<"giving message";
}

int main() {
    // sum()+5;
    mul()+5;
    // cout<<sum();
    cout <<mul();
    cout<<mul() * div();
    cout<<greeting();
    msg();
    return 0;
}