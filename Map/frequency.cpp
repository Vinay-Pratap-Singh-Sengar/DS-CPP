#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 10, 30, 20, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int visited[5] = {true};
    for(int i = 0; i < n; i++){
        if(visited[i] == false){
            continue;
        }

        int count = 0;
        for(int j = i; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                arr[i] = false;
            }
        }
        cout<<"frequency of "<<arr[i]<<" is : "<<count <<endl;
    }
    return 0;
}