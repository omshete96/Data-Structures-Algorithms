#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<char> q;
    int n;
    cout<<"Enter the size :";cin>>n;
    for(int i=1;i<=n;i++){
        char x;
        cin>>x;
        q.push(x);
    }
    cout<<endl;
    cout<<"Queue is :"<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}