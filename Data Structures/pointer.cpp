#include<iostream>
using namespace std;
class node{
    public:
    int data;
    char ch;
    node* right;
    node* left;
    node* head=NULL;
    void Insert(int x,char ch){
        node* temp=new node();
        temp->right->data=x;
        temp->left->data=ch;
        temp->right=head;
        temp->left=head;
        head=temp;
    }
    void print(){
        node* temp=head;
        cout<<"List is :"<<endl;
        

        while(temp!=NULL){
            cout<<temp->data<<" "<<temp->ch;
            temp=temp->right;
            temp=temp->left;
        }
        cout<<endl;
    }
};

int main(){
    node ll;
    int n;
    cout<<"Enter the size :";cin>>n;
    for(int i=0;i<n;i++){
        int x;char ch;
        cout<<"Enter int and then char :";cin>>x;
        cin>>ch;
        ll.Insert(x,ch);
        ll.print();
    }
    return 0;
}