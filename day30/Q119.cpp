#include<iostream>
using namespace std;
struct Employee{
    int id; string name; float salary;
};
void add(Employee e[],int &n){cout<<"ID Name Salary: "; cin>>e[n].id>>e[n].name>>e[n].salary; n++;}
void display(Employee e[],int n){for(int i=0;i<n;i++) cout<<e[i].id<<" "<<e[i].name<<" "<<e[i].salary<<"\n";}
int main(){
    Employee e[100]; int n=0,ch;
    do{
        cout<<"\n1.Add 2.Display 3.Exit\n"; cin>>ch;
        if(ch==1) add(e,n); else if(ch==2) display(e,n);
    }while(ch!=3);
    return 0;
}