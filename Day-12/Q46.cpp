#include<iostream>
#include<cmath>
using namespace std;
bool isarmstrong(int n){
    int original=n;
    int sum=0;
    int digits=0;
    int temp=n;
    while(temp!=0){
        digits++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0){
        int digi=temp%10;
        sum=sum+pow(digit,digits);
        temp=temp/10;
    }
    return sum==original;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(isarmstrong(n)){
        cout<<n<<"is armstrong";
    } else{
        cout<<n<<"is armstrong";

    }else{
        cout<<n<<"is not armstrong";
    }
    return 0;
}
