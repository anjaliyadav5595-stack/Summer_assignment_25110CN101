#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;for(int i=2;i<=n;i++)fact*=i;
    return fact;
}
bool isstrong(int n){
    int temp=n,sum=0;
    while(temp>0){
        int digit=temp%10;
        sum+=factorial(digit);
        temp/=10;
    }
    return sum==n;
}
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    if(isstrong(num))
    cout<<num<<"is a strong number"<<endl;
    else
    cout<<num<<"is not a strong number"<<endl;
}