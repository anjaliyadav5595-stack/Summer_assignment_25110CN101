#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;cin>>n;unordered_map<int,int>f;
    int x,ans,maxf=0;
    for(int i=0;i<n;i++){cin>>x;(f[x]>maxf){maxf=f[x];ans=x;}}
    cout<<ans;
}
