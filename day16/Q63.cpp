#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n,k;cin>>n>>k;unordered_set<int>s;
    int x;bool found=false;
    for(int i=0;i<n;i++){cin>>x;if(s,count(k-x)){cout<<x" "<<k-x;found=true;break;}s.insert(x);}
    if(!found)cout<<"no pair";
}