#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,n;cin>>n>>m;vector<int>a(n+m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>a[n+i];
    for(int x:a)cout<<x<<" ";
}