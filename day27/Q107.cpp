#include<iostream>
using namespace std;
struct Employee{
    int id; string name; float basic, hra, da, gross;
};
int main(){
    int n; cout<<"Enter number of employees: "; cin>>n;
    Employee e[n];

    for(int i=0;i<n;i++){
        cout<<"\nEnter ID Name Basic: ";
        cin>>e[i].id>>e[i].name>>e[i].basic;
        e[i].hra = e[i].basic*0.2;
        e[i].da = e[i].basic*0.1;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    cout<<"\nID Name Basic HRA DA Gross\n";
    for(int i=0;i<n;i++)
        cout<<e[i].id<<" "<<e[i].name<<" "<<e[i].basic<<" "<<e[i].hra<<" "<<e[i].da<<" "<<e[i].gross<<"\n";
    return 0;
}