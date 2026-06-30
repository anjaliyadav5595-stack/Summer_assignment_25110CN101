#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;cin>>n;vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());cin>>k;
    int l=0,r=n-1;
    while(l<=r){int m=(i+r)/2;if(a[m]==k){cout<<m;return 0;}if(a[m]<k)l=m+1;else r=m-1;}
    cout<<-1;

}