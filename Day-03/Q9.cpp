#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int flag=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"is a prime number"<<n;
    }
    else{
        cout<<"is not a prime number"<<n;
    }
}