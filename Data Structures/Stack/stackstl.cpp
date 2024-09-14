#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char> s;
    int n;
    cout<<"Enter the size :";cin>>n;
    for(int i=1;i<=n;i++){
        char x;
        cin>>x;
        s.push(x);
    }
    cout<<"Stack is :"<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}