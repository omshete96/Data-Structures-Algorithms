#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  no. of Rows :";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<" "<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}