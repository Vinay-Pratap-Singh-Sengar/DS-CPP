
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node* NewNode(int data){
        
    }
};

// 1. Insert at beginning
void insertAtBeginning(int value, Node* &head){

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

// 2. Insert at end
void insertAtEnd(int value, Node* &head){

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

// 3. Insert at a specific position (1-based)
void insertAtPosition(int value, int position, Node* &head){

    if(position < 1){
        cout << "Invalid position" << endl;
        return;
    }

    if(position == 1){
        insertAtBeginning(value, head);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(temp != NULL && count < position - 1){
        temp = temp->next;
        count++;
    }

    if(temp == NULL){
        cout << "Invalid position" << endl;
        return;
    }

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = temp->next;

    temp->next = newNode;
}

// 4. Delete from beginning
void deleteFromBeginning(Node* &head){

    if(head == NULL){
        cout << "Linked List is empty" << endl;
        return;
    }

    Node* temp = head;

    head = head->next;

    delete temp;
}

// 5. Delete from end
void deleteFromEnd(Node* &head){

    if(head == NULL){
        cout << "Linked List is empty" << endl;
        return;
    }

    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }

    delete temp->next;

    temp->next = NULL;
}

// 6. Delete from a specific position (1-based)
void deleteAtPosition(int position, Node* &head){

    if(position < 1 || head == NULL){
        cout << "Invalid position or empty list" << endl;
        return;
    }

    if(position == 1){
        deleteFromBeginning(head);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(temp->next != NULL && count < position - 1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        cout << "Invalid position" << endl;
        return;
    }

    Node* deleteNode = temp->next;

    temp->next = deleteNode->next;

    delete deleteNode;
}

// 7. Search an element
void searchElement(int value, Node* head){

    Node* temp = head;
    int position = 1;

    while(temp != NULL){

        if(temp->data == value){
            cout << "Element found at position: " << position << endl;
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Element not found" << endl;
}

// 8. Count total nodes
void countNodes(Node* head){

    int count = 0;

    Node* temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    cout << "Total nodes: " << count << endl;
}

// 9. Update node value at a specific position
void updateNode(int position, int value, Node* head){

    Node* temp = head;
    int count = 1;

    while(temp != NULL && count < position){
        temp = temp->next;
        count++;
    }

    if(temp == NULL || position < 1){
        cout << "Invalid position" << endl;
        return;
    }

    temp->data = value;

    cout << "Node updated successfully" << endl;
}

// 10. Reverse linked list
void reverseLinkedList(Node* &head){

    Node* prev = NULL;
    Node* current = head;
    Node* nextNode = NULL;

    while(current != NULL){

        nextNode = current->next;

        current->next = prev;

        prev = current;

        current = nextNode;
    }

    head = prev;
}

// 11. Display / Traverse linked list
void display(Node* head){

    if(head == NULL){
        cout << "Linked List is empty" << endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main(){

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Creating linked list manually

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    cout << "Original Linked List:" << endl;
    display(head);

    // 1. Insert at beginning
    insertAtBeginning(5, head);
    cout << "\nAfter inserting at beginning:" << endl;
    display(head);

    // 2. Insert at end
    insertAtEnd(40, head);
    cout << "\nAfter inserting at end:" << endl;
    display(head);

    // 3. Insert at specific position
    insertAtPosition(25, 4, head);
    cout << "\nAfter inserting at position 4:" << endl;
    display(head);

    // 4. Delete from beginning
    deleteFromBeginning(head);
    cout << "\nAfter deleting from beginning:" << endl;
    display(head);

    // 5. Delete from end
    deleteFromEnd(head);
    cout << "\nAfter deleting from end:" << endl;
    display(head);

    // 6. Delete from specific position
    deleteAtPosition(2, head);
    cout << "\nAfter deleting from position 2:" << endl;
    display(head);

    // 7. Search an element
    cout << "\nSearching element 30:" << endl;
    searchElement(30, head);

    // 8. Count total nodes
    cout << "\nCounting nodes:" << endl;
    countNodes(head);

    // 9. Update node value
    cout << "\nUpdating position 2 with value 100:" << endl;
    updateNode(2, 100, head);
    display(head);

    // 10. Reverse linked list
    cout << "\nAfter reversing linked list:" << endl;
    reverseLinkedList(head);
    display(head);

    return 0;
}
