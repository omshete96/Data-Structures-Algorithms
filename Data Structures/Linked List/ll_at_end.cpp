#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

void insert(int x) {
    node* temp=new node();
    temp->data=x;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
    }
    else{
        node* temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
void search(int key){
    node* temp=head;
    int c=0;
    while(temp!=NULL){
        if(temp->data==key){
           c++;
        }
        temp=temp->next;
    }
    if(c!=0)cout<<"Key Found !"<<endl;
    else cout<<"Key not Found !"<<endl;
}
void print() {
    node* temp = head;
    cout << "List is: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert(x);
    }
    print();
    int key;
    cout<<"Enter no. to be searched :";cin>>key;
    search(key);
}
