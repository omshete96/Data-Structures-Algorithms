#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"******"<<endl;
    for(int i=0;i<3;i++){
        cout<<"|";
        for(int j=0;j<3;j++){
           cout<<a[i][j]<<" ";
        }cout<<"|"<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<"|";
        for(int j=0;j<3;j++){
           cout<<b[i][j]<<" ";
        }cout<<"|"<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<"|";
        for(int j=0;j<3;j++){
           cout<<c[i][j]<<" ";
        }cout<<"|"<<endl;
    }

}