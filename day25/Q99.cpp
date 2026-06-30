#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of names: ";
    cin>>n;
    string names[n];
    cout<<"Enter names:\n";
    for(int i=0; i<n; i++) cin>>names[i];

    sort(names, names+n); // sorts alphabetically A-Z

    cout<<"\nSorted names:\n";
    for(int i=0; i<n; i++) cout<<names[i]<<"\n";
    return 0;
}