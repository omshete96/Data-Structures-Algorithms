#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,char> mp;
    mp[1]='A';
    mp[2]='B';
    mp[3]='C';
    cout<<"Print using auto keyword"<<endl;
    for(auto &key: mp){
        cout<<key.first<<" "<<key.second<<endl;
    }
    return 0;
}