#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* head = nullptr; // Initialize head to nullptr
};

class io : public node {
public:
    void Insert(int x) {
        node* temp = new node();
        temp->data = x;
        temp->next = head;
        head = temp;
    }
    void print() {
        node* temp = head;
        cout << "List is :" << endl;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

class maximum : public io {
public:
    void maxelement() {
        node* temp = head;
        int c = head->data;
        while (temp != nullptr) {
            if ((temp->data) > c) {
                c = temp->data;
            }
            temp = temp->next;
        }
        cout << "Max element in linked list is :" << c << endl;
    }
};

int main() {
    io inou;
    int n;
    cout << "Enter the size :";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        inou.Insert(x);
        inou.print();
    }
    maximum m;
    m.head = inou.head; // Link the 'head' pointer of max class to the 'head' pointer of io class
    m.maxelement();
    return 0;
}
