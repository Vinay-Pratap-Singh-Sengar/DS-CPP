#include <iostream>
#include <map>
using namespace std;

int main(){
    vector <int> nums = {0,1,2,2,4,4,1};
    map <int , int> mp;

    for (int i = 0; i < nums.size(); i++) {
        if(nums[i] % 2 == 0){
            mp[nums[i]]++;
        }
    }

    for(auto p : mp){
        cout<<p.first << "-->" <<p.second<<endl;
    }
    return 0;
}