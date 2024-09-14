#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int a[n];
    vector<int> v;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Your array is: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    int prime = 0;

    for (int i = 0; i < n; i++) {
        bool isPrime = true;
        if (a[i] > 1) {
            for (int j = 2; j * j <= a[i]; j++) {
                if (a[i] % j == 0) {
                    isPrime = false;
                    v.push_back(a[i]);
                    break;
                }
            }
            if (isPrime) {
                prime++;
            }
        } else {
            v.push_back(a[i]); // 0 and 1 are not prime
        }
    }

    cout << "The numbers that are not prime: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Total number of prime numbers: " << prime << endl;

    return 0;
}

