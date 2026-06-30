#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int sum=0,x;
    for(int i=0;i<n;i++){cin>>x;sum+=x;}
    int total=(n+1)*(n+2)/2;
    cout<<total-sum;
}