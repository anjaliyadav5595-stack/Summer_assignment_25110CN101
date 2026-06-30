#include<iostream>
using namespace std;
struct Employee{
    int id; string name; float salary;
};
int main(){
    int n; cout<<"Enter number of employees: "; cin>>n;
    Employee e[n];

    for(int i=0;i<n;i++){
        cout<<"\nEnter ID Name Salary: ";
        cin>>e[i].id>>e[i].name>>e[i].salary;
    }

    cout<<"\n--- Employee Records ---\n";
    for(int i=0;i<n;i++)
        cout<<e[i].id<<" "<<e[i].name<<" "<<e[i].salary<<"\n";
    return 0;
}