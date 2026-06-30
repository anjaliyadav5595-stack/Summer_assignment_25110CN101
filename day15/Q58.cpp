#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;cin>>n;vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int first=a[0];
    for(int i=0;i<n-1;i++)a[i]=a[j];
    a[n-1]=first;
    for(int x:a)cout<<x<<" ";
}