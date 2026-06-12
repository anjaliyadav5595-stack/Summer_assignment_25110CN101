#include<iostream>
#include<math>
using namespace std;
bool isprime(int n){
    if(n<=1)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(isprime(n)){
        cout<<n<<"is prime";

    }else{
        cout<<n<<"is not prime";
    }
    return 0;

}