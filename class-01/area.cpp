// wap to find out the area of circle whose radius is 23.

#include <iostream>
using namespace std;
int main(){
    int radius = 23;
    float area;

    area = 3.14 * radius * radius;
    cout<<"Area of circle is : "<<area <<endl;

    // char alphabet = 'a';
    // int ascii = alphabet;
    // cout<<alphabet;
    // cout<<"Ascii of alphabet "<< alphabet <<" is : "<< ascii << endl;


    char alphabet1 = 'a';
    char alphabet2 = 'A';
    
    cout<<(int) alphabet1 + (int) alphabet2;
    return 0;
}