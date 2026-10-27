// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main(){
//     int arr[] = {10,20,10,30,20,10};
//     unordered_map<int, int> mp;
//     for(int x : arr) {
//         mp[x]++;
//     }

//     for(auto p : mp){
//         cout<<p.first <<"--->"<<p.second<<endl;
//     }
// }

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1,3,2,3,1,2,2,3,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    unordered_map<int, int> mp;
    for(int x : arr){
        mp[x]++;
    }

    for(auto i : mp){
        cout<<i.first<< " : "<<i.second <<endl;
    }
    return 0;
}

