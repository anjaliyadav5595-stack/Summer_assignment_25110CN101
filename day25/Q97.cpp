#include<iostream>
using namespace std;
int main(){
    int n,m; cin>>n>>m; int a[n],b[m],c[n+m];
    for(int i=0;i<n;i++) cin>>a[i]; for(int i=0;i<m;i++) cin>>b[i];
    int i=0,j=0,k=0;
    while(i<n && j<m) c[k++]=a[i]<b[j]?a[i++]:b[j++];
    while(i<n) c[k++]=a[i++]; while(j<m) c[k++]=b[j++];
    for(int i=0;i<n+m;i++) cout<<c[i]<<" ";
}