#include<iostream>
using namespace std;
struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int data){
    BstNode* newNode=new BstNode();
    newNode->data=data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BstNode* Insert(BstNode* root,int data){
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

bool search(BstNode* root,int data){
    if(root==NULL){
        return false;
    }
    else if(root->data == data){
        return true;
    }
    else if(root->data >= data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }
}

int main(){
    BstNode* root=NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);

    int n;
    cout<<"Enter no. to searched in TREE :";cin>>n;
    if(search(root,n)==true){
        cout<<"No. is Found in TREE !"<<endl;
    }
    else{
        cout<<"No. is Not Found !"<<endl;
    }
}