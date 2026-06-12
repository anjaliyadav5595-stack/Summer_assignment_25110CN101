#include<iostream>
using namespace std;
bool isperfect(int n){
    if(n<=1)return false;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    return sum==n;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(isperfect(n)){
        cout<<n<<"is perfect number";

    }else{
        cout<<n<<"is not a prime number";
    }
    return 0;
}