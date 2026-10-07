#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 10, 30, 20, 10};
    int n = 6;

    bool visited[6] = {false};

    for(int i = 0; i < n; i++) {

        if(visited[i] == true) {
            continue;
        }

        int count = 0;

        for(int j = i; j < n; j++) {

            if(arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }

    return 0;
}