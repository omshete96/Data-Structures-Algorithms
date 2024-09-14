#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor to initialize data members
    node(int x) : data(x), next(NULL) {}
};

class LinkedList {
private:
    node* head; // Head pointer for the linked list

public:
    // Constructor to initialize head to nullptr
    LinkedList() : head(NULL) {}

    // Method to insert a new node at the beginning of the linked list
    void insertAtBeginning(int x) {
        node* newNode = new node(x);
        newNode->next = head;
        head = newNode;
    }

    // Method to insert a new node at the end of the linked list
    void insertAtEnd(int x) {
        node* newNode = new node(x);
        if (head == NULL) {
            head = newNode;
            return;
        }
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Method to print the linked list
    void print() {
        node* temp = head;
        cout << "List Is :" << endl;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ll.insertAtEnd(x);
    }
    ll.print();

    
    int value;
    cout << "Enter value to insert at the beginning: ";
    cin >> value;
    ll.insertAtBeginning(value);
    ll.print();

    cout << "Enter value to insert at the end: ";
    cin >> value;
    ll.insertAtEnd(value);
    ll.print();

    return 0;
}