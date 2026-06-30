#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0,j=n-1;i<j;i++,j++)swap(a[i],a[j]);
    for(int x:a)cout<<x<<" ";
}