#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* head;
    public:
    void Insert(int data,int n){
        node* temp1=new node();
        temp1->data=data;
        temp1->next=NULL;
        if(n==1){
            temp1->next=head;
            head=temp1;
            return;
        }
        node* temp2=head;
        for(int i=0;i<n-2;i++){
            temp2=temp2->next;
        }
        temp1->next=temp2->next;
        temp2->next=temp1;
    }
    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    node ll;
    ll.head=NULL;
     int n;
    cout<<"Enter the size :";cin>>n;
    for(int i=0;i<n;i++){
        int x,p;
        cout<<"Enter data and location :";
        cin>>x>>p;
        ll.Insert(x,p);
    }
    ll.print();
    return 0;
}