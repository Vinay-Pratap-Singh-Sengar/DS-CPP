#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {

    Node* first = new Node(10);

    cout << first->data << endl;
    cout << first->next << endl;

    return 0;
}