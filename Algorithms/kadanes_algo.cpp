// Find Max Sub Array Sum by Kadane's algorithm in O(n) time complexity
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size :";cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    int sum=0;
    int maxi=v[0];
    
    for(int i=0;i<v.size();i++){
        sum=sum + v[i];
        maxi=max(sum,maxi);
        if(sum<0)
            sum=0;
    }
    cout<<"Maximum Sub Array Sum is :"<<maxi<<endl;
    return 0;
}