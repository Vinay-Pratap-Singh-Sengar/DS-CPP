# Linked List in C++ Using `struct`

Beginner-friendly notes for learning linked lists step by step.

## Learning objectives

After completing these notes, you should be able to:

- Understand nodes, pointers, `head`, and `nullptr`.
- Create and display a singly linked list.
- Insert a node at the beginning, end, or a position.
- Delete a node from the beginning, end, or by value.
- Search for a value and count nodes.
- Reverse a linked list.
- Understand the time complexity of common operations.

---

## 1. What is a linked list?

A **linked list** is a data structure made of nodes. Each node stores:

1. **Data** — the value.
2. **Next pointer** — the address of the next node.

Example:

```text
head
 |
 v
[10 | next] -> [20 | next] -> [30 | NULL]
```

- `head` points to the first node.
- Each node points to the next node.
- The last node points to `nullptr`, which means there is no next node.
- Nodes do not need to be stored next to each other in memory.

### Array vs. linked list

| Array | Linked list |
|---|---|
| Elements are accessed using indexes. | Nodes are reached by following pointers. |
| A normal fixed-size array has a fixed capacity. | Nodes can be added or removed dynamically. |
| Inserting in the middle may require shifting elements. | Inserting after a known node requires changing links. |
| Access by index is `O(1)`. | Accessing the node at a position is `O(n)`. |

A linked list is not always faster than an array. Choose the structure based on the operations your program needs.

---

## 2. Create a node using `struct`

```cpp
struct Node {
    int data;
    Node* next;
};
```

Explanation:

- `struct Node` defines what each node contains.
- `int data` stores the value.
- `Node* next` stores the address of another `Node`.
- `Node*` means “pointer to a Node”.

### Important pointer symbols

| Code | Meaning |
|---|---|
| `Node* head` | A pointer that can store the address of a node. |
| `new Node` | Dynamically creates a node. |
| `node->data` | Accesses `data` through a pointer. |
| `node->next` | Accesses the next pointer through a pointer. |
| `nullptr` | Means the pointer points to no object. |
| `delete node` | Frees a node that was dynamically allocated. |

---

## 3. Create a linked list manually

First, create three nodes and connect them.

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = nullptr;

    Node* head = first;

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Free the allocated memory.
    delete first;
    delete second;
    delete third;

    return 0;
}
```

Output:

```text
10 20 30
```

The example above creates the nodes manually for learning. In the operations below, we will use functions so that the list can grow or shrink.

---

## 4. Complete program with linked-list operations

This program includes:

1. Display the list
2. Insert at the beginning
3. Insert at the end
4. Insert at a 1-based position
5. Delete from the beginning
6. Delete from the end
7. Delete the first node containing a value
8. Search for a value
9. Count nodes
10. Reverse the list
11. Free all nodes before exiting

**Position rule:** Positions start at `1`. Position `1` means the beginning of the list.

Copy the entire code into a file such as `linked_list.cpp`.

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Print all nodes.
void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Insert a new node at the beginning.
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

// Insert a new node at the end.
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    // If the list is empty, the new node becomes head.
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    // Reach the last node.
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at a 1-based position.
// Position 1 means the beginning.
bool insertAtPosition(Node*& head, int value, int position) {
    if (position < 1) {
        return false;
    }

    if (position == 1) {
        insertAtBeginning(head, value);
        return true;
    }

    Node* temp = head;
    int currentPosition = 1;

    // Stop at the node just before the required position.
    while (temp != nullptr && currentPosition < position - 1) {
        temp = temp->next;
        currentPosition++;
    }

    // The position does not exist in this list.
    if (temp == nullptr) {
        return false;
    }

    Node* newNode = new Node;
    newNode->data = value;

    newNode->next = temp->next;
    temp->next = newNode;

    return true;
}

// Delete the first node.
void deleteFromBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    delete temp;
}

// Delete the last node.
void deleteFromEnd(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    // Only one node exists.
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    // Reach the second-last node.
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

// Delete the first node containing the given value.
bool deleteByValue(Node*& head, int value) {
    if (head == nullptr) {
        return false;
    }

    // The first node contains the value.
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    Node* temp = head;

    // Find the node just before the target.
    while (temp->next != nullptr &&
           temp->next->data != value) {
        temp = temp->next;
    }

    // Value was not found.
    if (temp->next == nullptr) {
        return false;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;

    delete nodeToDelete;
    return true;
}

// Return the position of the value, or -1 if it is absent.
int search(Node* head, int value) {
    Node* temp = head;
    int position = 1;

    while (temp != nullptr) {
        if (temp->data == value) {
            return position;
        }

        temp = temp->next;
        position++;
    }

    return -1;
}

// Count the total number of nodes.
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    return count;
}

// Reverse the links of the list.
void reverseList(Node*& head) {
    Node* previous = nullptr;
    Node* current = head;

    while (current != nullptr) {
        Node* nextNode = current->next;

        current->next = previous;
        previous = current;
        current = nextNode;
    }

    head = previous;
}

// Delete every node and make the list empty.
void clearList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    int choice;
    int value;
    int position;

    while (true) {
        cout << "\n--- LINKED LIST MENU ---\n";
        cout << "1. Display list\n";
        cout << "2. Insert at beginning\n";
        cout << "3. Insert at end\n";
        cout << "4. Insert at position\n";
        cout << "5. Delete from beginning\n";
        cout << "6. Delete from end\n";
        cout << "7. Delete by value\n";
        cout << "8. Search value\n";
        cout << "9. Count nodes\n";
        cout << "10. Reverse list\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";

        if (!(cin >> choice)) {
            break;
        }

        if (choice == 0) {
            break;
        } else if (choice == 1) {
            display(head);
        } else if (choice == 2) {
            cout << "Enter value: ";
            cin >> value;
            insertAtBeginning(head, value);
        } else if (choice == 3) {
            cout << "Enter value: ";
            cin >> value;
            insertAtEnd(head, value);
        } else if (choice == 4) {
            cout << "Enter value and position: ";
            cin >> value >> position;

            if (insertAtPosition(head, value, position)) {
                cout << "Node inserted.\n";
            } else {
                cout << "Invalid position.\n";
            }
        } else if (choice == 5) {
            deleteFromBeginning(head);
        } else if (choice == 6) {
            deleteFromEnd(head);
        } else if (choice == 7) {
            cout << "Enter value to delete: ";
            cin >> value;

            if (deleteByValue(head, value)) {
                cout << "Node deleted.\n";
            } else {
                cout << "Value not found.\n";
            }
        } else if (choice == 8) {
            cout << "Enter value to search: ";
            cin >> value;

            int result = search(head, value);

            if (result == -1) {
                cout << "Value not found.\n";
            } else {
                cout << "Value found at position "
                     << result << ".\n";
            }
        } else if (choice == 9) {
            cout << "Total nodes: " << countNodes(head) << "\n";
        } else if (choice == 10) {
            reverseList(head);
            cout << "List reversed.\n";
        } else {
            cout << "Invalid choice.\n";
        }
    }

    // Release all remaining dynamically allocated nodes.
    clearList(head);

    cout << "Program ended.\n";
    return 0;
}
```

---

## 5. Understand every operation

### Operation 1: Display / traversal

Example list:

```text
head -> 10 -> 20 -> 30 -> NULL
```

Code idea:

```cpp
Node* temp = head;

while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
}
```

Dry run:

| Step | `temp` points to | Printed output |
|---|---|---|
| 1 | Node containing `10` | `10` |
| 2 | Node containing `20` | `10 20` |
| 3 | Node containing `30` | `10 20 30` |
| 4 | `nullptr` | Loop stops |

**Remember:** Move `temp` forward on every iteration. Otherwise, the loop may never end.

### Operation 2: Insert at the beginning

Before:

```text
head -> 10 -> 20 -> NULL
```

Insert `5`.

```text
head -> 5 -> 10 -> 20 -> NULL
```

Code:

```cpp
Node* newNode = new Node;
newNode->data = 5;
newNode->next = head;
head = newNode;
```

Steps:

1. Create the new node.
2. Make the new node point to the old head.
3. Update `head` to the new node.

### Operation 3: Insert at the end

Before:

```text
head -> 10 -> 20 -> NULL
```

Insert `30`.

```text
head -> 10 -> 20 -> 30 -> NULL
```

Steps:

1. Create a new node and set its `next` to `nullptr`.
2. If the list is empty, make it the head.
3. Otherwise, travel to the last node.
4. Make the last node point to the new node.

### Operation 4: Insert at a position

Positions start at `1`.

Before:

```text
head -> 10 -> 20 -> 40 -> NULL
```

Insert `30` at position `3`.

After:

```text
head -> 10 -> 20 -> 30 -> 40 -> NULL
```

The important link changes are:

```cpp
newNode->next = temp->next;
temp->next = newNode;
```

Here, `temp` points to the node just before the insertion position.

**Order matters:** First connect the new node to the next node. Then connect the previous node to the new node.

The function returns `false` if the position is less than `1` or beyond the valid insertion range.

### Operation 5: Delete from the beginning

Before:

```text
head -> 10 -> 20 -> 30 -> NULL
```

After deleting the first node:

```text
head -> 20 -> 30 -> NULL
```

Code:

```cpp
Node* temp = head;
head = head->next;
delete temp;
```

First move `head` forward, then delete the old first node.

If the list is empty, there is nothing to delete.

### Operation 6: Delete from the end

Before:

```text
head -> 10 -> 20 -> 30 -> NULL
```

After:

```text
head -> 10 -> 20 -> NULL
```

To delete the last node, reach the **second-last node**.

```cpp
while (temp->next->next != nullptr) {
    temp = temp->next;
}

delete temp->next;
temp->next = nullptr;
```

The complete function checks for an empty list and a one-node list first. These cases must be handled to avoid invalid pointer access.

### Operation 7: Delete by value

Before:

```text
head -> 10 -> 20 -> 30 -> NULL
```

Delete the value `20`.

After:

```text
head -> 10 -> 30 -> NULL
```

The idea is to find the node before the target, connect it to the target's next node, and delete the target.

```cpp
Node* nodeToDelete = temp->next;
temp->next = nodeToDelete->next;
delete nodeToDelete;
```

The function deletes only the **first occurrence** of the value. If the value is not found, it returns `false`.

### Operation 8: Search

Suppose the list is:

```text
head -> 10 -> 20 -> 30 -> NULL
```

Search for `20`.

The function checks nodes one by one and returns position `2`. If the value does not exist, it returns `-1`.

### Operation 9: Count nodes

For this list:

```text
head -> 10 -> 20 -> 30 -> NULL
```

The count is `3`.

Start `count` at zero and increase it once for each node visited.

### Operation 10: Reverse the linked list

Before:

```text
head -> 10 -> 20 -> 30 -> NULL
```

After:

```text
head -> 30 -> 20 -> 10 -> NULL
```

Three pointers are used:

- `previous` — the node behind the current node.
- `current` — the node being processed.
- `nextNode` — saves the next node before the link is changed.

The essential steps are:

```cpp
Node* nextNode = current->next;
current->next = previous;
previous = current;
current = nextNode;
```

Repeat until `current` becomes `nullptr`, then update `head = previous`.

**Why save `nextNode` first?** Changing `current->next` without saving the original next node would lose the rest of the list.

### Operation 11: Clear the list

When the program finishes, dynamically allocated nodes should be released.

```cpp
while (head != nullptr) {
    Node* temp = head;
    head = head->next;
    delete temp;
}
```

Move `head` to the next node before deleting the old node. This avoids accessing a node after it has been deleted.

---

## 6. Why do some functions use `Node*& head`?

For example:

```cpp
void insertAtBeginning(Node*& head, int value)
```

`Node*& head` means **reference to a pointer**.

In simple words, it lets the function change the original `head` pointer in `main()`.

Inserting at the beginning changes which node is first, so the original `head` must be updated.

By contrast:

```cpp
void display(Node* head)
```

only needs a copy of the pointer because displaying the list does not change the head pointer.

---

## 7. Time complexity

Let `n` be the number of nodes.

| Operation | Time complexity |
|---|---:|
| Display / traversal | `O(n)` |
| Insert at beginning | `O(1)` |
| Insert at end | `O(n)` |
| Insert at a position | `O(n)` |
| Delete from beginning | `O(1)` |
| Delete from end | `O(n)` |
| Delete by value | `O(n)` |
| Search | `O(n)` |
| Count nodes | `O(n)` |
| Reverse the list | `O(n)` |
| Clear the list | `O(n)` |

The insert-at-end function takes `O(n)` because it must travel from the head to the last node. A separate tail pointer can make that operation `O(1)`.

---

## 8. Common beginner mistakes

1. **Forgetting to initialize `next`:** Set it to `nullptr` when creating a new last node.
2. **Forgetting the empty-list case:** Check `head == nullptr` before accessing `head->next`.
3. **Losing the list:** Save the next pointer before changing a link or deleting a node.
4. **Not updating `head`:** Inserting or deleting the first node can change the head.
5. **Accessing a deleted node:** Do not use a pointer to a node after deleting that node.
6. **Infinite traversal loop:** Move `temp = temp->next` inside the loop.
7. **Confusing `.` and `->`:** Use `->` when accessing a member through a pointer.
8. **Using an invalid position:** Check the requested position before inserting.

---

## 9. Practice questions

Try these tasks before looking at the complete program again.

### Beginner

1. Create a list containing `5`, `10`, and `15`.
2. Display all elements.
3. Count the total nodes.
4. Search for `10`.
5. Search for a value that does not exist.

### Intermediate

6. Insert `5` at the beginning of `10 -> 20 -> NULL`.
7. Insert `30` at the end of `10 -> 20 -> NULL`.
8. Insert `15` at position `2` in `10 -> 20 -> NULL`.
9. Delete the first node.
10. Delete the last node.
11. Delete a node by value.
12. Reverse a list containing five nodes.

### Edge cases to test

- Display an empty list.
- Delete from an empty list.
- Delete the only node in a list.
- Insert at position `1`.
- Insert at a position beyond the end.
- Search an empty list.
- Delete a value that does not exist.
- Reverse an empty list and a one-node list.

---

## 10. Quick revision

- A **node** stores data and a pointer to the next node.
- `head` points to the first node.
- `nullptr` marks the end of a singly linked list.
- Traversal means visiting nodes one by one.
- Insertion changes links to add a node.
- Deletion changes links and frees the removed node.
- Searching checks each node until the value is found or the list ends.
- Reversing changes the direction of the links.
- Always handle empty lists and single-node lists carefully.
- Always free dynamically allocated nodes when they are no longer needed.

**Suggested learning order:** Create nodes → Display → Insert at beginning → Insert at end → Search → Count → Delete → Insert at position → Reverse.
