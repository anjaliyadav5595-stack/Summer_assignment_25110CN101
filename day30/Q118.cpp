#include<iostream>
using namespace std;
struct Book{
    int id; string name; bool issued;
};
int main(){
    int n,ch; cout<<"Enter n books: "; cin>>n;
    Book b[n];
    for(int i=0;i<n;i++){cout<<"ID Name: "; cin>>b[i].id>>b[i].name; b[i].issued=false;}

    do{
        cout<<"\n1.Issue 2.Return 3.Show 4.Exit\n"; cin>>ch;
        if(ch==1){int id; cin>>id; for(int i=0;i<n;i++) if(b[i].id==id) b[i].issued=true;}
        else if(ch==2){int id; cin>>id; for(int i=0;i<n;i++) if(b[i].id==id) b[i].issued=false;}
        else if(ch==3){for(int i=0;i<n;i++) cout<<b[i].id<<" "<<b[i].name<<" "<<(b[i].issued?"Issued":"Avail")<<"\n";}
    }while(ch!=4);
    return 0;
}