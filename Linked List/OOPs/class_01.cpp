#include <iostream>
using namespace std;

class Student {
    public : 
        string name; // property //data member // class variable
        int age; // property //data member // class variable

        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

    int main() {
        Student s1;

        s1.name = "Vinay";
        s1.age = 25;

        s1.display();

    return 0;
    }
};

