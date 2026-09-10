// #include <iostream>
// using namespace std;

// int main(){
//     int marks[5]; //declaration of array

//     // initialization of array
//     marks[0] = 10;
//     marks[1] = 20;
//     marks[2] = 30;
//     marks[3] = 40;
//     marks[4] = 50;

//     // accessing the value of array: 
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     cout<<marks[4]<<endl;

//     // loop to traverse the array
//     for(int i = 0; i < 5; i++){
//         cout<<marks[i] << endl;
//     }



//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     // int marks[5] = {10,20,30,40,50};
//     int marks[] = {10,20,30,40,50};

//     // accessing the value of array: 
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     cout<<marks[4]<<endl;

//     // loop to traverse the array
//     for(int i = 0; i < 5; i++){
//         cout<<marks[i] << endl;
//     }



//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    string friends[5];

    for(int i = 0; i < 5; i++){
        cout<<"Enter the value at index "<<i<<endl;
        cin>> friends[i];
    }

    for(int i = 0; i < 5; i++){
        cout<< friends[i];
    }

    return 0;
}