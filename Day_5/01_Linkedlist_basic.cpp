#include <iostream>
using namespace std;

// Define the Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize node
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert at the end of the linked list
void insert(Node*& head, int val) {
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

// Function to print the linked list
void printList(Node* head) {
    cout << "Linked List: ";
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL; // Initializing empty list

    cout << "----------LinkedList Practice------------" << endl;
    cout << "- Enter 1 to add element" << endl;
    cout << "- Enter 2 to print list" << endl;
    cout << "- Enter 3 to exit" << endl;

    while (true) {
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter value to insert: ";
                int val;
                cin >> val;
                insert(head, val);
                break;
            }
            case 2:
                printList(head);
                break;
            case 3:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
