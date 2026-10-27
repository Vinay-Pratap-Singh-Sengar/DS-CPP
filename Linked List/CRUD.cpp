#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Display all elements
void traverse(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Count total nodes
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

// Search an element
bool search(Node* head, int key) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

int main() {
    Node* n1 = new Node(5);
    Node* n2 = new Node(10);
    Node* n3 = new Node(15);

    n1->next = n2;
    n2->next = n3;
    n3->next = nullptr;

    Node* head = n1;

    // 1. Display all elements
    cout << "Linked List: ";
    traverse(head);

    // 2. Count total nodes
    cout << "Total Nodes: " << countNodes(head) << endl;

    // 3. Search for 10
    if (search(head, 10)) {
        cout << "10 found" << endl;
    } else {
        cout << "10 not found" << endl;
    }

    // 4. Search for 20
    if (search(head, 20)) {
        cout << "20 found" << endl;
    } else {
        cout << "20 not found" << endl;
    }

    return 0;
}