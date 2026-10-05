#include<iostream>
#include<string>
using namespace std;

int main(){
    string name = "vinay pratap singh";
    string new_name = "";
    // for(int i = 0; i < name.length(); i++){
    //     new_name += toupper(name[i]);
    // }
    // cout<<new_name;

    for(int i = 0 ; i < name.length(); i++){
        cout<<toupper(name[i])<<endl;
    }
    string s = "Hello World";
    cout << s.find("World");
    return 0;
}