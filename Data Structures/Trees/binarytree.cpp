#include<bits/stdc++.h>
using namespace std;
class bstnode{
    public:
    int data;
    bstnode* left;
    bstnode* right;
    
    public:
    bstnode* getnewnode(int data){
        bstnode* temp=new bstnode();
        temp->data=data;
        temp->left=temp->right=NULL;
        return temp;
    }
    bstnode* Insert(bstnode* root,int data){
        if(root==NULL){
            root=getnewnode(data);
            return root;
        }
        else if(data<=root->data){
            root->left=Insert(root->left,data);
        }
        else{
            root->right=Insert(root->right,data);
        }
        return root;
    }
    bool search(bstnode* root,int data){
        if(root==NULL){
            return false;
        }
        else if(root->data==data){
            return true;
        }
        else if(data<=root->data){
            return search(root->left,data);
        }
        else{
            return search(root->right,data);
        }
    }
};
int main(){
    bstnode t;
    bstnode* root=NULL;
    int size;
    cout<<"Enter the size :";cin>>size;
    for(int i=0;i<size;i++){
        int data;
        cin>>data;
        root=t.Insert(root,data);
    }
    int key;
    cout<<"Enter the element to be searched :";cin>>key;
    if(t.search(root,key)==true){
        cout<<"Element is present in Tree !"<<endl;
    }
    else{
        cout<<"Element is not present in Tree !"<<endl;
    }
    return 0;
}