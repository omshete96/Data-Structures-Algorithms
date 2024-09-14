#include<iostream>
using namespace std;
class node{
    int data;
    node* next;
    node* head;
    public:
    node* reverse(node* head){
        node *current,*prev, *next;
        current=head;
        prev=NULL;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
        return head;
    }
    node* insert(node* head,int data){
        node* temp=new node();
        temp->data=data;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            node* temp1=head;
            while(temp1->next !=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
        return head;
    }
    void print(node* head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
};
int main(){
    node ll;
    node* head=NULL;
    int n;
    cout<<"Enter the size :";cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        head=ll.insert(head,x);
    }
    head=ll.reverse(head);
    cout<<"Reverse linked list is : ";
    ll.print(head);
    return 0;
}