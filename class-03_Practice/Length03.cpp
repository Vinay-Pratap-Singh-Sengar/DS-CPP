#include <iostream>
using namespace std;

int main(){
    string word;
    cout<<"enter any sentence or word";
    cin>>word;

    int length = word.length();

    cout<<"the word is : "<<word <<endl;
    cout<<word<<" length is : "<<length;

    return 0;
}   