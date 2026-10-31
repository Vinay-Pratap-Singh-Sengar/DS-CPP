#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main(){
    Node* first = new Node();
    Node* second = new Node();

    first->data = 10;
    second->data = 20;

    first->next = second;
    second->next = NULL;

    cout<<first->data;

    return 0;
}