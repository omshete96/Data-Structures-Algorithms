#include<iostream>
using namespace std;
struct stack{
    int a[5];
    int top;
}s;

int overflow(){
    if(s.top==4){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int n){
    if(overflow()==1){
        cout<<"Stack Is Overflow !"<<endl;
    }
    else{
        s.top++;
        s.a[s.top]=n;
    }
}

int underflow(){
    if(s.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void pop(){
    int n;
    if(underflow()==1){
        cout<<"Stack Is Empty !"<<endl;
    }
    else{
        n=s.a[s.top];
        s.a[s.top]=0;
        s.top--;
        cout<<"Removed Element Is = "<<n<<endl;
    }
}

void display(){
    int i;
    cout<<"Your Stack Is : "<<endl;
    for(int i=s.top;i>=0;i--){
        cout<<s.a[i]<<endl;
    }
}

int main(){
    int n,ch,choice=1;
    s.top=-1;
    while(choice){
        cout<<"1. For Push "<<endl;
        cout<<"2. For Pop "<<endl;
        cout<<"3. For Display "<<endl;
        cout<<"Enter your choice :"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter the Element :";
                cin>>n;
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
        }
        cout<<"Do you want to continue ? (0/1):"<<endl;
        cin>>choice;
    }
    return 0;
}