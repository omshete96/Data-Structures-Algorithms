#include<bits/stdc++.h>
using namespace std;
int recu(int n){
    if(n<=1){
        return n;
    }
    return recu(n-1)+recu(n-2);    
}
int main(){
    int n;
    cin>>n;
    cout<<recu(n);
    return 0;
}