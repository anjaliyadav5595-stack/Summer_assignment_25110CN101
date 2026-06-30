#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,m;cin>>n>>m;set<int>a,b;
    for(int i=0,x;i<n;i++){cin>>x;a.insert(x);}
    for(int i=0,x;i<m;i++){cin>>x;b.insert(x);}
    for(int x:a)if(b.count(x))cout<<x<<" ";
}