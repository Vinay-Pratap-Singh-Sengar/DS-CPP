#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[] = {10,20,10,30,20,10};
    unordered_map<int, int> mp;
    for(int x : arr) {
        mp[x]++;
    }

    for(auto p : mp){
        cout<<p.first <<"--->"<<p.second<<endl;
    }
}