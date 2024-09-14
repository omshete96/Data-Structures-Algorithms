#include<bits/stdc++.h>
using namespace std;

class Bst{
    public:
    int data;
    Bst* left;
    Bst* right;
    
    public:
    Bst* GetNewNode(int data){
        Bst* newnode=new Bst();
        newnode->data=data;
        newnode->left=newnode->right=NULL;
        return newnode;
    }
    Bst* Insert(Bst* root,int data){
        if(root==NULL){
            root=GetNewNode(data);
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
    bool search(Bst* root,int data){
        if(root==NULL){
            return false;
        }
        else if(root->data==data){
            return true;
        }
        else if(root->data >= data){
            return search(root->left,data);
        }
        else{
            return search(root->right,data);
        }
    }
};
int main(){
    Bst bt;
    Bst* root=NULL;
    int size;
    cout<<"Enter no. Elements :";cin>>size;
    for(int i=0;i<size;i++){
        int e;
        cout<<"Enter the Element :";cin>>e;
        root=bt.Insert(root,e);
    }
    
    int n;
    cout<<"Enter a element to be searched in tree.....:";cin>>n;
    if(bt.search(root,n)==true){
        cout<<"Element is present in Binary Tree !! "<<endl;
    }
    else{
        cout<<"Not Present in Binary Tree...."<<endl;
    }
    return 0;
}