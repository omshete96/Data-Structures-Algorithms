#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter nxn matrix Dimensions :";cin>>n;
    vector<vector<int>> v(n, vector<int>(n)); // Initialize the 2D vector with dimensions 3x3

    cout << "Enter 9 integers to fill the 3x3 matrix:" << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            v[i][j] = x; // Directly assign the value to the element
        }
    }

    cout << "Matrix is :" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl; // To print the matrix in a proper format
    }

    return 0;
}
