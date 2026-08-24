// wap to take a number from the user and print the season
// eg : 11,12,1,2 --> winter season
// // 3,4,5,6 --> summer season
// // 7,8,9,10 --> rainy season

// #include<iostream>
// using namespace std;

// int main(){
//     int month;
//     cout << "Enter the month number "<<endl;
//     cin>>month;

//     if(month == 11 || month == 12 || month == 1 || month == 2){
//         cout<<"Winter season";
//     }

//     else if(month == 3 || month == 4 || month == 5 || month == 6){
//         cout<<"Summer season";
//     }

//     else if(month == 7 || month == 8 || month == 9 || month == 10){
//         cout<<"Rainy season";
//     }

//     else {
//         cout<<"you have entered wrong input";
//     }

// }



#include<iostream>
using namespace std;

int main(){
    int month;
    cout << "Enter the month number "<<endl;
    cin>>month;

    switch(month){
        case 11 : 
        case 12 :
        case 1 :
        case 2 : 
            cout<<"Winter Season"<<endl;
            break;
           
        case 3 : 
        case 4 : 
        case 5 : 
        case 6 : 
            cout<<"Summer Season";
            break;

        case 7: 
        case 8: 
        case 9: 
        case 10:
            cout<<"Rainy Season";
            break;
        default :
            cout<<"you have entered wrong input";
    }

}