#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;cin>>n;set<int>s;
    for(int i=0,x;i<n;i++){cin>>x;s.insert(x);}
    for(int x:s)cout<<x<<" ";
}