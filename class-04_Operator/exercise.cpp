#include<iostream>
using namespace std;

int main(){
    int number ;
    cout<<"Enter a number";
    cin>>number;
    if(number > 0){
        cout<<"number is positive";
    }
    if(number < 0){
        cout<<"number is negative";
    }
    if(number == 0){
        cout<<"number is zero";
    }
//   else if(number == 0){
//         cout<<"number is zero";
//   }
//   else{
//     cout<<"number is negative";
//   }
   
    return 0;
}