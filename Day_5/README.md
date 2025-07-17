
# 📅 Day 5 – Linked List in C++ (DSA Placement Prep)

## ✅ What You Learned:
- Definition and advantages of Linked Lists
- Node structure with constructor
- Types of Linked Lists: Singly, Doubly, Circular
- Basic operations: Insertion, Deletion, Traversal

---

## 🧱 Node Structure

```cpp
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
```

- `data`: value stored in the node  
- `next`: pointer to next node  
- Constructor simplifies node creation

---

## 🛠️ Core Operations

### 🔹 Insert at Head
```cpp
void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
```

### 🔹 Insert at Tail
```cpp
void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
```

### 🔹 Delete by Value
```cpp
void deleteByValue(Node* &head, int val) {
    if (head == NULL) return;
    if (head->data == val) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != val) {
        temp = temp->next;
    }
    if (temp->next == NULL) return;
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
```

### 🔹 Traverse and Print
```cpp
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
```

---

## 🧪 Practice Questions
| # | Problem | Status |
|--|------------------------------|--------|
| 1 | Insert at head | ✅ |
| 2 | Insert at tail | ✅ |
| 3 | Insert at index | 🔲 |
| 4 | Delete by value | ✅ |
| 5 | Delete by position | 🔲 |
| 6 | Traverse and print | ✅ |

---

## 🔁 Next Step (Day 6)
- Doubly Linked List
- Detect cycle (Floyd’s Algorithm)
- Middle of linked list
- Reverse a linked list (Iterative + Recursive)
