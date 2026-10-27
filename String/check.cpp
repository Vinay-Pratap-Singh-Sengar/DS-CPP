#include <iostream>
#include <cctype>
using namespace std;

int toUpper(string name){
    for(int i = 0; i < name.length(); i++){
        if(islower(name[i])){
            name[i] = name[i] - 32;
        }
    }
}

int main(){
    string name = "vinay";
    toUpper(name);
    cout<<(char) toupper(name[2]);
    return 0;
}