#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector <int> arr = {5,2,4,8,1};
    int n = arr.size();
    // ascending order
    sort(arr.begin(), arr.end());
    for(int x : arr){
        cout<<x << "   "<<endl;
    }

    vector<pair<int, int>> v = {{1,3}, {2,2} ,{3,1}}; 
    sort(v.begin() , v.end() ,[](auto a, auto b){
        return a.second > b.second;
    });

    for(auto p : v){
        cout<<p.first << " : "<<p.second;
    }

    return 0;
}