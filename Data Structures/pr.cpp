#include<bits./stdc++.h>
using namespace std;
class node{
    int data;
    node* next;
    node* head=NULL;
    public:
    void Insert(int x){
        node* temp=new node();
        temp->data=x;
        temp->next=head;
        head=temp;
    }
    void print(){
        node* temp=head;
        cout<<"List is :"<<endl;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    node ll;
    int n;
    cout<<"Enter the size :";cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        ll.Insert(x);
    }
    ll.print();
    int key;
    cout<<"Enter extra elemnts :";
    while(key!=0){
        cin>>key;
        ll.Insert(key);
    }
    ll.print();
    return 0;
}