#include <iostream>
#include <vector>
using namespace std;
// void rotateByOne(vector<int> &nums) {
//     int n = nums.size();
//     int last = nums[n - 1];
//     // Shift elements to the right
//     for (int i = n - 1; i > 0; i--) {
//         nums[i] = nums[i - 1];
//     }
//     // Put last element at first position
//     nums[0] = last;
// }

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    reverse(arr.begin(),arr.end());

 

    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i] << "   ";
    }
    return 0;
}