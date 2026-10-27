#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    // create 
    unordered_set <int> s;

    // insert
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(40);

    for(int x : s){
        cout<<x<<endl;
    }
    
    
    return 0;
}