#include<iostream>
using namespace std;
struct Item{
    int id; string name; int qty; float price;
};
int main(){
    int n; cout<<"Enter n items: "; cin>>n;
    Item it[n];
    for(int i=0;i<n;i++){
        cout<<"ID Name Qty Price: ";
        cin>>it[i].id>>it[i].name>>it[i].qty>>it[i].price;
    }
    cout<<"\nID Name Qty Price Total\n";
    for(int i=0;i<n;i++)
        cout<<it[i].id<<" "<<it[i].name<<" "<<it[i].qty<<" "<<it[i].price<<" "<<it[i].qty*it[i].price<<"\n";
    return 0;
}