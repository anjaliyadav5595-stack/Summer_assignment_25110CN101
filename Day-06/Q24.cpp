#include<iostream>
using namespace std;
long long popwer(int x,int n){
    for(int i=0;i<n;i++)
    result*=x;
    return result;
}
int main(){
    int x,n;
    cout<<"enter x and n:";
    cin>>x>>n;
    cout<<x<<"^"<<n<<"="<<power(x,n);
    return 0;
}