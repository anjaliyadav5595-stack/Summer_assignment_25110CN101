#include<iostream>
using namespace std;
struct Book{int id; string name;};
int main(){
    Book b[100]; int n; cin>>n;
    for(int i=0;i<n;i++) cin>>b[i].id>>b[i].name;
    int search; cin>>search;
    for(int i=0;i<n;i++) if(b[i].id==search) cout<<"Found: "<<b[i].name;
}