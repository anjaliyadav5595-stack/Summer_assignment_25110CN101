#include<iostream>
using namespace std;
long long factorial(int n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter number:";
    cin>n;
    if(n<0){
        cout<<"factorial not defined for negative numbers";
    } else{
        cout<<"factorial of"<<n<<"="<<factorial(n);
    }
    return 0;
}