#include <bits/stdc++.h>
using namespace std;

struct Employee {
    string name;
    int age;
    int e_id;
    float s_m; // Monthly salary
    float lpa; // Annual salary (LPA: Lakhs Per Annum)
};

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    cin.ignore(); // To ignore the newline character after the integer input

    vector<Employee> e(n);

    for(int i = 0; i < n; i++) {
        cout << "Enter details for employee no. " << i + 1 << ":" << endl;
        cout << "Enter Employee Name: ";
        getline(cin, e[i].name);
        cout << "Enter age: ";
        cin >> e[i].age;
        cout << "Employee Id: ";
        cin >> e[i].e_id;
        cout << "Monthly salary: ";
        cin >> e[i].s_m;
        cin.ignore(); // To ignore the newline character after the float input
        e[i].lpa = e[i].s_m * 12; // Calculate annual salary
    }
    cout<<"********Data Base********"<<endl;
    for(int i = 0; i < n; i++) {
        cout << "The data for employee no. " << i + 1 << ":" << endl;
        cout << "Employee Name: " << e[i].name << endl;
        cout << "Employee Age: " << e[i].age << endl;
        cout << "Employee Id: " << e[i].e_id << endl;
        cout << "Monthly Salary: " << e[i].s_m << endl;
        cout << "Annual Salary (LPA): " << e[i].lpa << endl;
    }

    return 0;
}
