#include<iostream>
using namespace std;
struct Contact{
    string name; long phone; string email;
};
int main(){
    int n; cout<<"Enter n: "; cin>>n;
    Contact c[n];
    for(int i=0;i<n;i++){
        cout<<"Name Phone Email: ";
        cin>>c[i].name>>c[i].phone>>c[i].email;
    }
    cout<<"\n--- Contacts ---\n";
    for(int i=0;i<n;i++)
        cout<<c[i].name<<" "<<c[i].phone<<" "<<c[i].email<<"\n";
    return 0;
}