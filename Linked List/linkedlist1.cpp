#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    // n1->next = NULL;
    // n2->next = NULL;
    // n3->next = NULL;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    cout<<n1->data<<endl;
    cout<<n1->next<<endl;
    cout<<n2->data<<endl;
    cout<<n2->next<<endl;
    cout<<n3->data<<endl;
    cout<<n3->next<<endl;
    return 0;
}
