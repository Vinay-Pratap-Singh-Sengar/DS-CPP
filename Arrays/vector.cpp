#include <iostream>
#include <vector>
using namespace std;

int main() {
    // int arr[] = {10,20,30,40,50}
    vector<int> arr = {10, 20, 30, 40, 50};

    cout << "First element: " << arr[0] << endl;
    cout << "Third element: " << arr[2] << endl;

    return 0;
}















// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> arr = {10, 20, 30, 40, 50};

//     cout << "Size = " << arr.size() << endl;

//     return 0;
// }
















// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> arr = {10, 20, 30, 40, 50};

//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }












// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter elements: ";

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "Vector elements: ";

//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
















// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> arr;
//     cout << "Initial size: " << arr.size() << endl;

//     arr.push_back(10);
//     arr.push_back(20);
//     arr.push_back(30);
//     cout << "After adding elements:" << endl;

//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Size: " << arr.size() << endl;
//     return 0;
// }





// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> arr = {10, 20, 30, 40};
//     cout << "Before pop_back: ";
//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     arr.pop_back();
//     cout << "\nAfter pop_back: ";
//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }






















// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> arr = {10, 20, 30, 40, 50};

//     cout << "First element: " << arr.front() << endl;
//     cout << "Last element: " << arr.back() << endl;

//     return 0;
// }





















// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> arr = {10, 20, 30, 40, 50};

//     cout << "Before update: ";

//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }

//     arr[2] = 100;

//     cout << "\nAfter update: ";

//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }